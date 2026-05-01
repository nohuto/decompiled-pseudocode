/*
 * XREFs of ?_GetImmersiveShell@ShellFeedsExperienceManagerImpl@@AEAAJPEAPEAUIServiceProvider@@@Z @ 0x180094F30
 * Callers:
 *     ?_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800950BC (-_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180083C60 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_GetImmersiveShell(
        ShellFeedsExperienceManagerImpl *this,
        struct IServiceProvider **a2)
{
  __int64 *v2; // rbx
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v6; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v2 = (__int64 *)((char *)this + 48);
  if ( *((_QWORD *)this + 6)
    || (ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>((__int64 *)this + 6),
        Instance = CoCreateInstance(
                     &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                     0LL,
                     0x404u,
                     &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                     (LPVOID *)ppv),
        v6 = Instance,
        Instance >= 0) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v2);
    *a2 = (struct IServiceProvider *)*v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    return v6;
  }
}
