/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_c34c7e240f50506a2b76cf0f339b670d__&___ptr64_ @ 0x180203D24
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_928947457fe9a2633d945ad0aaf0a4a8___::Run @ 0x1802053B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_928947457fe9a2633d945ad0aaf0a4a8___--.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017BC3C (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     CreateAsyncCallbackWithLambda__lambda_ed8df614f225b8b007ecd48104aab0d8___ @ 0x180203960 (CreateAsyncCallbackWithLambda__lambda_ed8df614f225b8b007ecd48104aab0d8___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_c34c7e240f50506a2b76cf0f339b670d______ptr64_(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IInspectable *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::WeakRef *)(a1 + 48), &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = *a2;
    CreateAsyncCallbackWithLambda__lambda_ed8df614f225b8b007ecd48104aab0d8_(&v11, &v12);
    if ( v11 )
    {
      v7 = ((__int64 (__fastcall *)(struct IInspectable *))v10->lpVtbl->GetIids)(v10);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        goto LABEL_9;
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
      (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
      (const char *)v5);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v4;
}
