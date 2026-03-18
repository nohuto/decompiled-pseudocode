/*
 * XREFs of NVMeRequestComplete @ 0x1C000F7AC
 * Callers:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     NVMeHwStartIo @ 0x1C0002BE0 (NVMeHwStartIo.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000D150 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C0011F30 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetLocalCommand @ 0x1C00014F8 (GetLocalCommand.c)
 *     IsInternalSrb @ 0x1C000ABFC (IsInternalSrb.c)
 */

_DWORD *__fastcall NVMeRequestComplete(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r9
  __int64 v6; // r11
  _DWORD *result; // rax

  if ( IsInternalSrb(a1, a2) )
  {
    result = (_DWORD *)GetLocalCommand(a1, v6);
    if ( result )
      *result = 0;
  }
  else if ( a3 )
  {
    return (_DWORD *)StorPortNotification(4104LL, a1, v6, v5);
  }
  else
  {
    return (_DWORD *)StorPortNotification(0LL, a1, v6, v5);
  }
  return result;
}
