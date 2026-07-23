/*
 * XREFs of sub_180086E94 @ 0x180086E94
 * Callers:
 *     sub_18006CF40 @ 0x18006CF40 (sub_18006CF40.c)
 *     sub_180086C60 @ 0x180086C60 (sub_180086C60.c)
 * Callees:
 *     sub_180005D10 @ 0x180005D10 (sub_180005D10.c)
 *     RtlWakeAllConditionVariable @ 0x18006D270 (RtlWakeAllConditionVariable.c)
 *     sub_180086F14 @ 0x180086F14 (sub_180086F14.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall sub_180086E94(__int64 a1)
{
  void *v2; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 328), 0, 1) )
    return 4201LL;
  sub_180086F14(*(unsigned int *)(a1 + 20));
  v2 = *(void **)(a1 + 560);
  if ( v2 )
  {
    ZwClose(v2);
    *(_QWORD *)(a1 + 560) = 0LL;
  }
  _InterlockedExchange64((volatile __int64 *)(qword_180163518 + 16LL * *(unsigned int *)(a1 + 20)), 3LL);
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
  sub_180005D10(a1, 2, *(_DWORD *)(a1 + 40));
  return 0LL;
}
