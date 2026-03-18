/*
 * XREFs of ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C0148C34
 * Callers:
 *     NtSetShellCursorState @ 0x1C00EE310 (NtSetShellCursorState.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0034DF0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C0088330 (ApiSetEditionInternalSetCursorPos.c)
 *     SendShellClipChanged @ 0x1C01515A0 (SendShellClipChanged.c)
 */

__int64 __fastcall CCursorClip::SetShellClip(CCursorClip *this, struct tagRECT *a2, int a3)
{
  CCursorClip *v3; // rdi
  __int64 v6; // rcx

  v3 = gpCursorClip;
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)gpCursorClip + 32));
  v6 = *((_QWORD *)v3 + 10);
  if ( v6 )
    Win32FreePool(v6);
  *((_QWORD *)v3 + 10) = a2;
  *((_DWORD *)v3 + 22) = a3;
  CPushLock::ReleaseLock((CCursorClip *)((char *)v3 + 32));
  SendShellClipChanged(a2);
  if ( a3 )
    ApiSetEditionInternalSetCursorPos(*((_DWORD *)gpsi + 1240), *((_DWORD *)gpsi + 1241), 2u);
  return 0LL;
}
