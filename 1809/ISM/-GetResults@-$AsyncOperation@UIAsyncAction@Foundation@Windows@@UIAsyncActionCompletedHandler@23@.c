/*
 * XREFs of ?GetResults@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?SetConstantForDeviceToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800E3CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetConstantForDeviceToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // ecx
  __int64 v4; // rcx
  int v5; // ebx
  signed __int32 v6; // ecx
  __int64 v7; // rcx
  signed __int32 v9[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int32 v10; // [rsp+60h] [rbp+28h] BYREF
  signed __int32 v11; // [rsp+68h] [rbp+30h] BYREF
  signed __int32 v12; // [rsp+70h] [rbp+38h] BYREF
  signed __int32 v13; // [rsp+78h] [rbp+40h] BYREF

  v1 = *(_DWORD *)(a1 - 120);
  v12 = -2;
  _InterlockedCompareExchange(&v12, v1, -2);
  if ( v12 == 3 )
  {
    v3 = *(_DWORD *)(a1 - 120);
    v13 = -2;
    _InterlockedCompareExchange(&v13, v3, -2);
    if ( v13 == 3 )
    {
      _InterlockedCompareExchange(&v11, *(_DWORD *)(a1 - 116), v11);
      v4 = *(_QWORD *)(a1 - 128);
      if ( v4 )
        SetRestrictedErrorInfo(v4);
    }
    else
    {
      v11 = 0;
    }
    v5 = v11;
  }
  else
  {
    if ( v12 != 1 )
    {
      v5 = -2147483634;
      RoOriginateError(2147483662LL, 0LL);
      return (unsigned int)v5;
    }
    v5 = 0;
  }
  v10 = v5;
  if ( v5 >= 0 )
  {
    v6 = *(_DWORD *)(a1 - 120);
    v9[0] = -2;
    _InterlockedCompareExchange(v9, v6, -2);
    if ( v9[0] == 3 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&v10, *(_DWORD *)(a1 - 116), v10);
      v7 = *(_QWORD *)(a1 - 128);
      if ( v7 )
        SetRestrictedErrorInfo(v7);
      return v10;
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v5;
}
