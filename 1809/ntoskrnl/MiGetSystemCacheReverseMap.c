/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x1400ADE90
 * Callers:
 *     MiProbeAndLockPrepare @ 0x140040790 (MiProbeAndLockPrepare.c)
 *     MiComputePxeWalkAction @ 0x140070670 (MiComputePxeWalkAction.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1400795A0 (MiReleaseSystemCacheView.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086770 (MmSetAddressRangeModifiedEx.c)
 *     MmMapViewInSystemCache @ 0x1400AD870 (MmMapViewInSystemCache.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x1400E9FE8 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MmFreeSystemCacheReserveView @ 0x14085028C (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSystemCacheReverseMap(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // [rsp+8h] [rbp+8h] BYREF

  v1 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL
    && v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v4 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 8 * ((v1 >> 3) & 0x1FF));
      v6 = v2 | 0x20;
      if ( (v5 & 0x20) == 0 )
        v6 = v2;
      v2 = v6;
      if ( (v5 & 0x42) != 0 )
        v2 = v6 | 0x42;
    }
  }
  v10 = v2;
  if ( (unsigned __int64)&v10 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v7 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)&v10 >> 3) & 0x1FF));
      v9 = v2 | 0x20;
      if ( (v8 & 0x20) == 0 )
        v9 = v2;
      v2 = v9;
      if ( (v8 & 0x42) != 0 )
        v2 = v9 | 0x42;
    }
  }
  result = *(_QWORD *)(48 * ((v2 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
  if ( result )
    result += 48 * ((a1 >> 18) & 7);
  return result;
}
