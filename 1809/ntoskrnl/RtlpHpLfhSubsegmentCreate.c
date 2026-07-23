/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x140009064
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x140009300 (RtlpHpLfhBucketComputeNewSubsegmentBlockCount.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x1400093AC (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpAcquireLockShared @ 0x140009644 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x140009678 (RtlpHpLfhBucketSubsegmentStatsUpdate.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

unsigned __int16 *__fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  int v7; // edi
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // r9d
  unsigned int v11; // edx
  unsigned int v12; // r8d
  int v13; // ecx
  unsigned int v14; // r10d
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // esi
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned __int8 v23; // r15
  unsigned __int16 *v24; // rdi
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // ebp
  unsigned __int16 *v28; // rbp
  char v30[4]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-54h]
  char v32; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A0h] [rbp+18h]
  unsigned int v35; // [rsp+A8h] [rbp+20h]

  v4 = *(unsigned __int8 *)(a2 + 1);
  v7 = (unsigned __int16)RtlpBucketBlockSizes[v4];
  v34 = v7;
  if ( (RtlpHpLfhPerfFlags & 1) != 0 )
    v8 = RtlpHpLfhBucketSubsegmentStatsUpdate(a1 + 64, (unsigned int)v4);
  else
    v8 = 0;
  v9 = RtlpHpLfhBucketComputeNewSubsegmentBlockCount(a2, v8);
  v10 = 7;
  v11 = v7 * v9;
  v12 = 18;
  v13 = (8 * (((unsigned __int64)(unsigned int)(2 * v9) + 63) >> 6) + 63) & 0xFFFFFFF0;
  v14 = v13 + 2 * ((unsigned int)(v7 * v9 + v13 + 4095) >> 12);
  v15 = v14 + v11;
  if ( v14 + v11 >= 0xF0000 )
    v15 = 983040;
  _BitScanReverse(&v16, v15 - 1);
  v17 = 7;
  v18 = v16 + 1;
  if ( v18 > 7 )
    v17 = v18;
  v19 = 18;
  v33 = v17;
  if ( v17 < 0x12 )
    v19 = v17;
  if ( v19 <= 0xC )
    LOBYTE(v19) = 12;
  v20 = 1 << v19;
  if ( (RtlpHpLfhPerfFlags & 8) != 0 && v14 <= v11 >> 6 )
  {
    if ( v11 >= 0xF0000 )
      v11 = 983040;
    _BitScanReverse(&v21, v11 - 1);
    v22 = v21 + 1;
    if ( v22 > 7 )
      v10 = v22;
    v35 = v10;
    if ( v10 < 0x12 )
      v12 = v10;
    if ( v12 <= 0xC )
      LOBYTE(v12) = 12;
    if ( v20 > 1 << v12 )
      v20 = 1 << v12;
  }
  if ( (a3 & 1) != 0 )
    v23 = -1;
  else
    v23 = RtlpHpAcquireLockShared(a1 + 72, *(unsigned __int8 *)(a1 + 57));
  v24 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *, char *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)))(
                              *(_QWORD *)a1,
                              v20,
                              a3,
                              &v32,
                              v30);
  if ( v24 )
  {
    if ( v8 && (RtlpHpLfhPerfFlags & 2) != 0 || (v32 & 1) != 0 )
    {
      v27 = v20;
    }
    else
    {
      v25 = 2 * v34;
      if ( ((2 * v34 - 1) & (2 * v34)) != 0 )
      {
        _BitScanReverse(&v26, v25);
        v31 = v26;
        v25 = 1 << (v26 + 1);
      }
      if ( v25 <= 0x1000 )
        v25 = 4096;
      v27 = v20;
      if ( v25 < v20 )
        v27 = v25;
    }
    if ( ((int (__fastcall *)(_QWORD, unsigned __int16 *, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v24,
           v27) < 0 )
    {
      v28 = 0LL;
    }
    else
    {
      RtlpHpLfhSubsegmentInitialize(v24, a1);
      _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), v24[17]);
      v28 = v24;
      v24 = 0LL;
    }
    if ( v24 )
      ((void (__fastcall *)(_QWORD, unsigned __int16 *, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
        *(_QWORD *)a1,
        v24,
        v20,
        a3);
  }
  else
  {
    v28 = 0LL;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v23 < 2u )
      {
        _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick();
      }
      __writecr8(v23);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 72);
      KeAbPostRelease(a1 + 72);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  return v28;
}
