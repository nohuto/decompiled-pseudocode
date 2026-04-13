/*
 * XREFs of ?FireCompletion@?$AsyncBase@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18007DF60
 * Callers:
 *     <none>
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180004C7C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  GUID v8; // [rsp+50h] [rbp-20h] BYREF
  GUID v9; // [rsp+60h] [rbp-10h] BYREF
  signed __int32 v10; // [rsp+90h] [rbp+20h] BYREF
  signed __int32 v11; // [rsp+98h] [rbp+28h] BYREF
  unsigned int v12; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  v2 = 0;
  v10 = -2;
  _InterlockedCompareExchange(&v10, *(_DWORD *)(a1 + 48), -2);
  if ( !v10 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(_QWORD *)(a1 + 24) && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v3 = 0LL;
    v13 = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange(&v11, *(_DWORD *)(a1 + 48), v11);
      v8 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL))(
        Microsoft::WRL::gCausality,
        0LL,
        2LL,
        &v8,
        a1,
        v11);
      v3 = v13;
    }
    if ( v3 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a1)(a1, &GUID_cdb5efb3_5788_509d_9be1_71ccb8a3362a, &v13) >= 0 )
    {
      v12 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v12, *(_DWORD *)(a1 + 48), -2);
      if ( Microsoft::WRL::gCausality )
      {
        v9 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
        (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
          Microsoft::WRL::gCausality,
          0LL,
          2LL,
          &v9,
          a1,
          0);
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(
             *(_QWORD *)(a1 + 24),
             v13,
             v12);
      v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
             v4,
             *(_QWORD *)(a1 + 24));
      v5 = *(_QWORD *)(a1 + 24);
      if ( v5 )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      if ( Microsoft::WRL::gCausality )
        (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
          Microsoft::WRL::gCausality,
          0LL,
          2LL);
    }
    v6 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
