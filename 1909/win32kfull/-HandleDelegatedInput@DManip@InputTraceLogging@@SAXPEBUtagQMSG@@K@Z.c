/*
 * XREFs of ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01E2198
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E30E8 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C002AA20 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C002ADA0 (IsPointerInputMessage.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?DelegationResponseToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01E18B8 (-DelegationResponseToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::DManip::HandleDelegatedInput(const struct tagQMSG *a1, int a2)
{
  int v3; // ecx
  int v4; // r9d
  int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // rax
  const char *v8; // rax
  int v9; // r9d
  int v10; // r10d
  __int64 v11; // r11
  __int64 v12; // rax
  const char *v13; // rax
  __int16 v14; // [rsp+30h] [rbp-59h] BYREF
  int v15; // [rsp+34h] [rbp-55h] BYREF
  int v16; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  _QWORD *v19; // [rsp+70h] [rbp-19h]
  int v20; // [rsp+78h] [rbp-11h]
  int v21; // [rsp+7Ch] [rbp-Dh]
  __int16 *v22; // [rsp+80h] [rbp-9h]
  int v23; // [rsp+88h] [rbp-1h]
  int v24; // [rsp+8Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+90h] [rbp+7h] BYREF
  int *v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+ACh] [rbp+23h]
  int *v29; // [rsp+B0h] [rbp+27h]
  int v30; // [rsp+B8h] [rbp+2Fh]
  int v31; // [rsp+BCh] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+37h] BYREF

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 6)) )
  {
    if ( dword_1C03202C0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x1000uLL) )
      {
        v7 = *(_QWORD *)(v6 + 136);
        v21 = 0;
        v24 = 0;
        v25.Reserved = 0;
        v28 = 0;
        v31 = 0;
        v17[0] = v7;
        v19 = v17;
        v14 = *(_WORD *)(v6 + 32);
        v22 = &v14;
        v25.Ptr = v6 + 40;
        v16 = *(unsigned __int16 *)(v6 + 34);
        v26 = &v16;
        v29 = &v15;
        v20 = 8;
        v23 = 2;
        v25.Size = 8;
        v27 = v4;
        v15 = v5;
        v30 = v4;
        v8 = InputTraceLogging::DelegationResponseToString(a2);
        TlgCreateSz(&pDesc, v8);
        TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E74B2, 0LL, 0LL, 8u, &pData);
      }
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v3)
         && dword_1C03202C0 > 4u
         && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x1000uLL) )
  {
    v12 = *(_QWORD *)(v11 + 136);
    v21 = 0;
    v24 = 0;
    v17[0] = v12;
    v19 = v17;
    v22 = (__int16 *)&v15;
    v20 = 8;
    v15 = v10;
    v23 = v9;
    v13 = InputTraceLogging::DelegationResponseToString(a2);
    TlgCreateSz(&v25, v13);
    TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E752A, 0LL, 0LL, 5u, &pData);
  }
}
