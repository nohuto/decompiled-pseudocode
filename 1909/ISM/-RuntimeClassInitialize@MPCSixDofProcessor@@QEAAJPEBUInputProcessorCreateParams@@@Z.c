/*
 * XREFs of ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180131A54
 * Callers:
 *     ??$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18012E790 (--$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180021264 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BD50 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CAB8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x18012EA34 (std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCSixDofProcessor::RuntimeClassInitialize(
        MPCSixDofProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rcx
  std::exception_ptr *v7; // rax
  _BYTE v8[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v9[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v10[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  MPCSixDofProcessor *v12; // [rsp+80h] [rbp+20h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = this;
    __ExceptionPtrCreate(v8);
    v9[0] = v8;
    v9[1] = &v12;
    if ( !std::_Execute_once(
            (struct std::once_flag *)&MPCSixDofProcessor::s_constantsInitialized,
            (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_c5f59095f0ae3e38eeaa5c86892cff4d_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
            v9) )
    {
      if ( __ExceptionPtrToBool(v8) )
      {
        v7 = std::exception_ptr::exception_ptr((std::exception_ptr *)v10, (const struct std::exception_ptr *)v8);
        std::rethrow_exception(v7);
      }
      std::_XGetLastError();
      JUMPOUT(0x180131B29LL);
    }
    __ExceptionPtrDestroy(v8);
    LOBYTE(v12) = 0;
    std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___(v6, (__int64)&v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
