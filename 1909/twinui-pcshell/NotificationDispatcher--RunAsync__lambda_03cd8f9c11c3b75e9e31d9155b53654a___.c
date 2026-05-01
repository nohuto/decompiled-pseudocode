/*
 * XREFs of NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x18017726C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x180178220 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--Run.c)
 * Callees:
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180031A00 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800604C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e___ @ 0x180177090 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180177CDC (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___(
        NotificationDispatcher *this,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 *CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e; // rax
  volatile int *v5; // rdx
  struct IAsyncCallback *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  struct IAsyncCallback *v16; // [rsp+50h] [rbp+18h] BYREF

  v13[0] = 0LL;
  if ( v13 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v13[0] = v3;
  }
  v13[1] = a2[1];
  CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e___(&v15, v13);
  v6 = (struct IAsyncCallback *)*CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e;
  *CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e = 0LL;
  v7 = v15;
  v16 = v6;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
      v7,
      v5);
  }
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(v13);
  if ( v6 )
  {
    v11 = NotificationDispatcher::AddTask(this, v6);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v8 = 0;
      goto LABEL_11;
    }
    v10 = (unsigned int)v11;
    v9 = 29LL;
  }
  else
  {
    v8 = -2147024882;
    v9 = 28LL;
    v10 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
    (const char *)v10);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v8;
}
