/*
 * XREFs of ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C004A310
 * Callers:
 *     NtUserLockCursor @ 0x1C0093B90 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00AFD10 (NtUserClipCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0036C14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C004A358 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007A7D0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorClip::ClearClip(struct tagRECT *this)
{
  struct tagRECT v2; // [rsp+20h] [rbp-18h] BYREF

  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  v2 = *this;
  CCursorClip::UpdateClipRect((CCursorClip *)this, &v2);
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
}
