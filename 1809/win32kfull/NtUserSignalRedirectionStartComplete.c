/*
 * XREFs of NtUserSignalRedirectionStartComplete @ 0x1C0135A10
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRedirectionEvent @ 0x1C0135A88 (GreGetRedirectionEvent.c)
 */

unsigned __int64 NtUserSignalRedirectionStartComplete()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  void *RedirectionEvent; // rax
  NTSTATUS v6; // ebx

  GreLockDwmState();
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) && (RedirectionEvent = (void *)GreGetRedirectionEvent()) != 0LL )
    v6 = ZwSetEvent(RedirectionEvent, 0LL);
  else
    v6 = -1073741790;
  GreUnlockDwmState();
  return (unsigned __int64)(unsigned int)~v6 >> 31;
}
