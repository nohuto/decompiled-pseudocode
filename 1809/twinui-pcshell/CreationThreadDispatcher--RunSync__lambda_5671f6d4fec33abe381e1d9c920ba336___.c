/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_5671f6d4fec33abe381e1d9c920ba336___ @ 0x1801B02E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_174e0b3e0ad398684e58b5b4f186d060___::Run @ 0x1801B4D40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_174e0b3e0ad398684e58b5b4f186d060___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017BC3C (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     CreateAsyncCallbackWithLambda__lambda_84a34e4095d1745ec45b032db64765f5___ @ 0x1801AF0C8 (CreateAsyncCallbackWithLambda__lambda_84a34e4095d1745ec45b032db64765f5___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_5671f6d4fec33abe381e1d9c920ba336___(
        __int64 a1,
        __int128 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IInspectable *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::WeakRef *)(a1 + 48), &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v9 = *a2;
    CreateAsyncCallbackWithLambda__lambda_84a34e4095d1745ec45b032db64765f5_(&v12, &v9);
    if ( v12 )
    {
      v7 = ((__int64 (__fastcall *)(struct IInspectable *))v11->lpVtbl->GetIids)(v11);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
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
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)v5);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v4;
}
