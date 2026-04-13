/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x18001B280
 * Callers:
 *     ?SetProgress@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x18001AB70 (-SetProgress@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180004C7C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180004D5C (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x18001B098 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UINilDelegate@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001BB88 (--$CopyLocal@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@I_ea_18001BB88.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireProgress(
        volatile signed __int32 *a1,
        unsigned int a2)
{
  unsigned int v4; // r15d
  signed __int32 v5; // edx
  IUnknown *v6; // rcx
  __int64 *v7; // r14
  struct IRpcOptions *v8; // rdi
  unsigned int v9; // eax
  LPSTREAM v10; // rcx
  __int64 v11; // rcx
  struct IUnknown *v12; // rcx
  IUnknown *v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h]
  volatile signed __int32 *v17; // [rsp+48h] [rbp-28h]
  LPSTREAM pStm; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  GUID v20; // [rsp+60h] [rbp-10h] BYREF
  struct IUnknown *v21; // [rsp+A0h] [rbp+30h] BYREF
  IUnknown *v22; // [rsp+B0h] [rbp+40h] BYREF
  struct IRpcOptions *v23; // [rsp+B8h] [rbp+48h] BYREF

  v16 = -2LL;
  v4 = 0;
  v17 = a1;
  if ( a1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
  v22 = 0LL;
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
      v6 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
      }
      if ( (**(int (__fastcall ***)(volatile signed __int32 *, GUID *, IUnknown **))a1)(
             a1,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v22) >= 0 )
      {
        v21 = 0LL;
        v7 = (__int64 *)(a1 + 34);
        if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
                    a1 + 34,
                    &v21) >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v20 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, volatile signed __int32 *, int))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              &v20,
              a1,
              1);
          }
          v23 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v21, &v23);
          v8 = v23;
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm, (__int64)v23, v22, (__int64)v21);
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v21->lpVtbl[1].QueryInterface)(
                 v21,
                 v22,
                 a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v9,
                 (__int64)v21);
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              1LL);
          if ( v19 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(pStm);
          }
          v10 = pStm;
          if ( pStm )
          {
            pStm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v10 + 16LL))(v10);
          }
          if ( v8 )
            ((void (__fastcall *)(struct IRpcOptions *))v8->lpVtbl->Release)(v8);
        }
        if ( _InterlockedExchangeAdd(a1 + 38, 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v15, 0);
          v11 = *v7;
          if ( *v7 )
          {
            *v7 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
        v12 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
        }
      }
    }
  }
  v13 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
