/*
 * XREFs of ExpTryAcquireFannedOutPushLockShared @ 0x140166940
 * Callers:
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140166880 (ExTryAcquireAutoExpandPushLockShared.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140103CD0 (ExfTryAcquirePushLockShared.c)
 */

unsigned __int64 __fastcall ExpTryAcquireFannedOutPushLockShared(unsigned __int64 a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // r9
  unsigned int v3; // ecx
  __int64 v4; // rbx

  v1 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  v2 = a1 >> 4;
  _BitScanReverse(&v3, v1);
  v4 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v3 - 2) + 8LL * (v1 ^ (1 << v3)) + 8)
     + 8 * (v2 & 0x1FF);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    return -(__int64)(ExfTryAcquirePushLockShared((unsigned __int64 *)v4) != 0) & v4;
  return v4;
}
