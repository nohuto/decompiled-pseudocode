/*
 * XREFs of DPA_Create @ 0x1803C0600
 * Callers:
 *     ??0BUCKET@@QEAA@XZ @ 0x1803BFC70 (--0BUCKET@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

HDPA __stdcall DPA_Create(int cItemGrow)
{
  return DPA_CreateEx(cItemGrow, 0LL);
}
