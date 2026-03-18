/*
 * XREFs of ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C00493DC
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0049028 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     CoreUICallSend @ 0x1C0090184 (CoreUICallSend.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01C8260 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::PrepareConnection(
        const struct tagMsgRoutingInfo *a1,
        enum MsgError *a2,
        struct _GUID *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // ecx
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  void *v15; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+58h] [rbp-A8h]
  _QWORD v17[11]; // [rsp+78h] [rbp-88h]
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

  v3 = *(_OWORD *)a1;
  CoreMessagingK::RegistrarClient::s_Reply_Parameter1 = 0LL;
  v4 = *((_OWORD *)a1 + 1);
  v14 = 0LL;
  v15 = &CoreMessagingK::SendHost::s_Vtbl;
  v16 = (unsigned __int64)v3;
  v17[0] = *((_QWORD *)a1 + 4);
  *(_OWORD *)&v17[1] = 0LL;
  *(_OWORD *)&v17[3] = (unsigned __int64)v3;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 23;
  *(_OWORD *)&v17[7] = *(_OWORD *)v17;
  *(_OWORD *)&v17[5] = v4;
  v17[9] = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v17[1], *(__m128d *)&v17[1]);
  v8 = CoreUICallSend((unsigned int)&v15, (unsigned int)&v14, 1, 1, 1);
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
  if ( dword_1C020C5E0 > 5u )
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
    TlgWrite((TraceLoggingHProvider)&dword_1C020C5E0, &unk_1C01E81F1, 0LL, 0LL, 9u, &pData);
  }
  return v10;
}
