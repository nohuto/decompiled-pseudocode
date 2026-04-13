/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?CommitOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001A040
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001A710 (-FireCompletion@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UIN.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001ABC0 (-InvokeFireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedH.c)
 *     ?_AfterComplete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x18001B700 (-_AfterComplete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180004C6C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180004D48 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x18001B0BC (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ??$CopyLocal@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001BB44 (--$CopyLocal@UIAsyncActionCompletedHandler@Foundation@Windows@@@-$GitPtrSupportsAgile@UIAsyncAct.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::CommitOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r14d
  void (__fastcall *v3)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32); // r10
  __int64 *v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rcx
  LPSTREAM v8; // rcx
  struct IRpcOptions *v9; // rcx
  struct IUnknown *v10; // rcx
  __int64 v11; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-59h] BYREF
  __int64 v14; // [rsp+40h] [rbp-19h] BYREF
  struct IRpcOptions *v15[3]; // [rsp+48h] [rbp-11h] BYREF
  LPSTREAM pStm; // [rsp+60h] [rbp+7h] BYREF
  int v17; // [rsp+68h] [rbp+Fh]
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
    v14 = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange(&v21, *(_DWORD *)(a1 + 48), v21);
      v3 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL);
      v18 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v3(Microsoft::WRL::gCausality, 0LL, 2LL, &v18, a1, v21);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a1)(a1, &GUID_5a648006_843a_4da9_865b_9d26e5dfad7b, &v14) >= 0 )
    {
      v22 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v22, *(_DWORD *)(a1 + 48), -2);
      v23 = 0LL;
      v4 = (__int64 *)(a1 + 112);
      if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::CopyLocal<Windows::Foundation::IAsyncActionCompletedHandler>(
                  a1 + 112,
                  &v23) >= 0 )
      {
        if ( Microsoft::WRL::gCausality )
        {
          v5 = *(_QWORD *)Microsoft::WRL::gCausality;
          v19 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(v5 + 72))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL,
            &v19,
            a1,
            0);
        }
        v15[0] = 0LL;
        RpcOptionsHelper::GetRpcOptions(v23, v15);
        BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm);
        v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v23->lpVtbl[1].QueryInterface)(v23, v14, v22);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v6,
               (__int64)v23);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v13, 0);
          v7 = *v4;
          *v4 = 0LL;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        if ( Microsoft::WRL::gCausality )
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL);
        if ( v17 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(pStm);
        }
        v8 = pStm;
        if ( pStm )
        {
          pStm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v8 + 16LL))(v8);
        }
        v9 = v15[0];
        if ( v15[0] )
        {
          v15[0] = 0LL;
          ((void (__fastcall *)(struct IRpcOptions *))v9->lpVtbl->Release)(v9);
        }
      }
      v10 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
      }
    }
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
