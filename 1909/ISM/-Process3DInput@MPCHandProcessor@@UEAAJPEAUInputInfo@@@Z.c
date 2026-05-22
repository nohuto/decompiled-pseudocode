/*
 * XREFs of ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180136440
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KI@Z @ 0x18007F06C (-SendHomeGesture@MPCManager@@QEAAXKK_KI@Z.c)
 *     ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x18007F128 (-SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082828 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x18012BB6C (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ?MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N1@Z @ 0x180135970 (-MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N1@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HandCursors@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180136820 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HandCursors@@@wil@@CAX_NW4ReportingK.c)
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x180136984 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D110 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x18013E514 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18013E6F0 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCHandProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  char v4; // r15
  struct IMPCTarget *v5; // rbx
  __int64 v6; // rdx
  int v7; // ecx
  char v8; // al
  char v9; // dl
  unsigned int v10; // eax
  const char *v11; // r9
  struct BamoMPCConstantManagerClientPrincipal *v12; // rdi
  int v13; // eax
  char v14; // al
  char v15; // di
  __int64 v16; // rcx
  ISMTracing *v17; // rcx
  MPCHolographicInputManager *Instance; // rdi
  int v19; // eax
  char v20; // al
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  bool v25; // [rsp+90h] [rbp+40h] BYREF
  struct IMPCTarget *v26; // [rsp+98h] [rbp+48h] BYREF
  struct IMPCTarget *v27; // [rsp+A0h] [rbp+50h] BYREF

  v4 = 0;
  v26 = 0LL;
  v5 = *(struct IMPCTarget **)(this + 4576);
  v27 = v5;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v27);
  *(_BYTE *)(this + 8904) = 0;
  v7 = *(_DWORD *)a2 & 0x662600;
  if ( v7 && *((_DWORD *)a2 + 16) == 9 )
  {
    MPCManager::SendHomeGesture(
      MPCManager::s_instance,
      **(_DWORD **)(this + 24),
      *(_DWORD *)(*(_QWORD *)(this + 24) + 4LL),
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 207));
    if ( *(_BYTE *)(this + 8696) )
    {
      *(_BYTE *)(this + 8696) = 0;
      MPCManager::SendHomeGestureReadyChanged(
        MPCManager::s_instance,
        0LL,
        **(_DWORD **)(this + 24),
        *(_DWORD *)(*(_QWORD *)(this + 24) + 4LL),
        *((_QWORD *)a2 + 2),
        *((_DWORD *)a2 + 207),
        *((_DWORD *)a2 + 214));
    }
  }
  else
  {
    if ( !v7 || (v8 = 1, *((_DWORD *)a2 + 16) != 11) )
      v8 = 0;
    v9 = *(_BYTE *)(this + 8696);
    if ( v9 != v8 || v9 && *(_DWORD *)(this + 8700) != *((_DWORD *)a2 + 214) )
    {
      if ( !v7 || (LOBYTE(v6) = 1, *((_DWORD *)a2 + 16) != 11) )
        LOBYTE(v6) = 0;
      *(_BYTE *)(this + 8696) = v6;
      v10 = *((_DWORD *)a2 + 214);
      *(_DWORD *)(this + 8700) = v10;
      MPCManager::SendHomeGestureReadyChanged(
        MPCManager::s_instance,
        v6,
        **(_DWORD **)(this + 24),
        *(_DWORD *)(*(_QWORD *)(this + 24) + 4LL),
        *((_QWORD *)a2 + 2),
        *((_DWORD *)a2 + 207),
        v10);
    }
    memcpy_0((void *)(this + 4632), a2, 0x7F0uLL);
    v12 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v11);
      __debugbreak();
    }
    v13 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(this & -(__int64)(this != 24)) + 48LL))(this & -(__int64)(this != 24));
    if ( MPCConstantManager::GetStaticConstant<bool>((__int64)v12, v13, L"UseSphereCollideablePointsForHitTesting")
      && *((_BYTE *)a2 + 972) )
    {
      v4 = 1;
    }
    wil::Feature<__WilFeatureTraits_Feature_HandCursors>::ReportUsageToService();
    if ( !*((_BYTE *)a2 + 972) || !*((_BYTE *)a2 + 732) || (v14 = 1, !*((_BYTE *)a2 + 733)) )
      v14 = 0;
    if ( v4 || (v15 = 1, v14) )
      v15 = 0;
    if ( v15 != *(_BYTE *)(this + 4608) )
    {
      *(_BYTE *)(this + 4608) = v15;
      if ( ISMTracing::IsEnabled(0LL) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v16,
          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCHandProcessor_UseGazeForTargetingChange_(v17, a2, v15, v4);
      }
    }
    if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
      && MPCHandProcessor::ShouldRequestPrimary((MPCHandProcessor *)(this - 24), a2) )
    {
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    }
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v26);
    v19 = MPCHolographicInputManager::Process3DInput(
            Instance,
            a2,
            (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
            &v26);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        186LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    if ( *((_DWORD *)a2 + 16) == 5 && *(_BYTE *)(this + 4512) || *((_DWORD *)a2 + 16) == 4 && !*(_BYTE *)(this + 4512) )
    {
      v25 = 1;
      v20 = 1;
    }
    else
    {
      v25 = 0;
      v20 = 0;
    }
    if ( v26 )
    {
      if ( !v20 )
      {
        MPCInputProviderBase::ProcessSourceDetectedAndLost((MPCInputProviderBase *)(this - 24), v5, v26, &v25, v23);
        if ( *(_BYTE *)(this + 4512) )
        {
          if ( !v25 && (unsigned int)(*((_DWORD *)a2 + 16) - 4) > 1 )
          {
            v21 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct InputInfo *))(*(_QWORD *)v26 + 24LL))(v26, a2);
            if ( v21 == -2147417853 )
            {
              *(_BYTE *)(this + 4512) = 0;
            }
            else if ( v21 < 0 )
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                210LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
                (const char *)(unsigned int)v21);
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v27);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v26);
  return 0LL;
}
