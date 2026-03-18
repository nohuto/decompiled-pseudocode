/*
 * XREFs of PspUnlockProcessSharedUnsafe @ 0x140307890
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

char __fastcall PspUnlockProcessSharedUnsafe(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 736);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 736), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
