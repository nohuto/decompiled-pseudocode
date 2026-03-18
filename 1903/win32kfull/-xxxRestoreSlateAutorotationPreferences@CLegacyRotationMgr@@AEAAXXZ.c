/*
 * XREFs of ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D5514
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00B6E20 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0017CD4 (PostShellHookMessagesEx.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01D5944 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 */

void __fastcall CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(CLegacyRotationMgr *this)
{
  if ( dword_1C0327DA8 != dword_1C0327D78 )
  {
    dword_1C0327D98 = 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, dword_1C0327DA8);
    PostShellHookMessagesEx(0x32u, dword_1C0327D78, 0LL);
  }
}
