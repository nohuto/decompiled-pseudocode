/*
 * XREFs of ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C00AB0EC
 * Callers:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C00AACBC (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C00AB0B4 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C00AB644 (-Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

void __fastcall CoreMessagingK::ServerPorts::HandleConnectionRequest(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct _PORT_MESSAGE *a2)
{
  __int64 v2; // rbx
  bool v3; // di
  int DoNotUseThisField_low; // r15d
  int v6; // r12d
  int v8; // eax
  __int64 v9; // rdx
  int v10; // r14d
  const WCHAR *v11; // rdx
  bool v12; // [rsp+40h] [rbp-C0h]
  bool v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v17[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+8Ch] [rbp-74h]
  __int128 v22; // [rsp+90h] [rbp-70h]
  _QWORD v23[10]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  char *v25; // [rsp+110h] [rbp+10h]
  int v26; // [rsp+118h] [rbp+18h]
  int v27; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  bool *v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+13Ch] [rbp+3Ch]
  int *v32; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  int v34; // [rsp+14Ch] [rbp+4Ch]
  int *v35; // [rsp+150h] [rbp+50h]
  int v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v38; // [rsp+160h] [rbp+60h]
  int v39; // [rsp+168h] [rbp+68h]
  int v40; // [rsp+16Ch] [rbp+6Ch]

  v17[1] = 0;
  v2 = 0LL;
  v21 = 0;
  v3 = 0;
  DoNotUseThisField_low = LODWORD(a2->DoNotUseThisField);
  v6 = *((_DWORD *)&a2->DoNotUseThisField + 2);
  if ( a2->u1.s1.DataLength == 8 )
  {
    v8 = CoreMessagingK::Runtime::Alloc(32LL, 1229147459LL, &v16);
    if ( v8 >= 0 )
    {
      v2 = v16;
      *(_DWORD *)(v16 + 16) = 1;
    }
    v3 = v8 == 0;
  }
  v18 = 0LL;
  v19 = 0LL;
  v17[0] = 48;
  v20 = 512;
  v22 = 0LL;
  memset(v23, 0, 0x48uLL);
  v9 = *((_QWORD *)a1 + 1);
  v12 = v3;
  LODWORD(v23[0]) = 0x100000;
  v23[2] = 0xFFFFLL;
  v10 = ZwAlpcAcceptConnectPort(v2 & -(__int64)v3, v9, 0LL, v17, v23, v2 & -(__int64)v3, a2, 0LL, v12);
  if ( v10 >= 0 && v3 )
  {
    *(_DWORD *)(v2 + 8) = DoNotUseThisField_low;
    *(_DWORD *)(v2 + 12) = v6;
    *(_QWORD *)(v2 + 24) = *((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 5) = v2;
    v2 = 0LL;
  }
  if ( v2 )
    CoreMessagingK::ClientPortInfo::Release((CoreMessagingK::ClientPortInfo *)v2);
  LODWORD(v16) = v6;
  v15 = DoNotUseThisField_low;
  v14 = v10;
  v13 = v3;
  if ( dword_1C020F5E0 > 5u )
  {
    v11 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v27 = 0;
    v25 = (char *)a1 + 16;
    v26 = 16;
    TlgCreateWsz(&pDesc, v11);
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v32 = &v14;
    v35 = &v15;
    v29 = &v13;
    v38 = &v16;
    v30 = 1;
    v33 = 4;
    v36 = 4;
    v39 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C020F5E0, &unk_1C01EA367, 0LL, 0LL, 8u, &pData);
  }
}
