/*
 * XREFs of ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18013F324
 * Callers:
 *     ??$MakeAndInitialize@VMPCHeadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18013EF40 (--$MakeAndInitialize@VMPCHeadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180021744 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BF90 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180083A5C (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCHeadProcessor::RuntimeClassInitialize(
        MPCHeadProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  MPCHolographicInputManager *Instance; // rax
  __int64 v7; // r8
  const char *v8; // r9
  std::exception_ptr *v9; // rax
  _BYTE v10[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  MPCHeadProcessor *v14; // [rsp+80h] [rbp+20h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  if ( v3 < 0 )
  {
    v4 = 21LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcheadprocessor.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v14 = this;
  __ExceptionPtrCreate(v10);
  v11[0] = v10;
  v11[1] = &v14;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCHeadProcessor::s_constantsInitialized,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_0768ca99b5f0498451ffc3dbd3bcf85b_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v11) )
  {
    if ( __ExceptionPtrToBool(v10) )
    {
      v9 = std::exception_ptr::exception_ptr((std::exception_ptr *)v12, (const struct std::exception_ptr *)v10);
      std::rethrow_exception(v9);
    }
    std::_XGetLastError();
    JUMPOUT(0x18013F419LL);
  }
  __ExceptionPtrDestroy(v10);
  Instance = MPCHolographicInputManager::GetInstance();
  v3 = MPCHolographicInputManager::SetProviderPrimary(
         Instance,
         (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
         v7,
         v8);
  if ( v3 < 0 )
  {
    v4 = 26LL;
    goto LABEL_3;
  }
  return 0LL;
}
