/*
 * XREFs of ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x180006FE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?HandleVirtualStreamStateChange@CWindowsPolicyManager@@QEAAJPEAUIAudioProcess@@PEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KW4_AudioStreamState@@3@Z @ 0x180007124 (-HandleVirtualStreamStateChange@CWindowsPolicyManager@@QEAAJPEAUIAudioProcess@@PEBGW4__MIDL___MI.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowsPolicyManager::NotifyVirtualStreamStateChange(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v7; // r14
  const struct _TlgProvider_t *v11; // r8
  const unsigned __int16 *v12; // rdx
  const unsigned __int16 *v13; // rcx
  __int64 v14; // rax
  wchar_t *v15; // rcx
  int v17; // [rsp+40h] [rbp-71h] BYREF
  int v18; // [rsp+44h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-61h] BYREF
  const unsigned __int16 *v20; // [rsp+70h] [rbp-41h]
  int v21; // [rsp+78h] [rbp-39h]
  int v22; // [rsp+7Ch] [rbp-35h]
  const unsigned __int16 *v23; // [rsp+80h] [rbp-31h]
  int v24; // [rsp+88h] [rbp-29h]
  int v25; // [rsp+8Ch] [rbp-25h]
  int *v26; // [rsp+90h] [rbp-21h]
  __int64 v27; // [rsp+98h] [rbp-19h]
  int *v28; // [rsp+A0h] [rbp-11h]
  __int64 v29; // [rsp+A8h] [rbp-9h]

  v7 = a4;
  v11 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v11 > 4u )
  {
    v12 = &word_18003D1D0;
    v13 = &word_18003D1D0;
    LODWORD(v14) = 0;
    if ( a3 )
    {
      v13 = a3;
      v14 = -1LL;
      do
        ++v14;
      while ( a3[v14] );
    }
    v20 = v13;
    v21 = 2 * v14 + 2;
    v15 = off_18003A550[v7];
    LODWORD(v14) = 0;
    v22 = 0;
    if ( v15 )
    {
      v12 = v15;
      v14 = -1LL;
      do
        ++v14;
      while ( v15[v14] );
    }
    v23 = v12;
    v24 = 2 * v14 + 2;
    v26 = &v17;
    v28 = &v18;
    v25 = 0;
    v17 = a6;
    v27 = 4LL;
    v18 = a7;
    v29 = 4LL;
    TlgWrite(v11, &unk_1800429E9, (LPCGUID)v11, 0LL, 6u, &pData);
  }
  CWindowsPolicyManager::HandleVirtualStreamStateChange(a1 - 16, a2, a3, a5, v7, a6, a7);
  return 0LL;
}
