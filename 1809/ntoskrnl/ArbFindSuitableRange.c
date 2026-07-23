/*
 * XREFs of ArbFindSuitableRange @ 0x1407405E0
 * Callers:
 *     IopMemFindSuitableRange @ 0x1407405B0 (IopMemFindSuitableRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ArbShareDriverExclusive @ 0x140740494 (ArbShareDriverExclusive.c)
 *     RtlFindRange @ 0x1407406E0 (RtlFindRange.c)
 */

char __fastcall ArbFindSuitableRange(__int64 a1, __int64 a2)
{
  ULONGLONG v2; // r10
  ULONGLONG v4; // r8
  __int64 v6; // r9
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // ecx
  ULONG Flags; // r11d
  UCHAR AttributeAvailableMask; // cl

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v2 > v4 )
    return 0;
  v6 = *(_QWORD *)(a2 + 40);
  if ( !*(_QWORD *)(v6 + 16) )
  {
    *(_QWORD *)a2 = v2;
    *(_QWORD *)(a2 + 8) = v2;
    return 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) & 0xFFFFFFFD) == 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  v7 = *(unsigned __int16 *)(a2 + 64);
  v8 = *(_DWORD *)(v6 + 36);
  v9 = (v7 >> 2) & 2;
  Flags = v9 | 1;
  if ( (v8 & 1) == 0 )
    Flags = v9;
  AttributeAvailableMask = *(_BYTE *)(a2 + 67);
  if ( (v8 & 8) != 0 )
  {
    AttributeAvailableMask |= 0x40u;
    *(_BYTE *)(a2 + 67) = AttributeAvailableMask;
  }
  if ( RtlFindRange(
         *(PRTL_RANGE_LIST *)(a1 + 48),
         v2,
         v4,
         *(_QWORD *)(v6 + 16),
         *(_QWORD *)(v6 + 24),
         Flags,
         AttributeAvailableMask,
         *(PVOID *)(a1 + 328),
         *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 336),
         (PULONGLONG)a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) - 1LL;
    return 1;
  }
  if ( ArbShareDriverExclusive(a1, a2) )
    return 1;
  return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 272))(a1, a2);
}
