/*
 * XREFs of CmInitializeThreadInfo @ 0x1401B3098
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406C0BB0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 */

__int64 __fastcall CmInitializeThreadInfo(__int64 a1)
{
  return CmpInitializeThreadInfo(a1);
}
