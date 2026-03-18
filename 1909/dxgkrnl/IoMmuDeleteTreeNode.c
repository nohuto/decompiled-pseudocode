/*
 * XREFs of IoMmuDeleteTreeNode @ 0x1C004FF64
 * Callers:
 *     IoMmuDestroyPageManager @ 0x1C004FF84 (IoMmuDestroyPageManager.c)
 *     DpiResetIoMmuContext @ 0x1C0050A9C (DpiResetIoMmuContext.c)
 * Callees:
 *     IoMmuDeletePage @ 0x1C0024C0C (IoMmuDeletePage.c)
 */

void __fastcall IoMmuDeleteTreeNode(void *a1, __int64 a2)
{
  IoMmuDeletePage(a2, a1);
}
