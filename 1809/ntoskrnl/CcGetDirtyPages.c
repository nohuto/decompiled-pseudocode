/*
 * XREFs of CcGetDirtyPages @ 0x1401200B0
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPartition @ 0x1401200F0 (CcForEachPartition.c)
 */

LARGE_INTEGER __stdcall CcGetDirtyPages(
        PVOID LogHandle,
        PDIRTY_PAGE_ROUTINE DirtyPageRoutine,
        PVOID Context1,
        PVOID Context2)
{
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  LARGE_INTEGER v6; // [rsp+40h] [rbp-18h]

  v6.QuadPart = 0LL;
  v5[2] = Context1;
  LOBYTE(Context1) = 1;
  v5[0] = LogHandle;
  v5[1] = DirtyPageRoutine;
  v5[3] = Context2;
  CcForEachPartition(CcGetDirtyPagesHelper, v5, Context1);
  return v6;
}
