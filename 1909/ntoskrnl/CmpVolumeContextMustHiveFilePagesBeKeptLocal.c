/*
 * XREFs of CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14068FFE0
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1400ED6CC (CmpRecheckHiveVolumePolicy.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

bool __fastcall CmpVolumeContextMustHiveFilePagesBeKeptLocal(__int64 a1)
{
  signed __int64 *v1; // rdi
  bool v3; // bl

  v1 = (signed __int64 *)(a1 + 56);
  ExAcquirePushLockSharedEx(a1 + 56, 0LL);
  v3 = *(_BYTE *)(a1 + 64) == 0;
  if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return v3;
}
