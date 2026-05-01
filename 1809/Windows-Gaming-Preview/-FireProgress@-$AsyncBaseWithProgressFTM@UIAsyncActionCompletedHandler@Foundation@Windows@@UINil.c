/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x1800335FC
 * Callers:
 *     ?SetProgress@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x180032BC0 (-SetProgress@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x1800230E0 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UINilDelegate@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023540 (--$CopyLocal@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@I_ea_180023540.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180025260 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180025670 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::DisableCausality>::FireProgress(
        __int64 a1,
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
  signed __int32 v15[12]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+38h] [rbp-18h]
  LPSTREAM pStm; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+48h] [rbp-8h]
  struct IUnknown *v20; // [rsp+80h] [rbp+30h] BYREF
  IUnknown *v21; // [rsp+90h] [rbp+40h] BYREF
  struct IRpcOptions *v22; // [rsp+98h] [rbp+48h] BYREF

  v16 = -2LL;
  v4 = 0;
  v17 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v21 = 0LL;
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
      v6 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
      }
      if ( (**(int (__fastcall ***)(__int64, GUID *, IUnknown **))a1)(
             a1,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v21) >= 0 )
      {
        v20 = 0LL;
        v7 = (__int64 *)(a1 + 136);
        if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
                    (__int64 *)(a1 + 136),
                    (__int64 *)&v20) >= 0 )
        {
          v22 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v20, &v22);
          v8 = v22;
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm, (__int64)v22, v21, (__int64)v20);
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v20->lpVtbl[1].QueryInterface)(
                 v20,
                 v21,
                 a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v9,
                 (__int64)v20);
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
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 152), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v15, 0);
          v11 = *v7;
          if ( *v7 )
          {
            *v7 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
        v12 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
        }
      }
    }
  }
  v13 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
