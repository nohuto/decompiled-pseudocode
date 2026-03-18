/*
 * XREFs of ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C0085180
 * Callers:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0084EF4 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C0085294 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::ServerPorts::HandleClientDisconnect(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct CoreMessagingK::ClientPortInfo *a2)
{
  struct CoreMessagingK::ClientPortInfo *v4; // rax
  struct CoreMessagingK::ClientPortInfo *v5; // rcx
  __int64 v6; // rax
  const WCHAR *v7; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  char *v9; // [rsp+50h] [rbp-58h]
  int v10; // [rsp+58h] [rbp-50h]
  int v11; // [rsp+5Ch] [rbp-4Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  char *v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+7Ch] [rbp-2Ch]
  char *v16; // [rsp+80h] [rbp-28h]
  int v17; // [rsp+88h] [rbp-20h]
  int v18; // [rsp+8Ch] [rbp-1Ch]

  if ( dword_1C01C77B8 > 5u )
  {
    v7 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v11 = 0;
    v9 = (char *)a1 + 16;
    v10 = 16;
    TlgCreateWsz(&pDesc, v7);
    v15 = 0;
    v18 = 0;
    v13 = (char *)a2 + 8;
    v14 = 4;
    v17 = 4;
    v16 = (char *)a2 + 12;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A352C, 0LL, 0LL, 6u, &pData);
  }
  v4 = (struct CoreMessagingK::ClientPortInfo *)*((_QWORD *)a1 + 5);
  v5 = 0LL;
  while ( v4 )
  {
    if ( v4 == a2 )
    {
      v6 = *((_QWORD *)a2 + 3);
      if ( v5 )
        *((_QWORD *)v5 + 3) = v6;
      else
        *((_QWORD *)a1 + 5) = v6;
      *((_QWORD *)a2 + 3) = 0LL;
      break;
    }
    v5 = v4;
    v4 = (struct CoreMessagingK::ClientPortInfo *)*((_QWORD *)v4 + 3);
  }
  ZwClose(*(HANDLE *)a2);
  *(_QWORD *)a2 = 0LL;
  CoreMessagingK::ClientPortInfo::Release(a2);
}
