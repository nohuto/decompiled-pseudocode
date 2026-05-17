/*
 * XREFs of sub_180046F54 @ 0x180046F54
 * Callers:
 *     sub_180046EEC @ 0x180046EEC (sub_180046EEC.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 */

signed __int64 __fastcall sub_180046F54(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rbx

  v6 = *(_QWORD *)(qword_180163B58 + 8LL * (unsigned __int16)a2 - 8);
  RtlAcquireSRWLockShared(&qword_180163B40, a2, a3, a4);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a4 - a3);
  return RtlReleaseSRWLockShared(&qword_180163B40);
}
