/*
 * XREFs of ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x18013E1D0
 * Callers:
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180130E90 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180135A80 (-OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180137B30 (-OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18013B310 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCClickerProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18013FBA0 (-OnDeviceRemoval@MPCClickerProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180057368 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800835A4 (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008601C (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800863AC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?MPCEyeGazeProcessor_DeviceDetached_@ISMTracing@@QEAAXK@Z @ 0x18013DCC8 (-MPCEyeGazeProcessor_DeviceDetached_@ISMTracing@@QEAAXK@Z.c)
 */

__int64 __fastcall MPCInputProviderBase::OnDeviceRemoval(MPCInputProviderBase *this, struct DeviceInfo *a2)
{
  struct IMPCInputProviderBase *v2; // rdi
  const char *v4; // r9
  MPCGestureHandlerManager *v5; // rax
  MPCGestureHandlerManager *v6; // rbx
  __int64 *v7; // rax
  MPCHolographicInputManager *Instance; // rax
  __int64 v9; // rcx
  int *v10; // rbx
  __int64 v11; // rcx
  ISMTracing *v12; // rcx
  struct MPCHolographicInputManager *v13; // rax
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = (MPCInputProviderBase *)((char *)this + 24);
  if ( *(_DWORD *)a2 != (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 3) + 80LL))((char *)this + 24) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      250LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      v4);
    __debugbreak();
  }
  MPCGestureHandlerManager::GetInstance();
  v6 = v5;
  v7 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         &v17,
         (__int64)v2);
  MPCGestureHandlerManager::DetachProvider(v6, v7);
  Instance = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::RemoveInputProvider(Instance, v2);
  if ( (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v2 + 104LL))(v2) == 8 )
  {
    v10 = (int *)*((_QWORD *)this + 6);
    if ( ISMTracing::IsEnabled(v9) )
    {
      wil::details::static_lazy<ISMTracing>::get(v11, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCEyeGazeProcessor_DeviceDetached_(v12, *v10);
    }
    if ( *((struct IMPCInputProviderBase **)MPCHolographicInputManager::GetInstance() + 294) == v2 )
    {
      v13 = MPCHolographicInputManager::GetInstance();
      v14 = *((_QWORD *)v13 + 294);
      if ( v14 )
      {
        *((_QWORD *)v13 + 294) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  return 0LL;
}
