/*
 * XREFs of PopGetRemainingHibernateRangeDataSize @ 0x14057DCE4
 * Callers:
 *     PopWriteHiberPages @ 0x14056AC48 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14056B5F4 (PopRequestWrite.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x14000F420 (RtlNumberOfClearBits.c)
 *     RtlFindNextForwardRunClear @ 0x140028C00 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall PopGetRemainingHibernateRangeDataSize(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // r8
  __int64 i; // rdi
  __int64 v5; // rcx
  ULONG v6; // edx
  ULONG NextForwardRunClear; // eax
  ULONG StartingRunIndex; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 104);
  v2 = (_QWORD *)(a1 + 64);
  for ( i = 0LL; v1 != v2; *(_QWORD *)(a1 + 104) = v1 )
  {
    v5 = (v1[4] - v1[3]) << 12;
    v1 = (_QWORD *)*v1;
    i += v5;
  }
  v6 = *(_DWORD *)(a1 + 112);
  do
  {
    NextForwardRunClear = RtlFindNextForwardRunClear(*(PRTL_BITMAP *)(a1 + 96), v6, &StartingRunIndex);
    v6 = NextForwardRunClear + StartingRunIndex;
    i += (unsigned __int64)NextForwardRunClear << 12;
  }
  while ( NextForwardRunClear );
  if ( *(_QWORD *)(a1 + 96) == a1 + 32 )
    i += (unsigned __int64)RtlNumberOfClearBits((PRTL_BITMAP)(a1 + 48)) << 12;
  return i;
}
