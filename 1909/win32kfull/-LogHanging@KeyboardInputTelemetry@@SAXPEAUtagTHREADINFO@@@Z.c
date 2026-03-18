/*
 * XREFs of ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C023FED8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00597FC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall KeyboardInputTelemetry::LogHanging(struct tagTHREADINFO *a1)
{
  __int64 v1; // rax
  char *v3; // r8
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+7Ch] [rbp+13h]
  int *v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+8Ch] [rbp+23h]
  WCHAR pwsz[16]; // [rsp+90h] [rbp+27h] BYREF

  v1 = *((_QWORD *)a1 + 52);
  v3 = (char *)(v1 + 984);
  if ( !v1 )
    v3 = (char *)L"Unknown";
  RtlStringCchCopyW((char *)pwsz, 16LL, v3);
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    TlgCreateWsz(&pDesc, pwsz);
    v4 = *((_QWORD *)a1 + 52);
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 56);
    else
      v5 = 0;
    v13 = 0;
    v7 = v5;
    v11 = &v7;
    v12 = 4;
    if ( v4 )
      v6 = *(_DWORD *)(v4 + 56);
    else
      v6 = 0;
    v16 = 0;
    v8 = v6;
    v14 = &v8;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E7E27, 0LL, 0LL, 5u, &pData);
  }
}
