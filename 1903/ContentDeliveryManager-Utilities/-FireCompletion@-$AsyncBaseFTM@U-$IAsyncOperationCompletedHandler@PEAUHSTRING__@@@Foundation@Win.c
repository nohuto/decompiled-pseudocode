/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001C240
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001C920 (-FireCompletion@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Fo.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001CAF0 (-InvokeFireCompletion@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-.c)
 *     ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x18001D5D8 (-_AfterComplete@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyn.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180004C6C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180004D48 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r14d
  void (__fastcall *v3)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32); // r10
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  IUnknown *v7; // rsi
  struct IUnknown *v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  LPSTREAM v11; // rcx
  struct IRpcOptions *v12; // rcx
  struct IUnknown *v13; // rcx
  LPUNKNOWN v14; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-69h] BYREF
  LPUNKNOWN pUnk; // [rsp+40h] [rbp-29h] BYREF
  struct IRpcOptions *v18[3]; // [rsp+48h] [rbp-21h] BYREF
  LPSTREAM ppstm; // [rsp+60h] [rbp-9h] BYREF
  HRESULT v20; // [rsp+68h] [rbp-1h]
  GUID v21; // [rsp+70h] [rbp+7h] BYREF
  GUID v22; // [rsp+80h] [rbp+17h] BYREF
  signed __int32 v23; // [rsp+D0h] [rbp+67h] BYREF
  signed __int32 v24; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v25; // [rsp+E0h] [rbp+77h] BYREF
  struct IUnknown *v26; // [rsp+E8h] [rbp+7Fh] BYREF

  v18[1] = (struct IRpcOptions *)-2LL;
  v2 = 0;
  v23 = -2;
  _InterlockedCompareExchange(&v23, *(_DWORD *)(a1 + 48), -2);
  if ( !v23 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 128) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v18[2] = (struct IRpcOptions *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange(&v24, *(_DWORD *)(a1 + 48), v24);
      v3 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL);
      v21 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v3(Microsoft::WRL::gCausality, 0LL, 2LL, &v21, a1, v24);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, LPUNKNOWN *))a1)(
           a1,
           &GUID_3e1fe603_f897_5263_b328_0806426b8a79,
           &pUnk) >= 0 )
    {
      v25 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v25, *(_DWORD *)(a1 + 48), -2);
      v4 = *(_QWORD *)(a1 + 112);
      v26 = 0LL;
      if ( v4 )
        v5 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v4 + 24LL))(
               v4,
               &GUID_b79a741f_7fb5_50ae_9e99_911201ec3d41,
               &v26);
      else
        v5 = -2147024809;
      if ( v5 >= 0 )
      {
        if ( Microsoft::WRL::gCausality )
        {
          v6 = *(_QWORD *)Microsoft::WRL::gCausality;
          v22 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(v6 + 72))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL,
            &v22,
            a1,
            0);
        }
        v18[0] = 0LL;
        RpcOptionsHelper::GetRpcOptions(v26, v18);
        v7 = pUnk;
        ppstm = 0LL;
        v20 = 0;
        v8 = v26;
        if ( v18[0] && v26 )
        {
          v20 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v20 >= 0 )
            v20 = CoMarshalInterface(ppstm, &GUID_00000000_0000_0000_c000_000000000046, v7, 0, 0LL, 1u);
          v8 = v26;
        }
        else
        {
          v20 = -2147467262;
        }
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v8->lpVtbl[1].QueryInterface)(v8, pUnk, v25);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v9,
               (__int64)v26);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v16, 0);
          v10 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0LL;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        if ( Microsoft::WRL::gCausality )
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL);
        if ( v20 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(ppstm);
        }
        v11 = ppstm;
        if ( ppstm )
        {
          ppstm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v12 = v18[0];
        if ( v18[0] )
        {
          v18[0] = 0LL;
          ((void (__fastcall *)(struct IRpcOptions *))v12->lpVtbl->Release)(v12);
        }
      }
      v13 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
      }
    }
    v14 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v14->lpVtbl->Release)(v14);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
