/*
 * XREFs of IopPortFindSuitableRange @ 0x140740310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlFindRange @ 0x1407406E0 (RtlFindRange.c)
 */

char __fastcall IopPortFindSuitableRange(__int64 a1, unsigned __int64 *a2)
{
  UCHAR AttributeAvailableMask; // r8
  unsigned __int64 v4; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  ULONGLONG v8; // r10
  ULONGLONG v9; // r11

  AttributeAvailableMask = 0;
  v4 = a2[5];
  v6 = *(_QWORD *)(v4 + 16);
  if ( !v6 )
  {
    a2[1] = *a2;
    return 1;
  }
  v7 = a2[4];
  if ( (*(_DWORD *)(v7 + 40) & 0xFFFFFFFD) == 0 || (*(_DWORD *)(v7 + 44) & 1) != 0 )
    AttributeAvailableMask = 1;
  v8 = a2[2];
  v9 = a2[3];
  if ( v8 <= v9
    && (RtlFindRange(
          *(PRTL_RANGE_LIST *)(a1 + 48),
          v8,
          v9,
          v6,
          *(_QWORD *)(v4 + 24),
          *(_DWORD *)(v4 + 36) & 1,
          AttributeAvailableMask,
          *(PVOID *)(a1 + 328),
          *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 336),
          a2) >= 0
     || (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *))(a1 + 272))(a1, a2)) )
  {
    a2[1] = *a2 + *(_QWORD *)(a2[5] + 16) - 1LL;
    return 1;
  }
  return 0;
}
