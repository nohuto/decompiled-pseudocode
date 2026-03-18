/*
 * XREFs of ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C011BA7C
 * Callers:
 *     NtUserGetRequiredCursorSizes @ 0x1C011B9D0 (NtUserGetRequiredCursorSizes.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00FFC6C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0100AFC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CCursorSizes::HandleRequestCursorSizesRequest(CCursorSizes *this, struct tagCURSORSIZEINFO *a2)
{
  CCursorSizes *v2; // rdi

  v2 = gpCursorSizes;
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  *(_OWORD *)a2 = *(_OWORD *)((char *)v2 + 20);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)v2 + 36);
  *((_QWORD *)a2 + 4) = *(_QWORD *)((char *)v2 + 52);
  CPushLock::ReleaseLock((CCursorSizes *)((char *)v2 + 64));
}
