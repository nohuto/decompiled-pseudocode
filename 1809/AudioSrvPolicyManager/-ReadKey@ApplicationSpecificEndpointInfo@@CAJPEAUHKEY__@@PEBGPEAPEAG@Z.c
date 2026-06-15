/*
 * XREFs of ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180031FD4
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18003153C (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003194C (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x1800326F4 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000B398 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::ReadKey(HKEY hkey, LPCWSTR lpValue, unsigned __int16 **a3)
{
  unsigned int v3; // edi
  LSTATUS ValueW; // ecx
  __int64 result; // rax
  SIZE_T v9; // rsi
  _WORD *v10; // rax
  void *pvData; // rbx
  _WORD *i; // rcx
  unsigned int v13; // eax
  unsigned __int16 *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD pcbData; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  pcbData = 0;
  ValueW = RegGetValueW(hkey, 0LL, lpValue, 2u, 0LL, 0LL, &pcbData);
  if ( ValueW )
  {
    result = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      return (unsigned int)ValueW;
  }
  else
  {
    pcbData += 2;
    v9 = pcbData;
    v10 = CoTaskMemAlloc(v9 * 2);
    pvData = v10;
    if ( v10 )
    {
      for ( i = &v10[v9]; v10 != i; ++v10 )
      {
        if ( v10 )
          *v10 = 0;
      }
      v13 = RegGetValueW(hkey, 0LL, lpValue, 2u, 0LL, pvData, &pcbData);
      if ( v13 )
      {
        v3 = wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x27F,
               (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
               (const char *)v13);
      }
      else
      {
        v14 = (unsigned __int16 *)pvData;
        pvData = 0LL;
        *a3 = v14;
      }
    }
    else
    {
      v3 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27D,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x8007000ELL);
    }
    CoTaskMemFree(pvData);
    return v3;
  }
  return result;
}
