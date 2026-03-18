/*
 * XREFs of ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0171F2C
 * Callers:
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0165214 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C01656A0 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C016E320 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C016E470 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0176DE0 (WPP_RECORDER_SF_L.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetDelegateActionInt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  v3 = a2;
  switch ( (_DWORD)a3 )
  {
    case 1:
      *(_DWORD *)(a2 + 320) |= 1u;
      return;
    case 2:
      *(_DWORD *)(a2 + 320) |= 2u;
      return;
    case 3:
      *(_DWORD *)(a2 + 320) |= 4u;
      return;
  }
  v4 = (unsigned int)(a3 - 4);
  if ( (_DWORD)a3 == 4 )
  {
    v10 = *(_DWORD *)(a2 + 320);
    if ( (v10 & 4) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
      v10 = *(_DWORD *)(v3 + 320);
    }
    if ( (v10 & 0x20) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
      v10 = *(_DWORD *)(v3 + 320);
    }
    if ( (v10 & 8) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
      v10 = *(_DWORD *)(v3 + 320);
    }
    v7 = v10 | 8;
    goto LABEL_23;
  }
  v5 = (unsigned int)(a3 - 5);
  if ( (_DWORD)a3 == 5 )
  {
    v8 = *(unsigned int *)(a2 + 320);
    v9 = v8;
    if ( (v8 & 4) == 0 && (v8 & 8) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2, a3);
      v9 = *(_DWORD *)(v3 + 320);
    }
    v7 = v9 | 0x10;
    goto LABEL_23;
  }
  if ( (_DWORD)a3 == 6 )
  {
    v6 = *(_DWORD *)(a2 + 320);
    if ( (v6 & 0x20) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
      v6 = *(_DWORD *)(v3 + 320);
    }
    v7 = v6 | 0x20;
LABEL_23:
    *(_DWORD *)(v3 + 320) = v7;
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_L(v5, a2, 7, 297, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids, a3);
  }
}
