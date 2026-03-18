/*
 * XREFs of ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C017ABD0
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004A650 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017B370 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C0183740 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C01837A0 (ProcessKeyboardInputWorker.c)
 *     xxxKeyEventEx @ 0x1C0183FE0 (xxxKeyEventEx.c)
 *     xxxProcessKeyEvent @ 0x1C01843C0 (xxxProcessKeyEvent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Keyboard@1@@Z @ 0x1C017AC5C (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Keyboard@1@@Z.c)
 */

void InputTraceLogging::Keyboard::DropInput()
{
  unsigned int v0; // r9d
  const CHAR *v1; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  if ( dword_1C020CB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x4000uLL) )
    {
      v1 = (const CHAR *)InputTraceLogging::DropReasonToString(v0);
      TlgCreateSz(&pDesc, v1);
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E5439, 0LL, 0LL, 3u, &pData);
    }
  }
}
