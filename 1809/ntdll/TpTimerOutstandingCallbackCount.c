/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x18002F520
 * Callers:
 *     RtlDeleteTimer @ 0x18002F570 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x180087090 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x18002C90C (TppTimerpValidateTimer.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // r8
  __int64 v4; // r9
  volatile signed __int64 *v5; // rdi
  unsigned int v6; // ebx

  if ( !(unsigned int)TppTimerpValidateTimer((_PEB_LDR_DATA *)a1, 0LL, 0LL) )
    return 0LL;
  v5 = (volatile signed __int64 *)(a1 + 240);
  RtlAcquireSRWLockExclusive(a1 + 240, v2, v3, v4);
  v6 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v5);
  return v6;
}
