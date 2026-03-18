/*
 * XREFs of ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C00AA5E0
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00AA288 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     CoreUICallSend @ 0x1C005F154 (CoreUICallSend.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01CA200 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterPort(const unsigned __int16 *a1, const struct _GUID *a2)
{
  struct _GUID v2; // xmm0
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  int v8; // [rsp+58h] [rbp-B0h]
  __int64 v9; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v11[4]; // [rsp+78h] [rbp-90h] BYREF
  struct _GUID v12; // [rsp+98h] [rbp-70h] BYREF
  __int128 v13; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v14; // [rsp+B8h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  const struct _GUID *v17; // [rsp+F8h] [rbp-10h]
  int v18; // [rsp+100h] [rbp-8h]
  int v19; // [rsp+104h] [rbp-4h]
  __int64 *v20; // [rsp+108h] [rbp+0h]
  int v21; // [rsp+110h] [rbp+8h]
  int v22; // [rsp+114h] [rbp+Ch]

  v2 = *a2;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 23;
  v11[0] = &CoreMessagingK::SendHost::s_Vtbl;
  v9 = 0LL;
  v10 = 0LL;
  v11[2] = 0LL;
  v8 = 1;
  v11[3] = 0LL;
  v11[1] = 1LL;
  v12 = v2;
  v13 = 1uLL;
  v14 = 0LL;
  v4 = CoreUICallSend(
         (int)v11,
         (int)&v10,
         1,
         1,
         7,
         (__int64)&unk_1C01DB3DE,
         L"Kernel\\MIT\\InputPort",
         &v13,
         &v9,
         &v12,
         v8);
  if ( v4 < 0 )
    v6 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v4, v5);
  else
    v6 = CoreMessagingK::RegistrarClient::s_Reply_Result != 0 ? 0xC0000001 : 0;
  LODWORD(v9) = v6;
  if ( dword_1C020F5E0 > 5u )
  {
    TlgCreateWsz(&pDesc, L"Kernel\\MIT\\InputPort");
    v19 = 0;
    v22 = 0;
    v20 = &v9;
    v17 = a2;
    v18 = 16;
    v21 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C020F5E0, &unk_1C01EA29F, 0LL, 0LL, 5u, &pData);
  }
  return v6;
}
