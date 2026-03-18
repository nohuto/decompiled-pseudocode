/*
 * XREFs of ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00843A8
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C0083FAC (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     CoreUICallSend @ 0x1C007F358 (CoreUICallSend.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0185620 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01856D0 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterAlpcPort(
        const struct _GUID *a1,
        const struct _UNICODE_STRING *a2)
{
  struct _GUID v2; // xmm0
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  const WCHAR *v8; // rdx
  PWSTR Buffer; // [rsp+38h] [rbp-41h]
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  void *v12; // [rsp+48h] [rbp-31h] BYREF
  struct _GUID v13; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  const struct _GUID *v15; // [rsp+80h] [rbp+7h]
  int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+17h] BYREF
  __int64 *v19; // [rsp+A0h] [rbp+27h]
  int v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+ACh] [rbp+33h]

  v2 = *a1;
  v11 = 0LL;
  v12 = &CoreMessagingK::SendHost::s_Vtbl;
  Buffer = a2->Buffer;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 22;
  v13 = v2;
  v5 = CoreUICallSend((struct IMessageCallSendHost *)&v12, (__int64)&v11, 1u, 1u, 0xAu, byte_1C0194382, &v13, Buffer);
  if ( v5 < 0 )
  {
    v7 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v5, v6);
  }
  else
  {
    if ( CoreMessagingK::RegistrarClient::s_Reply_Result )
      CoreMessagingK::Runtime::BugCheck(1029LL, CoreMessagingK::RegistrarClient::s_Reply_Result, 0LL);
    v7 = 0;
  }
  v8 = a2->Buffer;
  LODWORD(v11) = v7;
  if ( dword_1C01C77B8 > 5u )
  {
    v17 = 0;
    v15 = a1;
    v16 = 16;
    TlgCreateWsz(&pDesc, v8);
    v21 = 0;
    v19 = &v11;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A344F, 0LL, 0LL, 5u, &pData);
  }
  return v7;
}
