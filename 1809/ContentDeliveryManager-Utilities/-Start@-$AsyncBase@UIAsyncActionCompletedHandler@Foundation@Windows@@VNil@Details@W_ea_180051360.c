/*
 * XREFs of ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?InvokeOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x180051360
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::InvokeOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // eax
  int v4; // edi
  __int64 v5; // rax
  signed __int32 v7; // [rsp+40h] [rbp-58h] BYREF
  const WCHAR *v8; // [rsp+48h] [rbp-50h] BYREF
  GUID v9; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v10[32]; // [rsp+60h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v7 = -2;
  _InterlockedCompareExchange(&v7, v1, -2);
  if ( v7 == -1 && (v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 0, -1), v3 == v7) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
    if ( v4 >= 0
      && InitOnceExecuteOnce(
           &Microsoft::WRL::gCausalityInitOnce,
           (PINIT_ONCE_FN)Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::InitCausality,
           0LL,
           0LL)
      && Microsoft::WRL::gCausality )
    {
      v8 = L"Windows.Services.TargetedContent.Internal.TargetedContentActionInternalImpl.InvokeAsync";
      v9 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v10, &v8);
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _QWORD, _QWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL))(
        Microsoft::WRL::gCausality,
        0LL,
        2LL,
        &v9,
        a1,
        *(_QWORD *)(v5 + 24),
        *(unsigned int *)(a1 + 56));
    }
  }
  else
  {
    v4 = -2147483635;
    RoOriginateError(2147483661LL, 0LL);
  }
  return (unsigned int)v4;
}
