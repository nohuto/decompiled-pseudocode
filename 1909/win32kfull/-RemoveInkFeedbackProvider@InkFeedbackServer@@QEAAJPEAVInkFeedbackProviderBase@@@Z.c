/*
 * XREFs of ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C0113490
 * Callers:
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C0113290 (--1InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0245320 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall InkFeedbackServer::RemoveInkFeedbackProvider(
        InkFeedbackServer *this,
        struct InkFeedbackProviderBase *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  const CHAR *v6; // rdx
  __int64 v7; // r9
  int v8; // [rsp+30h] [rbp-29h] BYREF
  __int64 v9; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v11; // [rsp+60h] [rbp+7h]
  __int64 v12; // [rsp+68h] [rbp+Fh]
  const char *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+27h] BYREF
  __int64 *v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]

  v2 = (_QWORD *)((char *)a2 + 8);
  v3 = *((_QWORD *)a2 + 1);
  if ( *(struct InkFeedbackProviderBase **)(v3 + 8) != (struct InkFeedbackProviderBase *)((char *)a2 + 8)
    || (v4 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *((_QWORD *)a2 + 2) = 0LL;
  *v2 = 0LL;
  if ( dword_1C031F298 > 4u )
  {
    v6 = (const CHAR *)*((_QWORD *)a2 + 6);
    v11 = &v8;
    v8 = 0;
    v13 = "Removed ink feedback provider";
    v12 = 4LL;
    v14 = 30LL;
    TlgCreateSz(&pDesc, v6);
    v9 = v7;
    v16 = &v9;
    v17 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E87C8, 0LL, 0LL, 6u, &pData);
  }
  return 0LL;
}
