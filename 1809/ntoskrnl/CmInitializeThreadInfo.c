/*
 * XREFs of CmInitializeThreadInfo @ 0x1401B2F38
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406BF930 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1401B2F5C (CmpInitializeThreadInfo.c)
 */

__int64 __fastcall CmInitializeThreadInfo(__int64 a1)
{
  return CmpInitializeThreadInfo(a1);
}
