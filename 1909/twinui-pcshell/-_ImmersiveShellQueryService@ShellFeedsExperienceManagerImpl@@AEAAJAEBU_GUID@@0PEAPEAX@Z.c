/*
 * XREFs of ?_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800950BC
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800947E8 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 *     ?_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180095D10 (-_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_UnregisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180096378 (-_UnregisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetImmersiveShell@ShellFeedsExperienceManagerImpl@@AEAAJPEAPEAUIServiceProvider@@@Z @ 0x180094F30 (-_GetImmersiveShell@ShellFeedsExperienceManagerImpl@@AEAAJPEAPEAUIServiceProvider@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsExperienceManagerImpl::_ImmersiveShellQueryService(
        ShellFeedsExperienceManagerImpl *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int ImmersiveShell; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct IServiceProvider *v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12[1] = (struct IServiceProvider *)-2LL;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
  ImmersiveShell = ShellFeedsExperienceManagerImpl::_GetImmersiveShell(this, v12);
  v9 = ImmersiveShell;
  if ( ImmersiveShell >= 0 )
  {
    ImmersiveShell = ((__int64 (__fastcall *)(struct IServiceProvider *, const struct _GUID *, const struct _GUID *, void **))v12[0]->lpVtbl->QueryService)(
                       v12[0],
                       a2,
                       a3,
                       a4);
    v9 = ImmersiveShell;
    if ( ImmersiveShell >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = 491LL;
  }
  else
  {
    v10 = 490LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)ImmersiveShell);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
  return v9;
}
