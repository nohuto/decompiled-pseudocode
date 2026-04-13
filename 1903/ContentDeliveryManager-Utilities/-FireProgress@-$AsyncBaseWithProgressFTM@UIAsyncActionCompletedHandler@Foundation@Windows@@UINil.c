/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x18001B2B0
 * Callers:
 *     ?SetProgress@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x18001ABA0 (-SetProgress@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180004C6C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180004D48 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x18001B0BC (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UINilDelegate@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001BCF0 (--$CopyLocal@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@Internal@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireProgress(
        volatile signed __int32 *a1,
        unsigned int a2)
{
  unsigned int v4; // r14d
  signed __int32 v5; // edx
  int (__fastcall *v6)(volatile signed __int32 *, GUID *, IUnknown **); // rsi
  IUnknown *v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // eax
  LPSTREAM v11; // rcx
  struct IRpcOptions *v12; // rcx
  __int64 v13; // rcx
  struct IUnknown *v14; // rcx
  IUnknown *v15; // rcx
  signed __int32 v17[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h]
  volatile signed __int32 *v19; // [rsp+48h] [rbp-28h]
  LPSTREAM pStm; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+58h] [rbp-18h]
  GUID v22; // [rsp+60h] [rbp-10h] BYREF
  struct IUnknown *v23; // [rsp+A0h] [rbp+30h] BYREF
  IUnknown *v24; // [rsp+B0h] [rbp+40h] BYREF
  struct IRpcOptions *v25; // [rsp+B8h] [rbp+48h] BYREF

  v18 = -2LL;
  v4 = 0;
  v19 = a1;
  if ( a1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
  v24 = 0LL;
  v5 = *((_DWORD *)a1 + 38);
  if ( v5 > 0 )
  {
    do
    {
      if ( v5 == _InterlockedCompareExchange(a1 + 38, v5 + 1, v5) )
        break;
      v5 = *((_DWORD *)a1 + 38);
    }
    while ( v5 > 0 );
    if ( v5 > 0 )
    {
      v6 = **(int (__fastcall ***)(volatile signed __int32 *, GUID *, IUnknown **))a1;
      v7 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
      }
      if ( v6(a1, &GUID_00000000_0000_0000_c000_000000000046, &v24) >= 0 )
      {
        v23 = 0LL;
        v8 = (__int64 *)(a1 + 34);
        if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
                    a1 + 34,
                    &v23) >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v9 = *(_QWORD *)Microsoft::WRL::gCausality;
            v22 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, volatile signed __int32 *, int))(v9 + 72))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              &v22,
              a1,
              1);
          }
          v25 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v23, &v25);
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm, (__int64)v25, v24, (__int64)v23);
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v23->lpVtbl[1].QueryInterface)(
                  v23,
                  v24,
                  a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v10,
                 (__int64)v23);
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              1LL);
          if ( v21 >= 0 )
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
          v12 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v12->lpVtbl->Release)(v12);
          }
        }
        if ( _InterlockedExchangeAdd(a1 + 38, 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v17, 0);
          v13 = *v8;
          *v8 = 0LL;
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v14 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
        }
      }
    }
  }
  v15 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(IUnknown *))v15->lpVtbl->Release)(v15);
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
