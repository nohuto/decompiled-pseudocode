/*
 * XREFs of ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18002E764
 * Callers:
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18002DC60 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18002E4BC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18002F704 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D724 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::UpdateState(__int64 a1, int a2, int a3, const unsigned __int16 *a4)
{
  __int64 v5; // r14
  void *v6; // rdi
  DWORD LastError; // ebx
  int v8; // ebx
  __int64 v9; // rdx
  unsigned __int16 **v11; // r14
  unsigned __int16 *v12; // rdi
  DWORD v13; // ebx
  DWORD v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 == 1 )
  {
    v5 = a1 + 8LL * a2;
    v6 = *(void **)(v5 + 96);
    if ( v6 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v6);
      SetLastError(LastError);
      *(_QWORD *)(v5 + 96) = 0LL;
    }
    if ( a4 )
    {
      *(_QWORD *)(v5 + 96) = 0LL;
      v8 = CoAllocString(a4, (unsigned __int16 **)(v5 + 96));
      if ( v8 < 0 )
      {
        v9 = 486LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
    }
  }
  else
  {
    v11 = (unsigned __int16 **)(a1 + 168 + 8LL * a2);
    v12 = *v11;
    if ( *v11 )
    {
      v13 = GetLastError();
      CoTaskMemFree(v12);
      SetLastError(v13);
      *v11 = 0LL;
      v12 = 0LL;
    }
    if ( a4 )
    {
      if ( v12 )
      {
        v14 = GetLastError();
        CoTaskMemFree(v12);
        SetLastError(v14);
      }
      *v11 = 0LL;
      v8 = CoAllocString(a4, v11);
      if ( v8 < 0 )
      {
        v9 = 499LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
