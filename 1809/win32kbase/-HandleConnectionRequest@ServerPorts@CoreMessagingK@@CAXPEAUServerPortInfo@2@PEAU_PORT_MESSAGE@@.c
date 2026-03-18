/*
 * XREFs of ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C00852CC
 * Callers:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0084EF4 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C0085294 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C008564C (-Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall CoreMessagingK::ServerPorts::HandleConnectionRequest(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct _PORT_MESSAGE *a2)
{
  int DoNotUseThisField_low; // r15d
  __int64 v3; // rbx
  int v4; // r12d
  bool v5; // di
  int v8; // eax
  __int64 v9; // rdx
  int v10; // r14d
  const WCHAR *v11; // rdx
  bool v12; // [rsp+40h] [rbp-C0h]
  bool v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  int v17; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  __int128 v21; // [rsp+90h] [rbp-70h]
  _QWORD v22[10]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  char *v24; // [rsp+110h] [rbp+10h]
  int v25; // [rsp+118h] [rbp+18h]
  int v26; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  bool *v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+138h] [rbp+38h]
  int v30; // [rsp+13Ch] [rbp+3Ch]
  int *v31; // [rsp+140h] [rbp+40h]
  int v32; // [rsp+148h] [rbp+48h]
  int v33; // [rsp+14Ch] [rbp+4Ch]
  int *v34; // [rsp+150h] [rbp+50h]
  int v35; // [rsp+158h] [rbp+58h]
  int v36; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v37; // [rsp+160h] [rbp+60h]
  int v38; // [rsp+168h] [rbp+68h]
  int v39; // [rsp+16Ch] [rbp+6Ch]

  DoNotUseThisField_low = LODWORD(a2->DoNotUseThisField);
  v3 = 0LL;
  v4 = *((_DWORD *)&a2->DoNotUseThisField + 2);
  v5 = 0;
  if ( a2->u1.s1.DataLength == 8 )
  {
    v8 = CoreMessagingK::Runtime::Alloc(32LL, 1229147459LL, &v16);
    if ( v8 >= 0 )
    {
      v3 = v16;
      *(_DWORD *)(v16 + 16) = 1;
    }
    v5 = v8 == 0;
  }
  v18 = 0LL;
  v19 = 0LL;
  v17 = 48;
  v20 = 512;
  v21 = 0LL;
  memset(v22, 0, 0x48uLL);
  v9 = *((_QWORD *)a1 + 1);
  v12 = v5;
  LODWORD(v22[0]) = 0x100000;
  v22[2] = 0xFFFFLL;
  v10 = ZwAlpcAcceptConnectPort(v3 & -(__int64)v5, v9, 0LL, &v17, v22, v3 & -(__int64)v5, a2, 0LL, v12);
  if ( v10 >= 0 && v5 )
  {
    *(_DWORD *)(v3 + 8) = DoNotUseThisField_low;
    *(_DWORD *)(v3 + 12) = v4;
    *(_QWORD *)(v3 + 24) = *((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 5) = v3;
    v3 = 0LL;
  }
  if ( v3 )
    CoreMessagingK::ClientPortInfo::Release((CoreMessagingK::ClientPortInfo *)v3);
  LODWORD(v16) = v4;
  v15 = DoNotUseThisField_low;
  v14 = v10;
  v13 = v5;
  if ( dword_1C01C77B8 > 5u )
  {
    v11 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v26 = 0;
    v24 = (char *)a1 + 16;
    v25 = 16;
    TlgCreateWsz(&pDesc, v11);
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v31 = &v14;
    v34 = &v15;
    v28 = &v13;
    v37 = &v16;
    v29 = 1;
    v32 = 4;
    v35 = 4;
    v38 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A34BF, 0LL, 0LL, 8u, &pData);
  }
}
