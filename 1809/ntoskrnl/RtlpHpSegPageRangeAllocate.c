/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x14000B270
 * Callers:
 *     RtlpHpSegAlloc @ 0x14000B118 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegSegmentAllocate @ 0x14000A588 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegLockAcquire @ 0x14000B57C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegPageRangeSplit @ 0x14000B5A4 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14000B644 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14000B704 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegHeapAddSegment @ 0x14000DBD8 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentInitialize @ 0x14000DC20 (RtlpHpSegSegmentInitialize.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14018D268 (RtlpHpSegLargeRangeAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  unsigned __int8 v8; // al
  __int64 v9; // rdi
  unsigned __int8 v10; // r12
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned int v18; // r14d
  __m128i v19; // xmm0
  volatile LONG *v20; // rbp
  char *v21; // rcx
  char v22; // al

  v4 = 1;
  v6 = (unsigned int)((1 << *(_BYTE *)(a1 + 9)) + a2 - 1) >> *(_BYTE *)(a1 + 9);
  v7 = v6 << 24;
  v8 = RtlpHpSegLockAcquire(a1, a3);
  v9 = *(_QWORD *)(a1 + 96);
  v10 = v8;
  if ( (*(_QWORD *)(a1 + 104) & 1) != 0 && v9 )
    v9 ^= a1 + 96;
  v11 = 0LL;
  while ( v9 )
  {
    v12 = *(_DWORD *)(v9 + 28);
    if ( v7 < v12 )
    {
      v13 = *(_QWORD *)v9;
      v11 = v9;
    }
    else
    {
      if ( v7 <= v12 )
        goto LABEL_15;
      v13 = *(_QWORD *)(v9 + 8);
    }
    if ( (*(_QWORD *)(a1 + 104) & 1) != 0 && v13 )
      v9 ^= v13;
    else
      v9 = v13;
  }
  v9 = v11;
LABEL_15:
  if ( v9 )
  {
    if ( (a3 & 0x800000) != 0 )
      v9 = RtlpHpSegLargeRangeAllocate(a1, v9, v6, 1LL);
    else
      RtlpHpSegFreeRangeRemove(a1, v9, v11);
    if ( v9 )
      goto LABEL_34;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick();
      }
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
      KeAbPostRelease(a1 + 64);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  result = RtlpHpSegSegmentAllocate(a1, 0, (a3 & 0x800000) != 0 ? 2 : 0);
  v16 = result;
  if ( result )
  {
    RtlpHpSegSegmentInitialize(a1, result, 0LL);
    v9 = v16 + 32LL * *(unsigned __int8 *)(a1 + 10);
    v10 = RtlpHpSegLockAcquire(a1, a3);
    RtlpHpSegHeapAddSegment(a1, v16);
    if ( (a3 & 0x800000) != 0 )
      v9 = RtlpHpSegLargeRangeAllocate(a1, v9, v6, 0LL);
LABEL_34:
    v17 = RtlpHpSegPageRangeSplit(v14, v9, v6);
    if ( v17 )
      RtlpHpSegFreeRangeInsert(a1, v17, 0LL);
    *(_BYTE *)(v9 + 24) |= (unsigned __int8)(4 * ((a3 >> 26) & 3)) | 1;
    v18 = v6 - 1;
    *(_BYTE *)(32LL * v18 + v9 + 24) |= 1u;
    if ( (a3 & 1) == 0 )
    {
      v19 = *(__m128i *)(a1 + 40);
      v20 = (volatile LONG *)(a1 + 64);
      if ( (_mm_cvtsi128_si32(v19) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v20);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
        {
          _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick();
        }
        __writecr8(v10);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v20);
        KeAbPostRelease((ULONG_PTR)v20);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
    if ( v18 > 1 )
    {
      v21 = (char *)(v9 + 56);
      do
      {
        v21[7] = v4++;
        v22 = *v21;
        v21 += 32;
        *(v21 - 32) = v22 | 1;
      }
      while ( v4 < v18 );
    }
    return v9;
  }
  return result;
}
