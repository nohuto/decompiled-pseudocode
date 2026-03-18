/*
 * XREFs of ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01757F4
 * Callers:
 *     NtUserLockCursor @ 0x1C0093B90 (NtUserLockCursor.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0036C14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C004A358 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     PtInRect @ 0x1C0052CD4 (PtInRect.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007A7D0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall CCursorClip::LockCursor(CCursorClip *this, struct tagRECT *a2)
{
  const struct tagRECT *v2; // rsi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  LONG top; // r9d
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = (const struct tagRECT *)gpCursorClip;
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)gpCursorClip + 32));
  *(_QWORD *)&v7.left = 0LL;
  if ( PtInRect(a2, *((_QWORD *)gpsi + 620)) )
  {
    *(_QWORD *)&v7.left = v4;
    v5 = HIDWORD(v4);
  }
  else
  {
    top = a2->top;
    LODWORD(v4) = a2->left + (a2->right - a2->left) / 2;
    v7.left = v4;
    LODWORD(v5) = top + (a2->bottom - top) / 2;
    v7.top = v5;
  }
  v7.right = v4 + 1;
  v7.bottom = v5 + 1;
  CCursorClip::UpdateClipRect(v2, &v7);
  CPushLock::ReleaseLock((CPushLock *)&v2[2]);
}
