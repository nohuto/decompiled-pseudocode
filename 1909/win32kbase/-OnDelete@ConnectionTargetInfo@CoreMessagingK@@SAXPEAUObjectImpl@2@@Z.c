/*
 * XREFs of ?OnDelete@ConnectionTargetInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C00A0B90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C00A0BF4 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::ConnectionTargetInfo::OnDelete(struct CoreMessagingK::ObjectImpl *a1)
{
  CoreMessagingK::ClientPortInfo *v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-19h] BYREF
  char *v4; // [rsp+50h] [rbp+7h]
  int v5; // [rsp+58h] [rbp+Fh]
  int v6; // [rsp+5Ch] [rbp+13h]
  CoreMessagingK::ClientPortInfo *v7; // [rsp+60h] [rbp+17h]
  int v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+6Ch] [rbp+23h]
  char *v10; // [rsp+70h] [rbp+27h]
  int v11; // [rsp+78h] [rbp+2Fh]
  int v12; // [rsp+7Ch] [rbp+33h]
  char *v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+8Ch] [rbp+43h]

  v2 = (CoreMessagingK::ClientPortInfo *)*((_QWORD *)a1 + 2);
  if ( dword_1C020C5E0 > 5u )
  {
    v6 = 0;
    v9 = 0;
    v12 = 0;
    v15 = 0;
    v4 = (char *)a1 + 8;
    v5 = 8;
    v8 = 8;
    v10 = (char *)v2 + 8;
    v13 = (char *)v2 + 12;
    v7 = v2;
    v11 = 4;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C020C5E0, &unk_1C01E8478, 0LL, 0LL, 6u, &pData);
    v2 = (CoreMessagingK::ClientPortInfo *)*((_QWORD *)a1 + 2);
  }
  CoreMessagingK::ClientPortInfo::Release(v2);
  *((_QWORD *)a1 + 2) = 0LL;
}
