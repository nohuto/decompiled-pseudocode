/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800202F0
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180020A80 (-FireCompletion@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@PEAVGameListEntry@.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@V?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180020F10 (-InvokeFireCompletion@-$AsyncOperation@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Pre.c)
 *     ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@V?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x1800231A0 (-_AfterComplete@-$AsyncOperation@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@G.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800250B4 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x1800254A0 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  int v4; // eax
  IUnknown *v5; // rsi
  struct IUnknown *v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rcx
  LPSTREAM v9; // rcx
  struct IUnknown *v10; // rcx
  LPUNKNOWN v11; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-59h] BYREF
  LPUNKNOWN pUnk; // [rsp+40h] [rbp-19h] BYREF
  struct IRpcOptions *v15[3]; // [rsp+48h] [rbp-11h] BYREF
  LPSTREAM ppstm; // [rsp+60h] [rbp+7h] BYREF
  HRESULT v17; // [rsp+68h] [rbp+Fh]
  GUID v18; // [rsp+70h] [rbp+17h] BYREF
  GUID v19; // [rsp+80h] [rbp+27h] BYREF
  signed __int32 v20; // [rsp+C0h] [rbp+67h] BYREF
  signed __int32 v21; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v22; // [rsp+D0h] [rbp+77h] BYREF
  struct IUnknown *v23; // [rsp+D8h] [rbp+7Fh] BYREF

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
           &GUID_37bcb2e2_9c6f_5658_a43b_ed28fe0c8458,
           &pUnk) >= 0 )
    {
      v22 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v22, *(_DWORD *)(a1 + 48), -2);
      v3 = *(_QWORD *)(a1 + 112);
      v23 = 0LL;
      if ( v3 )
        v4 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v3 + 24LL))(
               v3,
               &GUID_a77293e0_d508_5582_ac76_8c9605fa1de9,
               &v23);
      else
        v4 = -2147024809;
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
               v23,
               *(_QWORD *)(a1 + 120));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v13, 0);
          v8 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0LL;
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
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
