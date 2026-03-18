/*
 * XREFs of ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0038B6C
 * Callers:
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C003A050 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C003BFA0 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0148A94 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0148BE0 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0034DF0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     SendAppClipChanged @ 0x1C0038B20 (SendAppClipChanged.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C0088330 (ApiSetEditionInternalSetCursorPos.c)
 */

void __fastcall CCursorClip::UpdateClipRect(struct tagRECT *this, struct tagRECT *a2)
{
  LONG left; // r9d
  LONG right; // r8d
  LONG top; // r10d
  LONG bottom; // r11d
  LONG v6; // eax
  LONG v7; // eax
  __int128 v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rdx
  CPushLock *v11; // rbx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  left = this->left;
  right = this->right;
  top = this->top;
  if ( this->left <= a2->left )
    left = a2->left;
  bottom = this->bottom;
  if ( right >= a2->right )
    right = a2->right;
  a2->left = left;
  v6 = a2->top;
  a2->right = right;
  if ( top <= v6 )
    top = v6;
  v7 = a2->bottom;
  a2->top = top;
  if ( bottom >= v7 )
    bottom = v7;
  a2->bottom = bottom;
  if ( left > right || top > bottom )
    *a2 = *this;
  v8 = (__int128)*a2;
  this[1] = *a2;
  v9 = *(_QWORD *)&this[1].left;
  v12 = 0uLL;
  v10 = v9 - *(_QWORD *)&this->left;
  if ( !v10 )
    v10 = *(_QWORD *)&this[1].right - *(_QWORD *)&this->right;
  if ( v10 )
    v12 = v8;
  v11 = (CPushLock *)&this[2];
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
  SendAppClipChanged(&v12);
  ApiSetEditionInternalSetCursorPos(*((unsigned int *)gpsi + 1240), *((unsigned int *)gpsi + 1241), 2LL);
  CPushLock::AcquireLockExclusive(v11);
}
