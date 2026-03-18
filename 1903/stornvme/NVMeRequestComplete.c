/*
 * XREFs of NVMeRequestComplete @ 0x1C000D9D8
 * Callers:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     NVMeHwStartIo @ 0x1C00020B0 (NVMeHwStartIo.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000A730 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C0010FC0 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     IsInternalSrb @ 0x1C0008028 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C00090F8 (GetLocalCommand.c)
 */

_DWORD *__fastcall NVMeRequestComplete(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r11
  _DWORD *result; // rax

  if ( IsInternalSrb(a1, a2) )
  {
    result = (_DWORD *)GetLocalCommand(a1, v5);
    if ( result )
      *result = 0;
  }
  else if ( a3 )
  {
    return (_DWORD *)StorPortNotification(4104LL, a1, v5);
  }
  else
  {
    return (_DWORD *)StorPortNotification(0LL, a1, v5);
  }
  return result;
}
