/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0030264
 * Callers:
 *     GenerateMouseMove @ 0x1C0030210 (GenerateMouseMove.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C0055B60 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00300E8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ApiSetEditionUpdateCursorAsync @ 0x1C0030434 (ApiSetEditionUpdateCursorAsync.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00313C0 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C004E23C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(_DWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  _DWORD *v4; // rsi
  CInputThread *v5; // rdi
  int v6; // ebx
  bool v7; // di
  struct tagPOINT v8; // rax
  int v9; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v12; // [rsp+70h] [rbp-9h]
  int v13; // [rsp+78h] [rbp-1h]
  int v14; // [rsp+7Ch] [rbp+3h]
  _QWORD *v15; // [rsp+80h] [rbp+7h]
  int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]

  v3 = a2;
  v4 = a1;
  if ( a1[2] != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = 1;
  if ( (v3 & 4) == 0 )
  {
    v5 = gpInputThread;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v5, 0LL);
    v6 = *((_DWORD *)v5 + 4);
    ExReleasePushLockSharedEx(v5, 0LL);
    KeLeaveCriticalRegion();
    if ( v6 == 2 )
      v7 = 0;
  }
  if ( (v3 & 1) != 0 )
  {
    a1 = gpsi;
    v10[0] = *((_QWORD *)gpsi + 620);
    *(_QWORD *)(v4 + 19) = v10[0];
    v4[21] = 18;
    *((_QWORD *)gpsi + 619) = 0LL;
    v8 = gptCursorAsync;
    *((_QWORD *)v4 + 393) = 0LL;
    *((struct tagPOINT *)v4 + 392) = v8;
  }
  if ( (v3 & 2) != 0 )
  {
    if ( gpqCursor )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    RIMLockExclusive(v4 + 882);
    *((_BYTE *)v4 + 3544) = 1;
    *((_QWORD *)v4 + 442) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 882, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x40uLL) )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v9;
    LODWORD(v10[0]) = v7;
    v15 = v10;
    v9 = v3;
    v13 = 4;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E655F, 0LL, 0LL, 4u, &pData);
  }
  if ( v7 )
  {
    memset(v10, 0, sizeof(v10));
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx(&pData, v10, 4LL, 2304LL);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v10);
    CMouseProcessor::SynthesizeMouse((CMouseProcessor *)v4, (struct tagPOINT)&pData, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v10);
  }
  else
  {
    ApiSetEditionUpdateCursorAsync();
  }
}
