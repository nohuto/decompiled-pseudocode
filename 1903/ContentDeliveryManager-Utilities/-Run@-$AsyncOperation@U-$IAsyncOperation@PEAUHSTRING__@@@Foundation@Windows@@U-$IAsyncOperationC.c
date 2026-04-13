/*
 * XREFs of ?Run@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18001CB50
 * Callers:
 *     <none>
 * Callees:
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18001D4D8 (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Run(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // ecx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int32 v9; // [rsp+40h] [rbp+10h] BYREF
  signed __int32 v10; // [rsp+48h] [rbp+18h] BYREF
  signed __int32 v11; // [rsp+50h] [rbp+20h] BYREF

  v9 = 0;
  v1 = *(_DWORD *)(a1 - 144);
  v10 = -2;
  _InterlockedCompareExchange(&v10, v1, -2);
  if ( v10 )
  {
    v3 = *(_DWORD *)(a1 - 144);
    v11 = -2;
    _InterlockedCompareExchange(&v11, v3, -2);
    if ( v11 != 3 )
      goto LABEL_6;
    _InterlockedCompareExchange((volatile signed __int32 *)&v9, *(_DWORD *)(a1 - 140), v9);
    if ( *(_QWORD *)(a1 - 152) )
      SetRestrictedErrorInfo();
    v4 = v9;
    if ( (v9 & 0x80000000) == 0 )
    {
LABEL_6:
      v4 = 2147943623LL;
      v9 = -2147023673;
    }
  }
  else
  {
    v4 = v9;
  }
  v5 = a1 - 200;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v5 + 248));
  if ( (_DWORD)result == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v5 + 256) + 8LL))(
           *(_QWORD *)(v5 + 256),
           1LL,
           v4,
           v5 + 280);
    if ( v7 >= 0 && *(_BYTE *)(v5 + 289) )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 272), 0xFFFFFFFF);
      if ( (_DWORD)result != 1 )
        return result;
      v8 = *(unsigned int *)(v5 + 276);
    }
    else
    {
      v8 = (unsigned int)v7;
    }
    return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
             v5,
             v8);
  }
  return result;
}
