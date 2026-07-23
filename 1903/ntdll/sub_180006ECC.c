/*
 * XREFs of sub_180006ECC @ 0x180006ECC
 * Callers:
 *     sub_18000645C @ 0x18000645C (sub_18000645C.c)
 *     sub_1800066EC @ 0x1800066EC (sub_1800066EC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwUnsubscribeWnfStateChange @ 0x18009FFB0 (ZwUnsubscribeWnfStateChange.c)
 *     sub_1800DD888 @ 0x1800DD888 (sub_1800DD888.c)
 */

void __fastcall sub_180006ECC(char *BaseAddress)
{
  __int64 v2; // rcx
  char **v3; // r8
  PVOID *v4; // rdx
  void *v5; // r8

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_180166088 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 27, 0xFFFFFFFF) == 1 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
    else
      v2 = 2147353486LL;
    if ( *(_BYTE *)v2 )
      sub_1800DD888(*((_QWORD *)BaseAddress + 2), BaseAddress);
    ZwUnsubscribeWnfStateChange((PCWNF_STATE_NAME)BaseAddress + 2);
    v3 = (char **)*((_QWORD *)BaseAddress + 4);
    if ( v3[1] != BaseAddress + 32 || (v4 = (PVOID *)*((_QWORD *)BaseAddress + 5), *v4 != BaseAddress + 32) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (char *)v4;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
    v5 = (void *)*((_QWORD *)BaseAddress + 15);
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_180166088 + 8));
}
