/*
 * XREFs of ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0031E8C
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00313C0 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0190084 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessInput(
        const struct RIMDEV *a1,
        const struct CMouseProcessor::MouseInputDataEx *a2)
{
  __int64 v2; // r9
  unsigned __int8 v3; // r10
  __int64 v4; // r11
  __int16 v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  int *v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  __int64 *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  int *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  __int16 *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  int *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  int *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]

  if ( dword_1C020CB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x40uLL) )
    {
      v13 = v4;
      v16 = &v13;
      v6 = v3;
      v18 = &v6;
      v14 = *(_QWORD *)(v2 + 56);
      v20 = &v14;
      v7 = *(unsigned __int16 *)(v2 + 2);
      v22 = &v7;
      v8 = *(unsigned __int16 *)(v2 + 4);
      v24 = &v8;
      v5 = *(_WORD *)(v2 + 6);
      v26 = &v5;
      v9 = *(_DWORD *)(v2 + 12);
      v28 = &v9;
      v10 = *(_DWORD *)(v2 + 16);
      v30 = &v10;
      v11 = *(_DWORD *)(v2 + 20);
      v32 = &v11;
      v12 = *(_DWORD *)(v2 + 72);
      v34 = &v12;
      v17 = 8LL;
      v19 = 4LL;
      v21 = 8LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 2LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E6609, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
