/*
 * XREFs of ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C019FF00
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C006E9A8 (PostShellHookMessagesEx.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00BDBC0 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A00DC (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01A0704 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 *     ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01A08E4 (-xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z.c)
 */

void __fastcall CLegacyRotationMgr::RotationLockTogglePressed(CLegacyRotationMgr *this)
{
  unsigned int AutoRotationState; // eax
  BOOL v3; // ebx
  CLegacyRotationMgr *v4; // rcx

  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
  if ( AutoRotationState <= 1 )
  {
    v3 = dword_1C03227A8 == 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, v3);
    CLegacyRotationMgr::xxxSetSlateAutoRotationState(v4, v3);
    PostShellHookMessagesEx(0x32u, dword_1C03227A8, 0LL);
  }
  else if ( (AutoRotationState & 0x2E) == 0 )
  {
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  }
}
