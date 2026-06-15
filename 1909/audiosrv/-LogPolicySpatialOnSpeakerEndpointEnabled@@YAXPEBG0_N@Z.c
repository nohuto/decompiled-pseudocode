/*
 * XREFs of ?LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z @ 0x18011CE9C
 * Callers:
 *     EnableSpatialOnSpeakerEndpoint @ 0x18000570C (EnableSpatialOnSpeakerEndpoint.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001E08C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

void __fastcall LogPolicySpatialOnSpeakerEndpointEnabled(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  const WCHAR *v2; // r10
  LPCWSTR v3; // r11
  LPCGUID v4; // r9
  LPCGUID v5; // r8
  int v6; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+70h] [rbp-38h] BYREF
  int *v10; // [rsp+80h] [rbp-28h]
  int v11; // [rsp+88h] [rbp-20h]
  int v12; // [rsp+8Ch] [rbp-1Ch]

  if ( (unsigned int)hProvider > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, v2);
      TlgCreateWsz(&v9, v3);
      v12 = 0;
      v10 = &v6;
      v6 = (unsigned __int8)v4;
      v11 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017937A, v5, v4, 5u, &pData);
    }
  }
}
