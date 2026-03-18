/*
 * XREFs of MiReturnImageBase @ 0x140609554
 * Callers:
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x140648DF4 (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x14072BFC8 (MiFreeRelocations.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiGetImageBitMapInfo @ 0x140097C3C (MiGetImageBitMapInfo.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x1400E8360 (RtlClearBitsEx.c)
 *     MiZeroCfgSystemWideBitmap @ 0x14012E91C (MiZeroCfgSystemWideBitmap.c)
 *     MiReturnSystemImageAddress @ 0x140746F00 (MiReturnSystemImageAddress.c)
 */

__int64 __fastcall MiReturnImageBase(__int64 a1)
{
  unsigned __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 != -1LL )
  {
    if ( *(_BYTE *)(a1 + 12) == 1 )
    {
      if ( *(_BYTE *)(a1 + 13) == 1 )
        return MiReturnSystemImageAddress((v1 - 0x80000000) << 16, (unsigned int)(*(_DWORD *)(a1 + 8) << 16));
    }
    else
    {
      MiGetImageBitMapInfo(*(_DWORD *)(a1 + 16), &v5, &v7, 0LL);
      MiZeroCfgSystemWideBitmap(a1, v7 - ((v1 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140464448, 0LL);
      if ( v6 )
        RtlClearBitsEx(v6, v1, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx(v5, v1, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140464448, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140464448);
      KeAbPostRelease((ULONG_PTR)&qword_140464448);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return result;
}
