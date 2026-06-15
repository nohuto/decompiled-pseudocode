/*
 * XREFs of ?SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800323F4
 * Callers:
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180030CD0 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?Reset@ApplicationSpecificEndpointInfo@@UEAAJXZ @ 0x180031210 (-Reset@ApplicationSpecificEndpointInfo@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     memset_0 @ 0x18003769E (memset_0.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::SendRefreshEndpointNotification(__int64 a1, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  unsigned int *v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  DWORD CurrentProcessId; // eax
  __int64 v12; // rdx
  _DWORD v13[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+28h] [rbp-60h]
  int v15; // [rsp+38h] [rbp-50h]
  int v16; // [rsp+3Ch] [rbp-4Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a3 < 8 || a2 == 2 || a3 == 0x7FFF )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    v8 = *(unsigned int **)(a1 + 56);
    v9 = 0LL;
    v10 = (unsigned __int64)(*(_QWORD *)(a1 + 64) - (_QWORD)v8 + 3LL) >> 2;
    if ( (unsigned __int64)v8 > *(_QWORD *)(a1 + 64) )
      v10 = 0LL;
    if ( v10 )
    {
      do
      {
        memset_0(v13, 0, 0x20uLL);
        v13[0] = 32;
        v13[1] = 0x100000;
        CurrentProcessId = GetCurrentProcessId();
        v12 = *v8;
        v14 = CurrentProcessId;
        v15 = a2;
        v16 = a3;
        GenerateMediaEvent(v13, v12);
        ++v9;
        ++v8;
      }
      while ( v9 != v10 );
    }
    if ( v7 )
      LeaveCriticalSection(v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x304,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
