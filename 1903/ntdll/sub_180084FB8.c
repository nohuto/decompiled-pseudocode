/*
 * XREFs of sub_180084FB8 @ 0x180084FB8
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 */

__int64 __fastcall sub_180084FB8(_DWORD *a1)
{
  if ( BYTE1(qword_180166590) )
  {
    *a1 = BYTE1(qword_180166590);
  }
  else if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    *a1 = 20;
  }
  else
  {
    RtlRunOnceExecuteOnce(&stru_180166498, sub_18008BF20, 0LL, 0LL);
    *a1 = dword_180162718;
  }
  return 0LL;
}
