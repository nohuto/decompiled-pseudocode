/*
 * XREFs of ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C
 * Callers:
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800412A4 (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F1820 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F1EA8 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F2EC0 (-OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1800F2F18 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F6BC0 (-PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F6E20 (-OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F88C0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F921C (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F9484 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1800F9784 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F9C1C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FEFC0 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FFC00 (-PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800FFD30 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180100BD0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18003C6A4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18003C6E0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
struct MPCGestureHandlerManager *MPCGestureHandlerManager::GetInstance(void)
{
  const char *v0; // r9
  struct MPCGestureHandlerManager *result; // rax
  std::exception_ptr *v2; // rax
  _BYTE v3[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v4[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v5[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  char v7; // [rsp+70h] [rbp+10h] BYREF

  v7 = 0;
  __ExceptionPtrCreate(v3);
  v4[0] = v3;
  v4[1] = &v7;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCGestureHandlerManager::s_singletonCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_810dcc79efb0a72353c94b2711027391_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v4) )
  {
    if ( !__ExceptionPtrToBool(v3) )
    {
      std::_XGetLastError();
      __debugbreak();
    }
    v2 = std::exception_ptr::exception_ptr((std::exception_ptr *)v5, (const struct std::exception_ptr *)v3);
    std::rethrow_exception(v2);
  }
  __ExceptionPtrDestroy(v3);
  result = MPCGestureHandlerManager::s_instance;
  if ( !MPCGestureHandlerManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v0);
    JUMPOUT(0x1800454C7LL);
  }
  return result;
}
