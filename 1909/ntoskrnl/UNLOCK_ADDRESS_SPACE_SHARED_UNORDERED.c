/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1402DEE34
 * Callers:
 *     MiLockVadRange @ 0x140688410 (MiLockVadRange.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
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
