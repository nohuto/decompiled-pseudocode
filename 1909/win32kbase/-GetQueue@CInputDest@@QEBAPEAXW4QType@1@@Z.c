/*
 * XREFs of ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00381D8
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037E48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00380E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C003817C (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0038250 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C004DB80 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x1C004DCF4 (-GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z.c)
 *     ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1C004E404 (-HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z.c)
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1C004F38C (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C015EBB0 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C0164828 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C016D0FC (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C016D44C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0170B10 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0190DEC (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0038234 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputDest::GetQueue(CInputDest *a1, __int64 a2)
{
  __int64 v2; // rbx
  struct tagTHREADINFO *ThreadInfo; // rax

  v2 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    if ( (_DWORD)a2 )
    {
      if ( (_DWORD)a2 != 1 )
      {
        if ( (_DWORD)a2 == 2 )
        {
LABEL_4:
          ThreadInfo = CInputDest::GetThreadInfo(a1);
          if ( ThreadInfo )
            return *((_QWORD *)ThreadInfo + 53);
          return v2;
        }
        MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(a2 - 1), a2, a1);
      }
    }
    else if ( *((_DWORD *)a1 + 23) == 2 )
    {
      goto LABEL_4;
    }
    return v2;
  }
  return 0LL;
}
