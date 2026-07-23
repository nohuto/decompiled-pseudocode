/*
 * XREFs of MiIsRangeFullyCommitted @ 0x140619858
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140619664 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiReadPteShadow @ 0x14006C540 (MiReadPteShadow.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiIsRangeFullyCommitted(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 ProtoPteAddress; // rbx
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // esi
  __int64 v9; // rdi
  signed __int64 *v10; // rdi
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 PteShadow; // rdx
  unsigned __int64 v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 2, &v17);
  if ( !ProtoPteAddress )
    return 0LL;
  v6 = MiGetProtoPteAddress(a1, a3 >> 12, 2, &v16);
  if ( !v6 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v9 = ***(_QWORD ***)(a1 + 72);
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(v9 + 40);
  ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
  v11 = v17;
  while ( 1 )
  {
    v12 = v11 == v16 ? v6 : *(_QWORD *)(v11 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v11 + 44) - 1);
    while ( ProtoPteAddress <= v12 )
    {
      if ( MiPteInShadowRange(ProtoPteAddress) )
        PteShadow = MiReadPteShadow(v14, PteShadow);
      if ( !PteShadow )
      {
        v8 = 0;
        break;
      }
      ProtoPteAddress += 8LL;
    }
    if ( v11 == v16 )
      break;
    v11 = *(_QWORD *)(v11 + 16);
    v17 = v11;
    ProtoPteAddress = *(_QWORD *)(v11 + 8);
    if ( !ProtoPteAddress )
    {
      v8 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v8;
}
