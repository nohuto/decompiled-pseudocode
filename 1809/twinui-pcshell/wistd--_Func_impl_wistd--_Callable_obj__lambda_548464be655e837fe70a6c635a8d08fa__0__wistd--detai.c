/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18007EEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017738 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rdi
  unsigned int v8; // ebx
  struct IInspectable *v10; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a4;
  v5 = *a3;
  v6 = *a2;
  v7 = a1 + 8;
  v8 = 0;
  v10 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 8), &v10) >= 0 )
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v7 + 16))(
           *(_QWORD *)(v7 + 8) + *(int *)(v7 + 24),
           v6,
           v5,
           v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v8;
}
