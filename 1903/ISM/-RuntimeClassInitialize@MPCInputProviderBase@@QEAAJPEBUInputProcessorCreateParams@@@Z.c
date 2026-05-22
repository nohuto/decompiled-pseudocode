/*
 * XREFs of ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180021744
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800213D8 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18012C360 (-RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180131A54 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180136880 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180139048 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18013EE14 (-RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18013F324 (-RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHomeGestureProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18013F518 (-RuntimeClassInitialize@MPCHomeGestureProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801407C4 (-RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x180015F98 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Initialize@MPCPerfCounter@@QEAAXKI@Z @ 0x1800218B8 (-Initialize@MPCPerfCounter@@QEAAXKI@Z.c)
 *     ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180021944 (-AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x1800539E0 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?MPCEyeGazeProcessor_DeviceAttached_@ISMTracing@@QEAAXK@Z @ 0x18013DC44 (-MPCEyeGazeProcessor_DeviceAttached_@ISMTracing@@QEAAXK@Z.c)
 *     ?MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x18013DD4C (-MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 */

__int64 __fastcall MPCInputProviderBase::RuntimeClassInitialize(
        MPCInputProviderBase *this,
        const struct InputProcessorCreateParams *a2)
{
  MPCHolographicInputManager *Instance; // rax
  char *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  struct MPCHolographicInputManager *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int *v14; // rbx
  __int64 v15; // rcx
  ISMTracing *v16; // rcx
  struct MPCHolographicInputManager *v17; // rax
  _QWORD *v18; // rcx
  const char *v19; // r9
  ISMTracing *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 6) = *(_QWORD *)a2;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 1);
  Instance = MPCHolographicInputManager::GetInstance();
  v4 = (char *)this + 24;
  v5 = MPCHolographicInputManager::AddInputProvider(Instance, (MPCInputProviderBase *)((char *)this + 24));
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    if ( !*((_QWORD *)MPCHolographicInputManager::GetInstance() + 288) )
    {
      v7 = MPCHolographicInputManager::GetInstance();
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)v7 + 288, *((_QWORD *)this + 5));
    }
    if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v4 + 104LL))((char *)this + 24) == 8 )
    {
      v14 = (unsigned int *)*((_QWORD *)this + 6);
      if ( ISMTracing::IsEnabled(v8) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v15,
          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCEyeGazeProcessor_DeviceAttached_(v16, *v14);
      }
      v17 = MPCHolographicInputManager::GetInstance();
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((char *)v17 + 2352, (char *)this + 24);
    }
    if ( !*((_QWORD *)MPCHolographicInputManager::GetInstance() + 293)
      && (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v4 + 104LL))((char *)this + 24) == 1 )
    {
      v18 = (_QWORD *)((char *)MPCHolographicInputManager::GetInstance() + 2344);
      if ( *v18 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x71,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
          v19);
        __debugbreak();
      }
      Microsoft::WRL::ComPtr<IInputTarget>::operator=(v18, (char *)this + 24);
    }
    v9 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 104LL))((char *)this + 24);
    v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 80LL))((char *)this + 24);
    MPCPerfCounter::Initialize((MPCInputProviderBase *)((char *)this + 4544), v10, v9);
    if ( ISMTracing::IsEnabled(v11) )
    {
      wil::details::static_lazy<ISMTracing>::get(v12, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCInputProviderBase_Create_(v20, *((const struct DeviceInfo **)this + 6));
    }
    return 0LL;
  }
}
