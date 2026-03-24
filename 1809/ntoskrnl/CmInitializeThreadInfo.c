/*
 * XREFs of CmInitializeThreadInfo @ 0x1401B2F58
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406BF910 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1401B2F7C (CmpInitializeThreadInfo.c)
 */

__int64 __fastcall CmInitializeThreadInfo(__int64 a1)
{
  return CmpInitializeThreadInfo(a1);
}
