/*
 * XREFs of sub_18007E7CC @ 0x18007E7CC
 * Callers:
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     TpSetDefaultPoolStackInformation @ 0x18007E680 (TpSetDefaultPoolStackInformation.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18010E940 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall sub_18007E7CC(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h]

  v4 = 0LL;
  if ( qword_180166470 )
  {
    RtlAcquireSRWLockShared(&qword_180166480, a2, a3, a4);
    v4 = qword_180166470;
    v6 = qword_180166470;
    if ( qword_180166470 )
    {
      _InterlockedIncrement((volatile signed __int32 *)qword_180166470);
      v4 = v6;
    }
    RtlReleaseSRWLockShared(&qword_180166480);
  }
  return v4;
}
