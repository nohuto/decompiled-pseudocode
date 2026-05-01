/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x180285ABC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07___::Run @ 0x18028A9D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017BC3C (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     CreateAsyncCallbackWithLambda__lambda_6b03a5b9f901bca31a2e8874ad3128f0___ @ 0x180284A38 (CreateAsyncCallbackWithLambda__lambda_6b03a5b9f901bca31a2e8874ad3128f0___.c)
 *     _lambda_69db3e9761c77a5f5df8b9f478688ffa_::_lambda_69db3e9761c77a5f5df8b9f478688ffa_ @ 0x1802863A0 (_lambda_69db3e9761c77a5f5df8b9f478688ffa_--_lambda_69db3e9761c77a5f5df8b9f478688ffa_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IInspectable *v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::WeakRef *)(a1 + 48), &v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    lambda_69db3e9761c77a5f5df8b9f478688ffa_::_lambda_69db3e9761c77a5f5df8b9f478688ffa_(&v9, a2);
    CreateAsyncCallbackWithLambda__lambda_6b03a5b9f901bca31a2e8874ad3128f0_(&v13, (__int64)&v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v13 )
    {
      v7 = ((__int64 (__fastcall *)(struct IInspectable *))v12->lpVtbl->GetIids)(v12);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_12:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        goto LABEL_13;
      }
      v5 = (unsigned int)v7;
      v6 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v5 = 2147942414LL;
      v6 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)v5);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v4;
}
