/*
 * XREFs of ?GetResults@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?StageOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001AA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::StageOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // ecx
  int v4; // ebx
  signed __int32 v5; // ecx
  signed __int32 v7[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int32 v8; // [rsp+60h] [rbp+28h] BYREF
  signed __int32 v9; // [rsp+68h] [rbp+30h] BYREF
  signed __int32 v10; // [rsp+70h] [rbp+38h] BYREF
  signed __int32 v11; // [rsp+78h] [rbp+40h] BYREF

  v1 = *(_DWORD *)(a1 - 120);
  v10 = -2;
  _InterlockedCompareExchange(&v10, v1, -2);
  if ( v10 == 3 )
  {
    v3 = *(_DWORD *)(a1 - 120);
    v11 = -2;
    _InterlockedCompareExchange(&v11, v3, -2);
    if ( v11 == 3 )
    {
      _InterlockedCompareExchange(&v9, *(_DWORD *)(a1 - 116), v9);
      if ( *(_QWORD *)(a1 - 128) )
        SetRestrictedErrorInfo();
    }
    else
    {
      v9 = 0;
    }
    v4 = v9;
  }
  else
  {
    if ( v10 != 1 )
    {
      v4 = -2147483634;
      RoOriginateError(2147483662LL, 0LL);
      return (unsigned int)v4;
    }
    v4 = 0;
  }
  v8 = v4;
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)(a1 - 120);
    v7[0] = -2;
    _InterlockedCompareExchange(v7, v5, -2);
    if ( v7[0] == 3 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&v8, *(_DWORD *)(a1 - 116), v8);
      if ( *(_QWORD *)(a1 - 128) )
        SetRestrictedErrorInfo();
      return v8;
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v4;
}
