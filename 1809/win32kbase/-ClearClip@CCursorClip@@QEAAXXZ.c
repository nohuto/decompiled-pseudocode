/*
 * XREFs of ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C003A050
 * Callers:
 *     NtUserLockCursor @ 0x1C003B460 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00A1DF0 (NtUserClipCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0034DF0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0038B6C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall CCursorClip::ClearClip(struct tagRECT *this)
{
  struct tagRECT v2; // [rsp+20h] [rbp-18h] BYREF

  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  v2 = *this;
  CCursorClip::UpdateClipRect(this, &v2);
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
}
