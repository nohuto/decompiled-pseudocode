/*
 * XREFs of ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18008CC98
 * Callers:
 *     ??$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCGestureHandler@@@12@$$QEAPEAUIInputProcessorHost@@@Z @ 0x180084DE4 (--$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VMPCG.c)
 * Callees:
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x180015F98 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800565DC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEAULegacyDeviceInfo@@@Z @ 0x180084C7C (-reset@-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEA.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18008CC20 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@M.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18008D280 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 *     ??0MPCThrottleableInputHelper@@QEAA@IPEBG@Z @ 0x18008EDB0 (--0MPCThrottleableInputHelper@@QEAA@IPEBG@Z.c)
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x18008F268 (--0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1800E73AC (--0ManipulationInjector@@QEAA@XZ.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800E7C10 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x1800E8FB4 (-SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z.c)
 *     ?SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z @ 0x1800E902C (-SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z.c)
 *     ?SetZoomDecreasingThresholds@ManipulationInjector@@QEAAXJJ@Z @ 0x1800E9068 (-SetZoomDecreasingThresholds@ManipulationInjector@@QEAAXJJ@Z.c)
 */

// Hidden C++ exception states: #wind=23
MPCGestureHandler *__fastcall MPCGestureHandler::MPCGestureHandler(
        MPCGestureHandler *this,
        struct IInputProcessorHost *a2)
{
  unsigned int **v4; // rsi
  _QWORD *v5; // r14
  const unsigned __int16 *v6; // r8
  const char *v7; // r9
  const char *v8; // r9
  int v9; // edx
  int v10; // r8d
  HMONITOR v11; // rdx
  unsigned int *v12; // rbx
  int v13; // eax
  const char *v14; // r9
  MPCSpatialGestureRecognizerHandler *v15; // rax
  __int64 v16; // rcx
  const char *v17; // r9
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  _DWORD *v21; // [rsp+80h] [rbp+18h]
  MPCSpatialGestureRecognizerHandler *v22; // [rsp+80h] [rbp+18h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>(this);
  *(_QWORD *)this = &MPCGestureHandler::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRawInputProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &MPCGestureHandler::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = &MPCGestureHandler::`vftable';
  ManipulationInjector::ManipulationInjector((MPCGestureHandler *)((char *)this + 80));
  v4 = (unsigned int **)((char *)this + 888);
  *((_QWORD *)this + 111) = 0LL;
  v5 = (_QWORD *)((char *)this + 896);
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_DWORD *)this + 228) = 0;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_DWORD *)this + 242) = 0;
  *((_BYTE *)this + 972) = 0;
  *((_DWORD *)this + 244) = 100;
  MPCThrottleableInputHelper::MPCThrottleableInputHelper((MPCGestureHandler *)((char *)this + 984), 0x64u, v6);
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)this + 112, (__int64)a2);
  if ( !*((_QWORD *)this + 112) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      24LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v7);
    __debugbreak();
  }
  v21 = operator new(0x620uLL);
  memset_0(v21, 0, 0x620uLL);
  v21[2] = 1568;
  std::unique_ptr<LegacyDeviceInfo>::reset((void **)this + 111, v21);
  if ( !*v4 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      28LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v8);
    __debugbreak();
  }
  if ( IsEdition(8778LL) )
    ManipulationInjector::SetPanOverlapType((char *)this + 80, 0LL);
  ManipulationInjector::SetInjectionMechanism((char *)this + 80);
  *((_QWORD *)this + 109) = (char *)this + 72;
  ManipulationInjector::SetZoomDecreasingThresholds((MPCGestureHandler *)((char *)this + 80), v9, v10);
  ManipulationInjector::Initialize((MPCGestureHandler *)((char *)this + 80), v11, 0LL);
  v12 = *v4;
  *v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5);
  (*v4)[1] = 8;
  v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, char *))(*(_QWORD *)*v5 + 40LL))(*v5, *v4, (char *)this + 8);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      44LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v14);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v22 = (MPCSpatialGestureRecognizerHandler *)operator new(0xD8uLL);
    v15 = MPCSpatialGestureRecognizerHandler::MPCSpatialGestureRecognizerHandler(
            v22,
            **v4,
            (MPCGestureHandler *)((char *)this + 80));
    v18 = *((_QWORD *)this + 113);
    *((_QWORD *)this + 113) = v15;
    if ( v18 )
      std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v16);
    if ( !*((_QWORD *)this + 113) )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        49LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
        v17);
  }
  return this;
}
