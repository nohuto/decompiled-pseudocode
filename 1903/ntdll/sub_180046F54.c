/*
 * XREFs of sub_180046F54 @ 0x180046F54
 * Callers:
 *     sub_180046EEC @ 0x180046EEC (sub_180046EEC.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 */

void __fastcall sub_180046F54(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx

  v6 = *(_QWORD *)(qword_180163B58 + 8LL * a2 - 8);
  RtlAcquireSRWLockShared(&Parameter);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a4 - a3);
  RtlReleaseSRWLockShared(&Parameter);
}
