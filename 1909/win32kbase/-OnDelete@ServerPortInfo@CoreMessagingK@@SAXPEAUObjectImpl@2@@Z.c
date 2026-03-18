/*
 * XREFs of ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C00B6BA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C00B6BF4 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
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

  if ( dword_1C020C5E0 > 5u )
  {
    v2 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v6 = 0;
    v9 = 0;
    v4 = (char *)a1 + 8;
    v7 = (char *)a1 + 16;
    v5 = 8;
    v8 = 16;
    TlgCreateWsz(&pDesc, v2);
    TlgWrite((TraceLoggingHProvider)&dword_1C020C5E0, &unk_1C01E842C, 0LL, 0LL, 5u, &pData);
  }
  CoreMessagingK::ServerPorts::UninitializeServerPort(a1);
}
