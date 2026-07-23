/*
 * XREFs of TpWaitOutstandingCallbackCount @ 0x18002F850
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18002F8A0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppWaitpValidateWait @ 0x18002C1D0 (TppWaitpValidateWait.c)
 */

__int64 __fastcall TpWaitOutstandingCallbackCount(__int64 a1)
{
  __int64 v1; // rbx
  _RTL_SRWLOCK *v2; // rdi

  v1 = a1;
  TppWaitpValidateWait(a1, 0);
  v2 = (_RTL_SRWLOCK *)(v1 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v1 + 240));
  LODWORD(v1) = *(_DWORD *)(v1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return (unsigned int)v1;
}
