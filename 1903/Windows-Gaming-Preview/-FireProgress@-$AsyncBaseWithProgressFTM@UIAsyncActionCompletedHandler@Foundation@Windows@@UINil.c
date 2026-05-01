/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x1800334EC
 * Callers:
 *     ?SetProgress@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x180032BC0 (-SetProgress@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x180023108 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800250B4 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x1800254A0 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::DisableCausality>::FireProgress(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v4; // r14d
  signed __int32 v5; // edx
  IUnknown *v6; // rcx
  struct IUnknown *v7; // rcx
  int v8; // eax
  struct IRpcOptions *v9; // rdi
  unsigned int v10; // eax
  LPSTREAM v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  IUnknown *v14; // rcx
  signed __int32 v16[12]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+38h] [rbp-18h]
  LPSTREAM pStm; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+48h] [rbp-8h]
  struct IUnknown *v21; // [rsp+80h] [rbp+30h] BYREF
  IUnknown *v22; // [rsp+90h] [rbp+40h] BYREF
  struct IRpcOptions *v23; // [rsp+98h] [rbp+48h] BYREF

  v17 = -2LL;
  v4 = 0;
  v18 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v22 = 0LL;
  v5 = *(_DWORD *)(a1 + 152);
  if ( v5 > 0 )
  {
    do
    {
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 152), v5 + 1, v5) )
        break;
      v5 = *(_DWORD *)(a1 + 152);
    }
    while ( v5 > 0 );
    if ( v5 > 0 )
    {
      v6 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
      }
      if ( (**(int (__fastcall ***)(__int64, GUID *, IUnknown **))a1)(
             a1,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v22) >= 0 )
      {
        v7 = *(struct IUnknown **)(a1 + 136);
        v21 = 0LL;
        if ( v7 )
        {
          v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))v7->lpVtbl[1].QueryInterface)(
                 v7,
                 &GUID_2fafaaf9_2986_48ee_919d_98f66edf0a31,
                 &v21);
          v7 = v21;
        }
        else
        {
          v8 = -2147024809;
        }
        if ( v8 >= 0 )
        {
          v23 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v7, &v23);
          v9 = v23;
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm, (__int64)v23, v22, (__int64)v21);
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v21->lpVtbl[1].QueryInterface)(
                  v21,
                  v22,
                  a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v10,
                 (__int64)v21);
          if ( v20 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(pStm);
          }
          v11 = pStm;
          if ( pStm )
          {
            pStm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v11 + 16LL))(v11);
          }
          if ( v9 )
            ((void (__fastcall *)(struct IRpcOptions *))v9->lpVtbl->Release)(v9);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 152), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v16, 0);
          v12 = *(_QWORD *)(a1 + 136);
          *(_QWORD *)(a1 + 136) = 0LL;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v13 = (__int64)v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
  }
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(IUnknown *))v14->lpVtbl->Release)(v14);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
