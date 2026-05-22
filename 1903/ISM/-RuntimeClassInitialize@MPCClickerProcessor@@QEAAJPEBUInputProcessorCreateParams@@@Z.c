/*
 * XREFs of ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801407C4
 * Callers:
 *     ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18013F578 (--$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180021744 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BF90 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCClickerProcessor::RuntimeClassInitialize(
        MPCClickerProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  std::exception_ptr *v6; // rcx
  _BYTE v7[8]; // [rsp+28h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-30h]
  _QWORD v9[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v10[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  MPCClickerProcessor *v12; // [rsp+80h] [rbp+20h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = this;
    __ExceptionPtrCreate(v7);
    v9[0] = v7;
    v9[1] = &v12;
    if ( !std::_Execute_once(
            (struct std::once_flag *)&MPCClickerProcessor::s_constantsInitialized,
            (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_a2967a5fef4bd4911d3370ff5cbae9e9_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
            v9) )
    {
      if ( __ExceptionPtrToBool(v7) )
      {
        v6 = std::exception_ptr::exception_ptr((std::exception_ptr *)v10, (const struct std::exception_ptr *)v7);
        std::rethrow_exception(v6);
      }
      std::_XGetLastError();
      JUMPOUT(0x1801408C8LL);
    }
    __ExceptionPtrDestroy(v7);
    v8 = 0;
    *((_QWORD *)this + 584) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1170) = v8;
    v8 = 0;
    *((_QWORD *)this + 587) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1176) = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
