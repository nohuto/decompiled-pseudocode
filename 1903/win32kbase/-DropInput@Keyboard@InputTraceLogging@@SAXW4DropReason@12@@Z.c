/*
 * XREFs of ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C017CDC0
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003FF50 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017D560 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C0185930 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C0185990 (ProcessKeyboardInputWorker.c)
 *     xxxKeyEventEx @ 0x1C01861D0 (xxxKeyEventEx.c)
 *     xxxProcessKeyEvent @ 0x1C01865B0 (xxxProcessKeyEvent.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Keyboard@1@@Z @ 0x1C017CE4C (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Keyboard@1@@Z.c)
 */

void InputTraceLogging::Keyboard::DropInput()
{
  unsigned int v0; // r9d
  const CHAR *v1; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x4000uLL) )
    {
      v1 = (const CHAR *)InputTraceLogging::DropReasonToString(v0);
      TlgCreateSz(&pDesc, v1);
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E73F9, 0LL, 0LL, 3u, &pData);
    }
  }
}
