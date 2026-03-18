/*
 * XREFs of ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01C1374
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00DAB30 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01C11A0 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00B3938 (PostShellHookMessagesEx.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00DACA0 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C01BB054 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 *     ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C01C0DE0 (-GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01C15C4 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01C19C4 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 */

void __fastcall CLegacyRotationMgr::xxxApplyDockedOrientation(CLegacyRotationMgr *this)
{
  int v1; // ebx
  unsigned int DockedOrientationValue; // esi
  unsigned int *v4; // rdx
  CLegacyRotationMgr *v5; // rcx
  int AutoRotationState; // edi
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  DockedOrientationValue = 0;
  v7 = 0;
  if ( dword_1C0312E6C )
  {
    AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
    if ( ((AutoRotationState - 64) & 0xFFFFFF3F) != 0 || AutoRotationState == 256 )
    {
      if ( ((AutoRotationState - 65) & 0xFFFFFF3F) == 0 && AutoRotationState != 257 )
        DockedOrientationValue = dword_1C0312E44;
    }
    else
    {
      DockedOrientationValue = CLegacyRotationMgr::GetDockedOrientationValue(this, v4);
    }
    if ( !(unsigned int)CLegacyRotationMgr::xxxRotateScreen(v5, DockedOrientationValue, 0, &v7) )
    {
      if ( !v7 )
        v1 = 1;
      TraceLoggingScreenOrientationChangeEvent(DockedOrientationValue, 2LL, v1);
      if ( ((AutoRotationState - 64) & 0xFFFFFF3F) == 0 && AutoRotationState != 256 )
      {
        CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, 0);
        PostShellHookMessagesEx(0x32u, dword_1C0312E48, 0LL);
      }
    }
  }
}
