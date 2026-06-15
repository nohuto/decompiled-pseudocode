/*
 * XREFs of ?LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z @ 0x180110AC0
 * Callers:
 *     EnableSpatialOnSpeakerEndpoint @ 0x18010F954 (EnableSpatialOnSpeakerEndpoint.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

void __fastcall LogPolicySpatialOnSpeakerEndpointEnabled(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  const WCHAR *v2; // r9
  LPCWSTR v3; // r11
  unsigned __int8 v4; // r10
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  int v7; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+70h] [rbp-38h] BYREF
  int *v11; // [rsp+80h] [rbp-28h]
  int v12; // [rsp+88h] [rbp-20h]
  int v13; // [rsp+8Ch] [rbp-1Ch]

  if ( (unsigned int)hProvider > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, v2);
      TlgCreateWsz(&v10, v3);
      v13 = 0;
      v11 = &v7;
      v7 = v4;
      v12 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017513D, v5, v6, 5u, &pData);
    }
  }
}
