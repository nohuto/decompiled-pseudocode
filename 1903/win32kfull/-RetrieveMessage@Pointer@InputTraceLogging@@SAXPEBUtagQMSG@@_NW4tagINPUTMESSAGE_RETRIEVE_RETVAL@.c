/*
 * XREFs of ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01E2BF4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F1D04 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void InputTraceLogging::Pointer::RetrieveMessage()
{
  int v0; // edx
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // rax
  int v4; // r9d
  int v5; // r9d
  int v6; // r9d
  const CHAR *v7; // rdx
  unsigned __int8 v8; // r11
  __int16 v9; // [rsp+30h] [rbp-69h] BYREF
  int v10; // [rsp+34h] [rbp-65h] BYREF
  int v11; // [rsp+38h] [rbp-61h] BYREF
  int v12; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v13; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-29h]
  int v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+7Ch] [rbp-1Dh]
  __int16 *v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+8Ch] [rbp-Dh]
  __int64 v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+9Ch] [rbp+3h]
  int *v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]
  int *v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+27h] BYREF
  int *v31; // [rsp+D0h] [rbp+37h]
  int v32; // [rsp+D8h] [rbp+3Fh]
  int v33; // [rsp+DCh] [rbp+43h]

  if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x20uLL) )
  {
    v3 = *(_QWORD *)(v2 + 136);
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v13 = v3;
    v15 = &v13;
    v9 = *(_WORD *)(v2 + 32);
    v18 = &v9;
    v21 = v2 + 40;
    v10 = *(unsigned __int16 *)(v2 + 34);
    v24 = &v10;
    v11 = *(_DWORD *)(v2 + 24);
    v27 = &v11;
    v16 = v0 - 24;
    v19 = 2;
    v22 = v0 - 24;
    v25 = 4;
    v28 = 4;
    v4 = v1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
            v7 = "ContinueScan";
          else
            v7 = "UNKNOWN";
        }
        else
        {
          v7 = "SkipMsg";
        }
      }
      else
      {
        v7 = "NoMsg";
      }
    }
    else
    {
      v7 = "ReturnMsg";
    }
    TlgCreateSz(&pDesc, v7);
    v33 = 0;
    v31 = &v12;
    v12 = v8;
    v32 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E73D9, 0LL, 0LL, 9u, &pData);
  }
}
