/*
 * XREFs of ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C00421B0
 * Callers:
 *     NtUserLockCursor @ 0x1C00951C0 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00B2C40 (NtUserClipCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0037C84 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C003FC60 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007DFD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorClip::ClearClip(const struct tagRECT *this)
{
  struct tagRECT v2; // [rsp+20h] [rbp-18h] BYREF

  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  v2 = *this;
  CCursorClip::UpdateClipRect(this, &v2);
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
}
