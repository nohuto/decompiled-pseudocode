/*
 * XREFs of ?_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180095D10
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800947E8 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180083C60 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVShellFeedsExperienceManagerImpl@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVShellFeedsExperienceManagerImpl@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x180091A3C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@P.c)
 *     ?_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800950BC (-_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x18019D8C8 (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellFeedsExperienceManagerImpl::_RegisterMessages(ShellFeedsExperienceManagerImpl *this)
{
  __int64 *v2; // r9
  int Service; // eax
  unsigned int LastError; // ebx
  int v5; // eax
  __int64 v6; // rdx
  UINT v7; // eax
  const char *v8; // r9
  __int128 v10; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  ShellFeedsExperienceManagerImpl *v14; // [rsp+88h] [rbp+38h] BYREF

  v13 = 0LL;
  v2 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>(&v13);
  Service = ShellFeedsExperienceManagerImpl::_ImmersiveShellQueryService(
              this,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              (void **)v2);
  LastError = Service;
  if ( Service >= 0 )
  {
    v12 = 0LL;
    *(_QWORD *)&v10 = ShellFeedsExperienceManagerImpl::_OnMessageHandler;
    DWORD2(v10) = 0;
    v14 = this;
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v12);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,ShellFeedsExperienceManagerImpl *,long (ShellFeedsExperienceManagerImpl::*)(unsigned int,unsigned __int64,__int64)>(
           &v12,
           (__int64 *)&v14,
           &v10);
    LastError = v5;
    if ( v5 >= 0 )
    {
      v7 = RegisterWindowMessageW(L"ShellFeedsExperienceManager.DeferredSuspensionMessage");
      *((_DWORD *)this + 34) = v7;
      if ( !v7 )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x301,
                      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
                      v8);
        goto LABEL_11;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v13 + 24LL))(
             v13,
             v7,
             (v12 + 8) & -(__int64)(v12 != 0),
             (char *)this + 140);
      LastError = v5;
      if ( v5 >= 0 )
      {
        LastError = 0;
        goto LABEL_11;
      }
      v6 = 770LL;
    }
    else
    {
      v6 = 762LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
LABEL_11:
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v12);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)Service);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return LastError;
}
