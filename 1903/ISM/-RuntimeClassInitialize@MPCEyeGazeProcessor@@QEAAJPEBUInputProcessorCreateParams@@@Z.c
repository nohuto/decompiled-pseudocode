/*
 * XREFs of ?RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18013EE14
 * Callers:
 *     ??$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18013E904 (--$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180021744 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BF90 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCEyeGazeProcessor::RuntimeClassInitialize(
        MPCEyeGazeProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  std::exception_ptr *v6; // rcx
  _BYTE v7[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  MPCEyeGazeProcessor *v11; // [rsp+80h] [rbp+20h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v11 = this;
    __ExceptionPtrCreate(v7);
    v8[0] = v7;
    v8[1] = &v11;
    if ( !std::_Execute_once(
            (struct std::once_flag *)&MPCEyeGazeProcessor::s_constantsInitialized,
            (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_0768ca99b5f0498451ffc3dbd3bcf85b_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
            v8) )
    {
      if ( __ExceptionPtrToBool(v7) )
      {
        v6 = std::exception_ptr::exception_ptr((std::exception_ptr *)v9, (const struct std::exception_ptr *)v7);
        std::rethrow_exception(v6);
      }
      std::_XGetLastError();
      JUMPOUT(0x18013EEDCLL);
    }
    __ExceptionPtrDestroy(v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpceyegazeprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
