/*
 * XREFs of ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C003FC60
 * Callers:
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C00421B0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0065874 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01779E4 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0177B30 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0037C84 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     SendAppClipChanged @ 0x1C003FD50 (SendAppClipChanged.c)
 *     ?SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z @ 0x1C0041BE4 (-SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007DFD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00998E8 (ApiSetEditionInternalSetCursorPos.c)
 */

void __fastcall CCursorClip::UpdateClipRect(const struct tagRECT *this, struct tagRECT *a2)
{
  LONG left; // r9d
  LONG right; // r8d
  LONG top; // ecx
  LONG bottom; // r10d
  LONG v7; // eax
  LONG v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct tagRECT v11; // [rsp+20h] [rbp-18h] BYREF

  left = this->left;
  right = this->right;
  top = this->top;
  if ( left <= a2->left )
    left = a2->left;
  bottom = this->bottom;
  if ( right >= a2->right )
    right = a2->right;
  a2->left = left;
  v7 = a2->top;
  a2->right = right;
  if ( top <= v7 )
    top = v7;
  v8 = a2->bottom;
  a2->top = top;
  if ( bottom >= v8 )
    bottom = v8;
  a2->bottom = bottom;
  if ( left > right || top > bottom )
    *a2 = *this;
  this[1] = *(const struct tagRECT *)a2;
  InputTraceLogging::Mouse::SetAppClip(this + 1);
  v9 = *(_QWORD *)&this[1].left;
  v11 = (struct tagRECT)0LL;
  v10 = v9 - *(_QWORD *)&this->left;
  if ( !v10 )
    v10 = *(_QWORD *)&this[1].right - *(_QWORD *)&this->right;
  if ( v10 )
    v11 = this[1];
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
  SendAppClipChanged(&v11);
  ApiSetEditionInternalSetCursorPos(*((unsigned int *)gpsi + 1240), *((unsigned int *)gpsi + 1241), 2LL);
  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
}
