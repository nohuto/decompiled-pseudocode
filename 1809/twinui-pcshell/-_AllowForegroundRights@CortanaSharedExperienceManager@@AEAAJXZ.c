/*
 * XREFs of ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180154644
 * Callers:
 *     ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180151D90 (-EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180153550 (-OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetRegisteredForForegroundControl@CortanaSharedExperienceManager@@AEAAJPEAPEAUITrustedComponentForegroundControl@@@Z @ 0x180154B20 (-_GetRegisteredForForegroundControl@CortanaSharedExperienceManager@@AEAAJPEAPEAUITrustedComponen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_AllowForegroundRights(CortanaSharedExperienceManager *this)
{
  int RegisteredForForegroundControl; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ITrustedComponentForegroundControl *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  RegisteredForForegroundControl = CortanaSharedExperienceManager::_GetRegisteredForForegroundControl(this, &v7);
  v3 = RegisteredForForegroundControl;
  if ( RegisteredForForegroundControl >= 0 )
  {
    RegisteredForForegroundControl = (*(__int64 (__fastcall **)(struct ITrustedComponentForegroundControl *))(*(_QWORD *)v7 + 24LL))(v7);
    v3 = RegisteredForForegroundControl;
    if ( RegisteredForForegroundControl >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 793LL;
  }
  else
  {
    v4 = 792LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)RegisteredForForegroundControl);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return v3;
}
