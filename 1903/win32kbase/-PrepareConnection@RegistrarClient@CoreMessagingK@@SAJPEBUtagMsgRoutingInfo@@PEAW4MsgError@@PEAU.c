/*
 * XREFs of ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C00AAE20
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C00AAA6C (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1C005F154 (CoreUICallSend.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01CA200 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
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
  _BYTE v17[24]; // [rsp+78h] [rbp-88h]
  _OWORD v18[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  const struct tagMsgRoutingInfo *v21; // [rsp+F0h] [rbp-10h]
  int v22; // [rsp+F8h] [rbp-8h]
  int v23; // [rsp+FCh] [rbp-4h]
  char *v24; // [rsp+100h] [rbp+0h]
  int v25; // [rsp+108h] [rbp+8h]
  int v26; // [rsp+10Ch] [rbp+Ch]
  char *v27; // [rsp+110h] [rbp+10h]
  int v28; // [rsp+118h] [rbp+18h]
  int v29; // [rsp+11Ch] [rbp+1Ch]
  char *v30; // [rsp+120h] [rbp+20h]
  int v31; // [rsp+128h] [rbp+28h]
  int v32; // [rsp+12Ch] [rbp+2Ch]
  int *v33; // [rsp+130h] [rbp+30h]
  int v34; // [rsp+138h] [rbp+38h]
  int v35; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v36; // [rsp+140h] [rbp+40h]
  int v37; // [rsp+148h] [rbp+48h]
  int v38; // [rsp+14Ch] [rbp+4Ch]
  struct _GUID *v39; // [rsp+150h] [rbp+50h]
  int v40; // [rsp+158h] [rbp+58h]
  int v41; // [rsp+15Ch] [rbp+5Ch]

  v3 = *(_OWORD *)a1;
  CoreMessagingK::RegistrarClient::s_Reply_Parameter1 = 0LL;
  v4 = *((_OWORD *)a1 + 1);
  v14 = 0LL;
  v15 = &CoreMessagingK::SendHost::s_Vtbl;
  v16 = (unsigned __int64)v3;
  *(_QWORD *)v17 = *((_QWORD *)a1 + 4);
  *(_OWORD *)&v17[8] = 0LL;
  v18[0] = (unsigned __int64)v3;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 23;
  v18[2] = *(_OWORD *)v17;
  v18[1] = v4;
  v19 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v17[8], *(__m128d *)&v17[8]);
  v8 = CoreUICallSend((int)&v15, (int)&v14, 1, 1, 1, (__int64)&unk_1C01DB3D4, v18);
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
  if ( dword_1C020F5E0 > 5u )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v24 = (char *)a1 + 4;
    v27 = (char *)a1 + 8;
    v30 = (char *)a1 + 24;
    v33 = (int *)&v13;
    v36 = &v14;
    v21 = a1;
    v22 = 4;
    v25 = 4;
    v28 = 8;
    v31 = 16;
    v34 = 4;
    LODWORD(v14) = v11;
    v37 = 4;
    v39 = a3;
    v40 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1C020F5E0, &unk_1C01EA1EB, 0LL, 0LL, 9u, &pData);
  }
  return v10;
}
