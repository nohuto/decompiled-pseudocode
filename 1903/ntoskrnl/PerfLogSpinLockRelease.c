/*
 * XREFs of PerfLogSpinLockRelease @ 0x140331DF4
 * Callers:
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A7988 (KiReleaseSpinLockInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033B244 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14033B388 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall PerfLogSpinLockRelease(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // rbx
  char v8; // si
  unsigned __int8 v9; // di
  struct _KPRCB *v10; // r8
  __int64 v11; // r14
  unsigned int v12; // ecx
  unsigned __int8 NestingLevel; // dl
  unsigned __int8 CurrentIrql; // al
  char v15; // cl
  char v16; // cl
  unsigned __int8 v17; // si
  __int64 v18; // rax
  __int128 v19; // xmm1
  _QWORD v20[7]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v21; // [rsp+68h] [rbp-18h] BYREF
  int v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+74h] [rbp-Ch]

  memset(v20, 0, sizeof(v20));
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (__int64)CurrentPrcb->EtwSupport + 16;
  v8 = *((_BYTE *)CurrentPrcb->EtwSupport + 272);
  if ( v8 )
  {
    v9 = *((_BYTE *)CurrentPrcb->EtwSupport + 272);
    while ( *(_QWORD *)(32LL * --v9 + v7 + 8) != a1 )
    {
      if ( !v9 )
      {
        ++*((_DWORD *)CurrentPrcb->EtwSupport + 70);
        return;
      }
    }
    v10 = KeGetCurrentPrcb();
    v11 = 32LL * v9 + v7;
    if ( *((_BYTE *)CurrentPrcb->EtwSupport + 273) )
      goto LABEL_20;
    if ( !EtwpSpinLockHoldThreshold || (int)a3 - *(_DWORD *)v11 <= (unsigned int)EtwpSpinLockHoldThreshold )
    {
      v12 = *(_DWORD *)(v11 + 20);
      if ( (v12 < EtwpSpinLockSpinThreshold
         || v10->SynchCounters.SpinLockContentionCount % EtwpSpinLockContentionSampleRate)
        && (v12
         || (v10->SynchCounters.SpinLockAcquireCount - v10->SynchCounters.SpinLockContentionCount)
          % EtwpSpinLockAcquireSampleRate) )
      {
        goto LABEL_20;
      }
    }
    NestingLevel = v10->NestingLevel;
    *((_BYTE *)CurrentPrcb->EtwSupport + 273) = 1;
    v20[0] = a1;
    v20[1] = a2;
    v20[3] = a3;
    LODWORD(v20[5]) = KeGetCurrentThread()[1].CurrentRunTime;
    BYTE1(v20[6]) = v8;
    CurrentIrql = KeGetCurrentIrql();
    LOBYTE(v20[6]) = CurrentIrql;
    v20[2] = *(_QWORD *)v11;
    v20[4] = *(_QWORD *)(v11 + 16);
    HIDWORD(v20[5]) = v10->InterruptCount - *(_DWORD *)(v11 + 24);
    v15 = *(_BYTE *)(v11 + 28);
    BYTE2(v20[6]) = v15;
    if ( NestingLevel == 1 )
    {
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        v16 = v15 | 0x40;
LABEL_18:
        BYTE2(v20[6]) = v16;
        goto LABEL_19;
      }
    }
    else if ( !NestingLevel )
    {
LABEL_19:
      v23 = 0;
      v21 = v20;
      v22 = 56;
      EtwTraceKernelEvent((__int64)&v21, 1u, 0x20010000u, 0x529u, 0x602u);
      *(_BYTE *)(v7 + 257) = 0;
LABEL_20:
      v17 = v8 - 1;
      while ( v9 < v17 )
      {
        v18 = 32 * ++v9;
        v19 = *(_OWORD *)(v18 + v7 + 16);
        *(_OWORD *)v11 = *(_OWORD *)(v18 + v7);
        *(_OWORD *)(v11 + 16) = v19;
        v11 += 32LL;
      }
      --*(_BYTE *)(v7 + 256);
      return;
    }
    v16 = v15 | 0x80;
    goto LABEL_18;
  }
}
