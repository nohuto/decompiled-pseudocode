/*
 * XREFs of ?Run@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?SetConstantForDeviceToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x1800E3E90
 * Callers:
 *     <none>
 * Callees:
 *     ?_AfterExecute@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?SetConstantForDeviceToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x1800E5268 (-_AfterExecute@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetConstantForDeviceToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Run(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int32 v10; // [rsp+40h] [rbp+10h] BYREF
  signed __int32 v11; // [rsp+48h] [rbp+18h] BYREF
  signed __int32 v12; // [rsp+50h] [rbp+20h] BYREF

  v10 = 0;
  v1 = *(_DWORD *)(a1 - 144);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v1, -2);
  if ( v11 )
  {
    v3 = *(_DWORD *)(a1 - 144);
    v12 = -2;
    _InterlockedCompareExchange(&v12, v3, -2);
    if ( v12 != 3 )
      goto LABEL_6;
    _InterlockedCompareExchange((volatile signed __int32 *)&v10, *(_DWORD *)(a1 - 140), v10);
    v4 = *(_QWORD *)(a1 - 152);
    if ( v4 )
      SetRestrictedErrorInfo(v4);
    v5 = v10;
    if ( (v10 & 0x80000000) == 0 )
    {
LABEL_6:
      v5 = 2147943623LL;
      v10 = -2147023673;
    }
  }
  else
  {
    v5 = v10;
  }
  v6 = a1 - 200;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v6 + 248));
  if ( (_DWORD)result == 1 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v6 + 256) + 8LL))(
           *(_QWORD *)(v6 + 256),
           1LL,
           v5,
           v6 + 280);
    if ( v8 >= 0 && *(_BYTE *)(v6 + 289) )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 272), 0xFFFFFFFF);
      if ( (_DWORD)result != 1 )
        return result;
      v9 = *(unsigned int *)(v6 + 276);
    }
    else
    {
      v9 = (unsigned int)v8;
    }
    return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetConstantForDeviceToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
             v6,
             v9);
  }
  return result;
}
