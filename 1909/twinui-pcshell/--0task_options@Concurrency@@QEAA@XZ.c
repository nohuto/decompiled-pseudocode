/*
 * XREFs of ??0task_options@Concurrency@@QEAA@XZ @ 0x1801E3970
 * Callers:
 *     ?RefreshFirstTime@CortanaStoreAppHelper@@YAJXZ @ 0x1801E6D78 (-RefreshFirstTime@CortanaStoreAppHelper@@YAJXZ.c)
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x18030B640 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::operator() @ 0x18030BF84 (_lambda_152963d5211cf6149a80abe334e76dfa_--operator().c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1801E3920 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1801ECF34 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
Concurrency::task_options *__fastcall Concurrency::task_options::task_options(Concurrency::task_options *this)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  std::exception_ptr *v6; // rcx
  _BYTE v7[16]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+48h] [rbp-28h] BYREF
  char *v10; // [rsp+88h] [rbp+18h] BYREF

  LOBYTE(v10) = 0;
  __ExceptionPtrCreate(v7);
  v8[0] = v7;
  v8[1] = &v10;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&`Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_Flag,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_0e64988457575224279dcb6d61e61bdd_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v8) )
  {
    if ( __ExceptionPtrToBool(v7) )
    {
      v6 = std::exception_ptr::exception_ptr((std::exception_ptr *)v9, (const struct std::exception_ptr *)v7);
      std::rethrow_exception(v6);
    }
    std::_XGetLastError();
    JUMPOUT(0x1801E3A66LL);
  }
  __ExceptionPtrDestroy(v7);
  v2 = (__int64 *)`Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_S_scheduler_address;
  v3 = *(_QWORD *)(`Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_S_scheduler_address + 8);
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = v2[1];
  }
  v4 = *v2;
  *(_QWORD *)this = v4;
  *((_QWORD *)this + 1) = v3;
  *((_QWORD *)this + 2) = v4;
  *((_QWORD *)this + 3) = 0LL;
  v10 = (char *)this + 32;
  Concurrency::task_continuation_context::task_continuation_context((Concurrency::task_options *)((char *)this + 32));
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *((_WORD *)this + 44) = 0;
  return this;
}
