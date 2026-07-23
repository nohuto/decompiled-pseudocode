/*
 * XREFs of EtwpCovSampSampleBufferReserve @ 0x1403359F8
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1403348D4 (EtwpCovSampCaptureBufferQueue.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampLookasidePop @ 0x140335668 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1403359BC (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140335CB4 (EtwpCovSampTryAcquireBufferLock.c)
 */

__int64 __fastcall EtwpCovSampSampleBufferReserve(__int64 a1, __int16 a2, __int64 *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // r10d
  unsigned int v8; // ecx
  __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int16 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rbp
  int v14; // eax
  struct _KPRCB *v15; // rcx
  struct _KPRCB *v16; // rcx
  _SLIST_ENTRY *v17; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v19; // rcx
  unsigned __int8 v21; // [rsp+68h] [rbp+10h]

  v4 = 0LL;
  v5 = (*(_QWORD *)(a1 + 8) >> 4) & 0x1FFLL;
  v6 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
  _BitScanReverse(&v8, v6);
  v9 = 0LL;
  v10 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v8 - 2) + 8LL * (v6 ^ (1 << v8)) + 8) + 8 * v5;
  v11 = 7 - ((a2 + 7) & 7) + a2 + 8;
  while ( (unsigned int)EtwpCovSampTryAcquireBufferLock((PKSPIN_LOCK)v10) )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( v12 )
      goto LABEL_7;
    if ( v4 )
    {
      if ( !*(_DWORD *)(v10 + 120) )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)v10);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v21);
        break;
      }
      *(_QWORD *)(v10 + 8) = v4;
      v12 = v4;
      v4 = 0LL;
LABEL_7:
      v13 = *(int *)(v12 + 60);
      v14 = v13 + v11;
      if ( v14 <= *(_DWORD *)(v12 + 64) )
      {
        *(_DWORD *)(v12 + 60) = v14;
        ++*(_DWORD *)(v12 + 56);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 48)) <= 1 )
          __fastfail(0xEu);
        KxReleaseSpinLock((PKSPIN_LOCK)v10);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
        {
          v19 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v19);
        }
        __writecr8(v21);
        *a3 = v12;
        v9 = v13 + v12 + 72;
        *(_DWORD *)v9 = v13;
        *(_WORD *)(v9 + 4) = v11;
        break;
      }
      *(_QWORD *)(v10 + 8) = 0LL;
      KxReleaseSpinLock((PKSPIN_LOCK)v10);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
      {
        v15 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
      __writecr8(v21);
      EtwpCovSampSampleBufferDecRef(a1, v12);
    }
    else
    {
      KxReleaseSpinLock((PKSPIN_LOCK)v10);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
      {
        v16 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
      __writecr8(v21);
      v17 = EtwpCovSampLookasidePop(a1, a1 + 512);
      v4 = (__int64)v17;
      if ( !v17 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v10 + 316), 1u);
        return v9;
      }
      *((_DWORD *)&v17[3].Next + 3) = 0;
      *((_DWORD *)&v17[3].Next + 2) = 0;
      v17[3].Next = (_SLIST_ENTRY *)1;
    }
  }
  if ( v4 )
    EtwpCovSampSampleBufferDecRef(a1, v4);
  return v9;
}
