/*
 * XREFs of wistd::__function::__func__lambda_548464be655e837fe70a6c635a8d08fa__long___cdecl(unsigned_int_unsigned___int64___int64)_::operator() @ 0x180081620
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180044C6C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func__lambda_548464be655e837fe70a6c635a8d08fa__long___cdecl_unsigned_int_unsigned___int64___int64__::operator()(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  struct IInspectable *v10; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1 + 8;
  v5 = *a4;
  v6 = *a3;
  v7 = *a2;
  v8 = 0;
  v10 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 8), &v10) >= 0 )
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v4 + 16))(
           *(_QWORD *)(v4 + 8) + *(int *)(v4 + 24),
           v7,
           v6,
           v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v8;
}
