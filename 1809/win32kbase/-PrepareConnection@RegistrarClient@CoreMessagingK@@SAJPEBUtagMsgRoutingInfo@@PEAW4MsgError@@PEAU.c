/*
 * XREFs of ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C0085058
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0084CB4 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     CoreUICallSend @ 0x1C007F358 (CoreUICallSend.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01856D0 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::PrepareConnection(
        const struct tagMsgRoutingInfo *a1,
        enum MsgError *a2,
        struct _GUID *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // ecx
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v15[8]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v16[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  const struct tagMsgRoutingInfo *v19; // [rsp+F0h] [rbp-10h]
  int v20; // [rsp+F8h] [rbp-8h]
  int v21; // [rsp+FCh] [rbp-4h]
  char *v22; // [rsp+100h] [rbp+0h]
  int v23; // [rsp+108h] [rbp+8h]
  int v24; // [rsp+10Ch] [rbp+Ch]
  char *v25; // [rsp+110h] [rbp+10h]
  int v26; // [rsp+118h] [rbp+18h]
  int v27; // [rsp+11Ch] [rbp+1Ch]
  char *v28; // [rsp+120h] [rbp+20h]
  int v29; // [rsp+128h] [rbp+28h]
  int v30; // [rsp+12Ch] [rbp+2Ch]
  int *v31; // [rsp+130h] [rbp+30h]
  int v32; // [rsp+138h] [rbp+38h]
  int v33; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v34; // [rsp+140h] [rbp+40h]
  int v35; // [rsp+148h] [rbp+48h]
  int v36; // [rsp+14Ch] [rbp+4Ch]
  struct _GUID *v37; // [rsp+150h] [rbp+50h]
  int v38; // [rsp+158h] [rbp+58h]
  int v39; // [rsp+15Ch] [rbp+5Ch]

  v15[0] = &CoreMessagingK::SendHost::s_Vtbl;
  memset(&v15[1], 0, 0x38uLL);
  v6 = *(_OWORD *)a1;
  CoreMessagingK::RegistrarClient::s_Reply_Parameter1 = 0LL;
  v7 = *((_OWORD *)a1 + 1);
  v14 = 0LL;
  *(_OWORD *)&v15[1] = (unsigned __int64)v6;
  v15[5] = *((_QWORD *)a1 + 4);
  v16[1] = v7;
  v16[0] = (unsigned __int64)v6;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 22;
  v16[2] = *(_OWORD *)&v15[5];
  v17 = v15[7];
  v8 = CoreUICallSend((struct IMessageCallSendHost *)v15, (__int64)&v14, 1u, 1u, 1u, byte_1C0194364, v16);
  if ( v8 < 0 )
  {
    v10 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v8, v9);
  }
  else
  {
    v10 = 0;
    *(_DWORD *)a2 = CoreMessagingK::RegistrarClient::s_Reply_Result;
    *a3 = *(struct _GUID *)((char *)CoreMessagingK::RegistrarClient::s_Reply_Parameter1 + 24);
  }
  v11 = *(_DWORD *)a2;
  v13 = v10;
  if ( dword_1C01C77B8 > 5u )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v22 = (char *)a1 + 4;
    v25 = (char *)a1 + 8;
    v28 = (char *)a1 + 24;
    v31 = (int *)&v13;
    v34 = &v14;
    v19 = a1;
    v20 = 4;
    v23 = 4;
    v26 = 8;
    v29 = 16;
    v32 = 4;
    LODWORD(v14) = v11;
    v35 = 4;
    v37 = a3;
    v38 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A3339, 0LL, 0LL, 9u, &pData);
  }
  return v10;
}
