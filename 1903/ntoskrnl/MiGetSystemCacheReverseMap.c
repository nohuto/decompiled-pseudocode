/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x140075CD0
 * Callers:
 *     MiComputePxeWalkAction @ 0x14004A690 (MiComputePxeWalkAction.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     MiReleaseSystemCacheView @ 0x14006FE50 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x140074B60 (MmMapViewInSystemCache.c)
 *     MiSynchronizeSystemVa @ 0x140075950 (MiSynchronizeSystemVa.c)
 *     MiProbeAndLockPrepare @ 0x14008FB20 (MiProbeAndLockPrepare.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MmFreeSystemCacheReserveView @ 0x14088B0E0 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetSystemCacheReverseMap(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL
    && v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v7 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v1 >> 3) & 0x1FF));
      v8 = v2 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v8 = v2;
      v2 = v8;
      if ( (v7 & 0x42) != 0 )
        v2 = v8 | 0x42;
    }
  }
  v9 = v2;
  v3 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v9) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
  if ( v3 )
    return v3 + 40 * ((v4 >> 18) & 7);
  else
    return 0LL;
}
