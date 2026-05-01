/*
 * XREFs of ??$make_exception_ptr@PE$AAVException@Platform@@@std@@YA?AVexception_ptr@0@PE$AAVException@Platform@@@Z @ 0x1802EC0F4
 * Callers:
 *     _lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator() @ 0x1802ECD60 (_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void *__fastcall std::make_exception_ptr<Platform::Exception __gc *>(void *a1, __int64 a2)
{
  _BYTE v4[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v5 = __abi_winrt_ptr_ctor(a2);
  __ExceptionPtrCreate(v4);
  __ExceptionPtrCopyException(v4, &v5, &TI9PE_AAVException_Platform__);
  __ExceptionPtrCopy(a1, v4);
  __ExceptionPtrDestroy(v4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return a1;
}
