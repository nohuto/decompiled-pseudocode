/*
 * XREFs of Etw_CommandCompleteError @ 0x1C0038F74
 * Callers:
 *     Command_ControllerResetPostReset @ 0x1C0007538 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x1C0007AC8 (Command_FailAllCommands.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0007C24 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0008088 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0008950 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     McTemplateK0ppb16qu @ 0x1C0005878 (McTemplateK0ppb16qu.c)
 */

ULONG __fastcall Etw_CommandCompleteError(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  ULONG result; // eax
  char v6; // [rsp+38h] [rbp-10h]

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x40) != 0 )
  {
    v6 = *(_BYTE *)(a3 + 60);
    return McTemplateK0ppb16qu(
             (struct _MCGEN_TRACE_CONTEXT *)(a3 + 24),
             &USBXHCI_ETW_EVENT_COMMAND_COMPLETE_ERROR,
             a3,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             a3,
             a3 + 24,
             a4,
             v6);
  }
  return result;
}
