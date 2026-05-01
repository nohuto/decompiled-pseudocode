/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___ @ 0x1801F6180
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___::Run @ 0x1801F6940 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801CA22C (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     CreateAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___ @ 0x1801F5D70 (CreateAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___(__int64 a1, int *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  int v9; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct IInspectable *v13; // [rsp+50h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF

  v13 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::WeakRef *)(a1 + 48), &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v9 = *a2;
    v10 = *((_QWORD *)a2 + 1);
    v11 = (std::_Ref_count_base *)*((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
    CreateAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330_(&v14, (__int64)&v9);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    if ( v14 )
    {
      v7 = ((__int64 (__fastcall *)(struct IInspectable *))v13->lpVtbl->GetIids)(v13);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        goto LABEL_11;
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
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v4;
}
