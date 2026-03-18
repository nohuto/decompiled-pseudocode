/*
 * XREFs of NtUserWaitMessage @ 0x1C00AE3E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C00A4280 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x1C00AE450 (ClientWaitMessageExMPH.c)
 */

__int64 NtUserWaitMessage()
{
  int v0; // eax
  __int64 v1; // rcx
  int v2; // ebx

  EnterCrit(0LL, 1LL);
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 440LL) + 20LL) <= 0 )
    v0 = xxxSleepThread2(0x3CFFu, 0, 1, 0, 0LL);
  else
    v0 = ClientWaitMessageExMPH(15615LL);
  v2 = v0;
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
