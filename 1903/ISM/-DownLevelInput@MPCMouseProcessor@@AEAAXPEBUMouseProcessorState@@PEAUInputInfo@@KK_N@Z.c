/*
 * XREFs of ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x18013A1DC
 * Callers:
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013A6D8 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x180080EAC (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180080EF0 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x180081988 (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ??$MPCMouseProcessor_InjectPress@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z @ 0x180139C2C (--$MPCMouseProcessor_InjectPress@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z.c)
 *     ??$MPCMouseProcessor_InjectRelease@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z @ 0x180139CA0 (--$MPCMouseProcessor_InjectRelease@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18013C4AC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CAX_.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCMouseProcessor::DownLevelInput(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3,
        int a4,
        unsigned int a5,
        bool a6)
{
  MPCHolographicInputManager *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  unsigned int v17; // r13d
  bool v18; // di
  MPCHolographicInputManager *Instance; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  const char *v22; // r9
  struct IMPCFocusTarget *FocusedTarget; // rbx
  int (__fastcall *v24)(struct IMPCFocusTarget *, GUID *, __int64 *); // rdi
  int v25; // eax
  __int64 v26; // rax
  bool v27; // bl
  MPCHolographicInputManager *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  const char *v31; // r9
  struct IMPCInputPostProcessor *PostProcessor; // r8
  void (__fastcall *v33)(struct IMPCInputPostProcessor *, unsigned __int64); // rax
  int v34; // eax
  __int64 v35; // [rsp+30h] [rbp-20h] BYREF
  __int64 v36; // [rsp+38h] [rbp-18h] BYREF
  __int64 v37[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int64 v39; // [rsp+90h] [rbp+40h] BYREF
  int v40; // [rsp+A0h] [rbp+50h] BYREF

  v37[1] = -2LL;
  *((_BYTE *)a3 + 48) = 0;
  if ( !*((_QWORD *)this + 576)
    || *((_BYTE *)this + 4632)
    || (v10 = MPCHolographicInputManager::GetInstance(),
        (unsigned __int8)MPCHolographicInputManager::IsExclusiveAppFocused(v10, v11, v12, v13)) )
  {
    if ( !*((_BYTE *)this + 6337) || *((_DWORD *)a3 + 10) == *((_DWORD *)this + 1585) )
    {
      v36 = 0LL;
      v14 = *((_QWORD *)this + 582);
      v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 40LL);
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v36);
      v16 = v15(v14, &v36);
      v17 = a5;
      if ( v16 >= 0 && v36 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v36 + 80LL))(v36) )
      {
        *((_WORD *)a3 + 49) = 0;
        *((_DWORD *)a3 + 27) = *((_DWORD *)a2 + 2);
        *((_DWORD *)a3 + 28) = *((_DWORD *)a2 + 3);
        *((_BYTE *)a3 + 130) = 0;
        *((_BYTE *)a3 + 128) = 0;
      }
      else
      {
        *((_DWORD *)a3 + 27) = a4;
        *((_DWORD *)a3 + 28) = v17;
        *((_BYTE *)a3 + 128) = 1;
      }
      wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::ReportUsageToService();
      v18 = a6;
      *((_BYTE *)a3 + 129) = a6;
      v35 = 0LL;
      Instance = MPCHolographicInputManager::GetInstance();
      FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(Instance, v20, v21, v22);
      v37[0] = (__int64)FocusedTarget;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v37);
      if ( FocusedTarget )
      {
        v24 = **(int (__fastcall ***)(struct IMPCFocusTarget *, GUID *, __int64 *))FocusedTarget;
        Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v35);
        if ( v24(FocusedTarget, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v35) < 0 )
        {
          v18 = a6;
        }
        else
        {
          v25 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v35 + 56LL))(v35, &v39);
          if ( v25 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              471LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
              (const char *)(unsigned int)v25);
            __debugbreak();
          }
          v18 = a6;
          if ( (_DWORD)v39 )
            *((_BYTE *)a3 + 131) = 1;
        }
      }
      v26 = *((_QWORD *)this + 576);
      v27 = v26 != 0;
      if ( *((_BYTE *)this + 6337) )
      {
        if ( !v26 )
        {
          LODWORD(v39) = v17;
          v40 = a4;
          ISMTracing::MPCMouseProcessor_InjectRelease<long,long,unsigned long &,unsigned long const &,unsigned long &>(
            &v40,
            (int *)&v39,
            (unsigned int *)a3 + 1,
            (_DWORD *)a2 + 4,
            (_DWORD *)a3 + 10);
        }
      }
      else if ( v26 )
      {
        v28 = MPCHolographicInputManager::GetInstance();
        PostProcessor = MPCHolographicInputManager::GetPostProcessor(v28, v29, v30, v31);
        v33 = *(void (__fastcall **)(struct IMPCInputPostProcessor *, unsigned __int64))(*(_QWORD *)PostProcessor + 64LL);
        v39 = __PAIR64__(v17, a4);
        v33(PostProcessor, __PAIR64__(v17, a4));
        LODWORD(v39) = v17;
        v40 = a4;
        ISMTracing::MPCMouseProcessor_InjectPress<long,long,unsigned long &,unsigned long const &,unsigned long &>(
          &v40,
          (int *)&v39,
          (unsigned int *)a3 + 1,
          (_DWORD *)a2 + 4,
          (_DWORD *)a3 + 10);
      }
      *((_BYTE *)this + 6337) = v27;
      *((_DWORD *)this + 1585) = *((_DWORD *)a3 + 10);
      *((_DWORD *)this + 1588) = v18;
      *((_DWORD *)this + 1586) = a4;
      *((_DWORD *)this + 1587) = v17;
      v34 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 585) + 24LL))(
              *((_QWORD *)this + 585),
              a2,
              a3);
      if ( v34 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          499LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v34);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v37);
      Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v35);
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v36);
    }
  }
}
