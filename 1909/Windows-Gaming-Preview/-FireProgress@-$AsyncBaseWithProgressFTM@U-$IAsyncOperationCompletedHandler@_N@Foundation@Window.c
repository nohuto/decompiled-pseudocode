/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x180022820
 * Callers:
 *     ?SetProgress@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x180020F00 (-SetProgress@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComple.c)
 * Callees:
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x180023118 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800250F4 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x1800254E0 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireProgress(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v4; // r14d
  signed __int32 v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  struct IRpcOptions *v9; // rdi
  unsigned int v10; // eax
  LPSTREAM v11; // rcx
  __int64 v12; // rcx
  struct IUnknown *v13; // rcx
  __int64 v14; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h]
  LPSTREAM pStm; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+58h] [rbp-18h]
  GUID v21; // [rsp+60h] [rbp-10h] BYREF
  struct IUnknown *v22; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+40h] BYREF
  struct IRpcOptions *v24; // [rsp+B8h] [rbp+48h] BYREF

  v17 = -2LL;
  v4 = 0;
  v18 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v23 = 0LL;
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
      v6 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
             a1,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v23) >= 0 )
      {
        v7 = *(_QWORD *)(a1 + 136);
        v22 = 0LL;
        if ( v7 )
          v8 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v7 + 24LL))(
                 v7,
                 &GUID_2fafaaf9_2986_48ee_919d_98f66edf0a31,
                 &v22);
        else
          v8 = -2147024809;
        if ( v8 >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v21 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, int))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              &v21,
              a1,
              1);
          }
          v24 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v22, &v24);
          v9 = v24;
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm);
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v22->lpVtbl[1].QueryInterface)(
                  v22,
                  v23,
                  a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v10,
                 v22,
                 *(_QWORD *)(a1 + 144));
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              1LL);
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
        v13 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
        }
      }
    }
  }
  v14 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
