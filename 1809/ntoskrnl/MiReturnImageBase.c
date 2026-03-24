/*
 * XREFs of MiReturnImageBase @ 0x1405F0514
 * Callers:
 *     MiCheckControlArea @ 0x1400764A0 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x14064F5A0 (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x1406FD200 (MiFreeRelocations.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     MiGetImageBitMapInfo @ 0x1400D9530 (MiGetImageBitMapInfo.c)
 *     MiZeroCfgSystemWideBitmap @ 0x14012DB40 (MiZeroCfgSystemWideBitmap.c)
 *     MiReturnSystemImageAddress @ 0x14070E000 (MiReturnSystemImageAddress.c)
 */

__int64 __fastcall MiReturnImageBase(unsigned int *a1)
{
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF
  PRTL_BITMAP v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  if ( (_DWORD)v2 != -1 )
  {
    if ( *((_BYTE *)a1 + 12) == 1 )
    {
      if ( *((_BYTE *)a1 + 13) == 1 )
        return MiReturnSystemImageAddress((v2 - 0x80000000LL) << 16, a1[1] << 16);
    }
    else
    {
      MiGetImageBitMapInfo(a1[2], &BitMapHeader, &v7, 0LL);
      MiZeroCfgSystemWideBitmap((__int64)a1, v7 - ((*a1 + (unsigned __int64)a1[1]) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140438D80, 0LL);
      if ( v6 )
        RtlClearBits(v6, *a1, a1[1]);
      RtlClearBits(BitMapHeader, *a1, a1[1]);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140438D80, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140438D80);
      KeAbPostRelease((ULONG_PTR)&qword_140438D80);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return result;
}
