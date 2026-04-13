/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001C100
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001C830 (-FireCompletion@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Fo.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001CA00 (-InvokeFireCompletion@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-.c)
 *     ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x18001D4D8 (-_AfterComplete@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyn.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180004C7C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180004D5C (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r15d
  struct IRpcOptions *v3; // rdi
  int v4; // r14d
  IUnknown *v5; // rdi
  struct IUnknown *v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rcx
  LPSTREAM v9; // rcx
  struct IUnknown *v10; // rcx
  LPUNKNOWN v11; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-79h] BYREF
  LPUNKNOWN pUnk; // [rsp+40h] [rbp-39h] BYREF
  struct IRpcOptions *v15[4]; // [rsp+48h] [rbp-31h] BYREF
  LPSTREAM ppstm; // [rsp+68h] [rbp-11h] BYREF
  HRESULT v17; // [rsp+70h] [rbp-9h]
  GUID v18; // [rsp+80h] [rbp+7h] BYREF
  GUID v19; // [rsp+90h] [rbp+17h] BYREF
  signed __int32 v20; // [rsp+E0h] [rbp+67h] BYREF
  signed __int32 v21; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v22; // [rsp+F0h] [rbp+77h] BYREF
  struct IUnknown *v23; // [rsp+F8h] [rbp+7Fh] BYREF

  v15[1] = (struct IRpcOptions *)-2LL;
  v2 = 0;
  v20 = -2;
  _InterlockedCompareExchange(&v20, *(_DWORD *)(a1 + 48), -2);
  if ( !v20 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 128) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v15[2] = (struct IRpcOptions *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange(&v21, *(_DWORD *)(a1 + 48), v21);
      v18 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL))(
        Microsoft::WRL::gCausality,
        0LL,
        2LL,
        &v18,
        a1,
        v21);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, LPUNKNOWN *))a1)(
           a1,
           &GUID_3e1fe603_f897_5263_b328_0806426b8a79,
           &pUnk) >= 0 )
    {
      v22 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v22, *(_DWORD *)(a1 + 48), -2);
      v23 = 0LL;
      v3 = *(struct IRpcOptions **)(a1 + 112);
      v15[3] = v3;
      if ( v3 )
      {
        ((void (__fastcall *)(struct IRpcOptions *))v3->lpVtbl->AddRef)(v3);
        v4 = ((__int64 (__fastcall *)(struct IRpcOptions *, GUID *, struct IUnknown **))v3->lpVtbl->Set)(
               v3,
               &GUID_b79a741f_7fb5_50ae_9e99_911201ec3d41,
               &v23);
        ((void (__fastcall *)(struct IRpcOptions *))v3->lpVtbl->Release)(v3);
      }
      else
      {
        v23 = 0LL;
        v4 = -2147024809;
      }
      if ( v4 >= 0 )
      {
        if ( Microsoft::WRL::gCausality )
        {
          v19 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL,
            &v19,
            a1,
            0);
        }
        v15[0] = 0LL;
        RpcOptionsHelper::GetRpcOptions(v23, v15);
        v5 = pUnk;
        ppstm = 0LL;
        v17 = 0;
        v6 = v23;
        if ( v15[0] && v23 )
        {
          v17 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v17 >= 0 )
            v17 = CoMarshalInterface(ppstm, &GUID_00000000_0000_0000_c000_000000000046, v5, 0, 0LL, 1u);
          v6 = v23;
        }
        else
        {
          v17 = -2147467262;
        }
        v7 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v6->lpVtbl[1].QueryInterface)(v6, pUnk, v22);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v7,
               (__int64)v23);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v13, 0);
          v8 = *(_QWORD *)(a1 + 112);
          if ( v8 )
          {
            *(_QWORD *)(a1 + 112) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
        }
        if ( Microsoft::WRL::gCausality )
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL);
        if ( v17 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(ppstm);
        }
        v9 = ppstm;
        if ( ppstm )
        {
          ppstm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v9 + 16LL))(v9);
        }
        if ( v15[0] )
          ((void (__fastcall *)(struct IRpcOptions *))v15[0]->lpVtbl->Release)(v15[0]);
      }
      v10 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
      }
    }
    v11 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
