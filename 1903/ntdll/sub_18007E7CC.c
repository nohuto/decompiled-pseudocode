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

PVOID sub_18007E7CC()
{
  PVOID v0; // rbx
  PVOID v2; // [rsp+30h] [rbp+8h]

  v0 = 0LL;
  if ( qword_180166470 )
  {
    RtlAcquireSRWLockShared(&stru_180166480);
    v0 = qword_180166470;
    v2 = qword_180166470;
    if ( qword_180166470 )
    {
      _InterlockedIncrement((volatile signed __int32 *)qword_180166470);
      v0 = v2;
    }
    RtlReleaseSRWLockShared(&stru_180166480);
  }
  return v0;
}
