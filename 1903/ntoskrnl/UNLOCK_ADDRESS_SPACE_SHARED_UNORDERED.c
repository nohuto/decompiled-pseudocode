/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1402DF0D4
 * Callers:
 *     MiLockVadRange @ 0x140694EA0 (MiLockVadRange.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a2 + 880;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 880), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 880));
  KeAbPostRelease(v3);
  *(_BYTE *)(a1 + 1768) &= ~2u;
  return KiLeaveGuardedRegionUnsafe(a1);
}
