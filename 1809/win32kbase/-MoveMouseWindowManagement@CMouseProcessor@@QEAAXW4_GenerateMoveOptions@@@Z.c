/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C002EC58
 * Callers:
 *     GenerateMouseMove @ 0x1C002EC20 (GenerateMouseMove.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C0032200 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ApiSetEditionUpdateCursorAsync @ 0x1C002EE28 (ApiSetEditionUpdateCursorAsync.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0030628 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0032110 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  bool v6; // di
  int v7; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v10; // [rsp+70h] [rbp+7h]
  int v11; // [rsp+78h] [rbp+Fh]
  int v12; // [rsp+7Ch] [rbp+13h]
  _QWORD *v13; // [rsp+80h] [rbp+17h]
  int v14; // [rsp+88h] [rbp+1Fh]
  int v15; // [rsp+8Ch] [rbp+23h]

  if ( *(_DWORD *)(a1 + 16) != 1 )
    MicrosoftTelemetryAssertTriggeredMsgKM("This functionality right now DESKTOP only");
  v6 = 1;
  if ( (a2 & 4) == 0 )
  {
    v4 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    v5 = *(_DWORD *)(v4 + 16);
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    if ( v5 == 2 )
      v6 = 0;
  }
  if ( (a2 & 1) != 0 )
  {
    v8[0] = *((_QWORD *)gpsi + 620);
    *(_QWORD *)(a1 + 84) = v8[0];
    *(_DWORD *)(a1 + 92) = 18;
    *((_QWORD *)gpsi + 619) = 0LL;
    *(struct tagPOINT *)(a1 + 2428) = gptCursorAsync;
    *(_QWORD *)(a1 + 2436) = 0LL;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( gpqCursor )
      MicrosoftTelemetryAssertTriggeredMsgKM("Expect that there is no gpqCursor, but there is one... Incorrect option specified?");
    RIMLockExclusive(a1 + 2864);
    *(_BYTE *)(a1 + 2880) = 1;
    *(_QWORD *)(a1 + 2872) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 2864, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
  {
    v12 = 0;
    v15 = 0;
    v10 = &v7;
    LODWORD(v8[0]) = v6;
    v13 = v8;
    v7 = a2;
    v11 = 4;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A1BA7, 0LL, 0LL, 4u, &pData);
  }
  if ( v6 )
  {
    memset(v8, 0, sizeof(v8));
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx(&pData, v8, 4LL, 2304LL);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
    CMouseProcessor::SynthesizeMouse((CMouseProcessor *)a1, (struct tagPOINT)&pData, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  }
  else
  {
    ApiSetEditionUpdateCursorAsync();
  }
}
