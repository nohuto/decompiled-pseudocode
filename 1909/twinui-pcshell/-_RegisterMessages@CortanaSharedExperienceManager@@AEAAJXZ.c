/*
 * XREFs of ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18019FE9C
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18019EF18 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVCortanaSharedExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVCortanaSharedExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x18019B808 (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_18019B808.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x18019D8C8 (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18019FC70 (-_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::_RegisterMessages(CortanaSharedExperienceManager *this)
{
  int v2; // eax
  unsigned int LastError; // ebx
  int v4; // eax
  __int64 v5; // rdx
  UINT v6; // eax
  const char *v7; // r9
  UINT v8; // eax
  __int64 v9; // rdx
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF
  void *v14; // [rsp+80h] [rbp+30h] BYREF
  CortanaSharedExperienceManager *v15; // [rsp+88h] [rbp+38h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  v2 = CortanaSharedExperienceManager::_ImmersiveShellQueryService(
         this,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         &v14);
  LastError = v2;
  if ( v2 >= 0 )
  {
    v13 = 0LL;
    *(_QWORD *)&v11 = CortanaSharedExperienceManager::_OnMessageHandler;
    DWORD2(v11) = 0;
    v15 = this;
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v13);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,CortanaSharedExperienceManager *,long (CortanaSharedExperienceManager::*)(unsigned int,unsigned __int64,__int64)>(
           &v13,
           (__int64 *)&v15,
           &v11);
    LastError = v4;
    if ( v4 < 0 )
    {
      v5 = 1212LL;
      goto LABEL_13;
    }
    v4 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v14 + 24LL))(
           v14,
           0LL,
           (v13 + 8) & -(__int64)(v13 != 0),
           (char *)this + 432);
    LastError = v4;
    if ( v4 < 0 )
    {
      v5 = 1218LL;
      goto LABEL_13;
    }
    v6 = RegisterWindowMessageW(L"CortanaExperienceManager.ResetActivationTimeoutPolicyMessage");
    *((_DWORD *)this + 112) = v6;
    if ( v6 )
    {
      v4 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v14 + 24LL))(
             v14,
             v6,
             (v13 + 8) & -(__int64)(v13 != 0),
             (char *)this + 452);
      LastError = v4;
      if ( v4 < 0 )
      {
        v5 = 1223LL;
        goto LABEL_13;
      }
      v8 = RegisterWindowMessageW(L"CortanaExperienceManager.DeferredSuspensionMessage");
      *((_DWORD *)this + 116) = v8;
      if ( v8 )
      {
        v4 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v14 + 24LL))(
               v14,
               v8,
               (v13 + 8) & -(__int64)(v13 != 0),
               (char *)this + 468);
        LastError = v4;
        if ( v4 >= 0 )
        {
          LastError = 0;
          goto LABEL_18;
        }
        v5 = 1228LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
LABEL_18:
        Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v13);
        goto LABEL_19;
      }
      v9 = 1227LL;
    }
    else
    {
      v9 = 1222LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v9,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
                  v7);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return LastError;
}
