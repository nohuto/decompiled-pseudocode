/*
 * XREFs of ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C013312C
 * Callers:
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C0133074 (--0InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C022CBDC (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall InkFeedbackServer::AddInkFeedbackProvider(
        InkFeedbackServer *this,
        struct InkFeedbackProviderBase *a2)
{
  InkFeedbackServer **v2; // r8
  InkFeedbackServer *v3; // rax
  const CHAR *v5; // rdx
  __int64 v6; // r9
  int v7; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  const char *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+27h] BYREF
  __int64 *v15; // [rsp+90h] [rbp+37h]
  __int64 v16; // [rsp+98h] [rbp+3Fh]

  v2 = (InkFeedbackServer **)*((_QWORD *)this + 1);
  v3 = (struct InkFeedbackProviderBase *)((char *)a2 + 8);
  if ( *v2 != this )
    __fastfail(3u);
  *(_QWORD *)v3 = this;
  *((_QWORD *)a2 + 2) = v2;
  *v2 = v3;
  *((_QWORD *)this + 1) = v3;
  if ( dword_1C030C390 > 4u )
  {
    v5 = (const CHAR *)*((_QWORD *)a2 + 6);
    v10 = &v7;
    v11 = 4LL;
    v12 = "Added ink feedback provider";
    v7 = 0;
    v13 = 28LL;
    TlgCreateSz(&pDesc, v5);
    v8 = v6;
    v15 = &v8;
    v16 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D652D, 0LL, 0LL, 6u, &pData);
  }
  return 0LL;
}
