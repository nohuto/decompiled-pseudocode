/*
 * XREFs of IoMmuDeleteTreeNode @ 0x1C004FF24
 * Callers:
 *     IoMmuDestroyPageManager @ 0x1C004FF44 (IoMmuDestroyPageManager.c)
 *     DpiResetIoMmuContext @ 0x1C0050A5C (DpiResetIoMmuContext.c)
 * Callees:
 *     IoMmuDeletePage @ 0x1C0024AF4 (IoMmuDeletePage.c)
 */

void __fastcall IoMmuDeleteTreeNode(void *a1, __int64 a2)
{
  IoMmuDeletePage(a2, a1);
}
