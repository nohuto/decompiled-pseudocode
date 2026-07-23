/*
 * XREFs of IopPortAddAllocation @ 0x1407395B0
 * Callers:
 *     <none>
 * Callees:
 *     IopPortGetNextAlias @ 0x140739644 (IopPortGetNextAlias.c)
 *     RtlAddRange @ 0x1407398E0 (RtlAddRange.c)
 */

__int64 __fastcall IopPortAddAllocation(__int64 a1, __int64 a2)
{
  ULONGLONG v4; // rdi
  __int64 result; // rax
  __int64 v6; // r10
  ULONGLONG Start; // [rsp+50h] [rbp+8h] BYREF

  RtlAddRange(
    *(PRTL_RANGE_LIST *)(a1 + 48),
    *(_QWORD *)a2,
    *(_QWORD *)(a2 + 8),
    *(_BYTE *)(a2 + 66),
    2 * (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 1) + 1,
    0LL,
    *(PVOID *)(*(_QWORD *)(a2 + 32) + 32LL));
  v4 = *(_QWORD *)a2;
  for ( Start = *(_QWORD *)a2;
        ;
        RtlAddRange(
          *(PRTL_RANGE_LIST *)(a1 + 48),
          Start,
          *(_QWORD *)(v6 + 16) + Start - 1,
          *(_BYTE *)(a2 + 66) | 0x10,
          2 * (*(_DWORD *)(v6 + 36) & 1) + 1,
          0LL,
          *(PVOID *)(*(_QWORD *)(a2 + 32) + 32LL)) )
  {
    result = IopPortGetNextAlias(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL), v4, &Start);
    if ( !(_BYTE)result )
      break;
    v4 = Start;
  }
  return result;
}
