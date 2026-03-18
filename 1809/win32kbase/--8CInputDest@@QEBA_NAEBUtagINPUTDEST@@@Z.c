/*
 * XREFs of ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003243C
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C002EE8C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     HandleInputDestDestruction @ 0x1C0032304 (HandleInputDestDestruction.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00702B8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0070760 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0140200 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C014146C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0142BC8 (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0143C3C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C0149350 (-HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z.c)
 *     IsCapturedBySystem @ 0x1C0151340 (IsCapturedBySystem.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputDest::operator==(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // eax
  bool v7; // zf

  v5 = *a1;
  if ( !(_DWORD)v5 && !*(_DWORD *)a2 )
  {
    LOBYTE(v6) = 1;
    return v6;
  }
  v6 = v5 & *(_DWORD *)a2;
  if ( v6 )
  {
    LOBYTE(v5) = 1;
    if ( (v6 & 1) != 0 )
    {
      if ( a1[1] != *(_DWORD *)(a2 + 4) )
        goto LABEL_13;
      v7 = a1[2] == *(_DWORD *)(a2 + 8);
    }
    else
    {
      if ( (v6 & 2) == 0 )
      {
        if ( (v6 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
        LOBYTE(v6) = *((_QWORD *)a1 + 9) == *(_QWORD *)(a2 + 72);
        return v6;
      }
      if ( a1[6] != *(_DWORD *)(a2 + 24) || a1[7] != *(_DWORD *)(a2 + 28) )
        goto LABEL_13;
      v7 = *((_QWORD *)a1 + 2) == *(_QWORD *)(a2 + 16);
    }
    if ( v7 )
    {
LABEL_14:
      LOBYTE(v6) = v5;
      return v6;
    }
LABEL_13:
    LOBYTE(v5) = 0;
    goto LABEL_14;
  }
  return v6;
}
