/*
 * XREFs of ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C00B8190
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C00B81E4 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::ServerPortInfo::OnDelete(struct CoreMessagingK::ObjectImpl *a1)
{
  const WCHAR *v2; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  char *v4; // [rsp+50h] [rbp-48h]
  int v5; // [rsp+58h] [rbp-40h]
  int v6; // [rsp+5Ch] [rbp-3Ch]
  char *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  if ( dword_1C020F5E0 > 5u )
  {
    v2 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v6 = 0;
    v9 = 0;
    v4 = (char *)a1 + 8;
    v7 = (char *)a1 + 16;
    v5 = 8;
    v8 = 16;
    TlgCreateWsz(&pDesc, v2);
    TlgWrite((TraceLoggingHProvider)&dword_1C020F5E0, &unk_1C01EA426, 0LL, 0LL, 5u, &pData);
  }
  CoreMessagingK::ServerPorts::UninitializeServerPort(a1);
}
