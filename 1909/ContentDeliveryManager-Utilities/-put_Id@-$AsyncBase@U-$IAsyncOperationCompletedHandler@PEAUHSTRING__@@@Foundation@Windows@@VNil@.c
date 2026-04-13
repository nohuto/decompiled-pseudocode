/*
 * XREFs of ?put_Id@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJI@Z @ 0x18001A370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::put_Id(
        __int64 a1,
        int a2)
{
  signed __int32 v3; // ecx
  signed __int32 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+24h] [rbp-24h] BYREF
  wchar_t v6; // [rsp+28h] [rbp-20h]

  if ( a2 )
  {
    *(_DWORD *)(a1 + 56) = a2;
    v3 = *(_DWORD *)(a1 + 48);
    v4 = -2;
    _InterlockedCompareExchange(&v4, v3, -2);
    if ( v4 == -1 )
    {
      return 0LL;
    }
    else
    {
      RoOriginateError(2147483662LL, 0LL);
      return 2147483662LL;
    }
  }
  else
  {
    v5 = *(_DWORD *)L"id";
    v6 = aId_0[2];
    RoOriginateErrorW(2147942487LL, 2LL, &v5);
    return 2147942487LL;
  }
}
