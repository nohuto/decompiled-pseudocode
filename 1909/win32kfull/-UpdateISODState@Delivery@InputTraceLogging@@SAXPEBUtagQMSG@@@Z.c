/*
 * XREFs of ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0136D0C
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@W4tagINPUTSERVICE_STATE@@@Z @ 0x1C00051EC (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@W4tagINPUTSERVICE_STATE@@@Z.c)
 *     ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@W4ISOD_INPUTROUTING@@@Z @ 0x1C0006244 (-DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@W4ISOD_INPUTROUTING@@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0136904 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C002AA20 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::UpdateISODState(const struct tagQMSG *a1)
{
  int v1; // r9d
  int v2; // edx
  int v3; // r9d
  __int64 v4; // r10
  __int64 cData; // r8
  int v6; // edx
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  int v9; // [rsp+38h] [rbp-51h] BYREF
  int v10; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v11; // [rsp+40h] [rbp-49h] BYREF
  __int64 v12; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-19h]
  __int64 v15; // [rsp+78h] [rbp-11h]
  int *v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+88h] [rbp-1h]
  int *v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  int *v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  int *v22; // [rsp+B0h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+2Fh]
  int *v24; // [rsp+C0h] [rbp+37h]
  __int64 v25; // [rsp+C8h] [rbp+3Fh]

  v1 = *((_DWORD *)a1 + 6);
  if ( ((unsigned int)(v1 - 256) <= 9 || InputTraceLogging::IsMouseInputMessage(v1)) && dword_1C03202C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x10uLL) )
    {
      cData = (unsigned int)(v2 - 8);
      v6 = *(_DWORD *)(v4 + 100);
      v12 = *(_QWORD *)(v4 + 136);
      v14 = &v12;
      v16 = &v7;
      v15 = cData;
      v7 = v3;
      v8 = -__CFSHR__(v6, 20);
      v18 = &v8;
      v17 = 4LL;
      v19 = 4LL;
      v9 = -__CFSHR__(v6, 17);
      v20 = &v9;
      v21 = 4LL;
      v23 = 4LL;
      v10 = -__CFSHR__(v6, 18);
      v22 = &v10;
      v24 = &v11;
      v11 = -__CFSHR__(v6, 19);
      v25 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E743E, 0LL, 0LL, cData, &pData);
    }
  }
}
