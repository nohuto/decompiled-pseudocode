/*
 * XREFs of TpPoolReferenceExistingGlobalPool @ 0x18007EE6C
 * Callers:
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     TpSetDefaultPoolStackInformation @ 0x18007ED20 (TpSetDefaultPoolStackInformation.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18010EA70 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall TpPoolReferenceExistingGlobalPool(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h]

  v4 = 0LL;
  if ( TppPoolpGlobalPool )
  {
    RtlAcquireSRWLockShared(&TppPoolpGlobalPoolLock, a2, a3, a4);
    v4 = TppPoolpGlobalPool;
    v6 = TppPoolpGlobalPool;
    if ( TppPoolpGlobalPool )
    {
      _InterlockedIncrement((volatile signed __int32 *)TppPoolpGlobalPool);
      v4 = v6;
    }
    RtlReleaseSRWLockShared(&TppPoolpGlobalPoolLock);
  }
  return v4;
}
