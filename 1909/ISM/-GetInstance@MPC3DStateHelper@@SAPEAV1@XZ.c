/*
 * XREFs of ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18001FC68
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1800071F0 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18001F11C (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18001F868 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18001F910 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18001FB38 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800543AC (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x180055350 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180055B04 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x180082540 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x180093B7C (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x180097910 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x18009E2B0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x180144B70 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BD50 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CAB8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
struct MPC3DStateHelper *MPC3DStateHelper::GetInstance(void)
{
  const char *v0; // r9
  struct MPC3DStateHelper *result; // rax
  __int64 v2; // rax
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
          (struct std::once_flag *)&MPC3DStateHelper::s_singletonCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_4bfd0116db80ce4255855ce8af72e9c8_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v4) )
  {
LABEL_4:
    if ( __ExceptionPtrToBool(v3) )
    {
      v2 = std::exception_ptr::exception_ptr((std::exception_ptr *)v5, (const struct std::exception_ptr *)v3);
      std::rethrow_exception(v2);
    }
    std::_XGetLastError();
    JUMPOUT(0x1800497B9LL);
  }
  __ExceptionPtrDestroy(v3);
  result = (struct MPC3DStateHelper *)MPC3DStateHelper::s_instance;
  if ( !MPC3DStateHelper::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v0);
    goto LABEL_4;
  }
  return result;
}
