/*
 * XREFs of DPA_Create @ 0x180422F10
 * Callers:
 *     ??0BUCKET@@QEAA@XZ @ 0x180422510 (--0BUCKET@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

HDPA __stdcall DPA_Create(int cItemGrow)
{
  return DPA_CreateEx(cItemGrow, 0LL);
}
