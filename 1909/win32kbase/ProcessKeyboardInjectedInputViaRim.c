/*
 * XREFs of ProcessKeyboardInjectedInputViaRim @ 0x1C0183740
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017B370 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C004B844 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C017ABD0 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ProcessKeyboardInjectedInput @ 0x1C0183574 (ProcessKeyboardInjectedInput.c)
 */

void __fastcall ProcessKeyboardInjectedInputViaRim(__int64 a1, __int64 a2)
{
  if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(
                       1u,
                       (__int64)gptiCurrent,
                       *(_QWORD *)(a2 + 392),
                       *(_DWORD *)(a2 + 400)) )
    ProcessKeyboardInjectedInput(a1, (__int64 *)a2, 0LL);
  else
    InputTraceLogging::Keyboard::DropInput();
}
