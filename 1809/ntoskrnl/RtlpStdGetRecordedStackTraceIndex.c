/*
 * XREFs of RtlpStdGetRecordedStackTraceIndex @ 0x1402ED6AC
 * Callers:
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x14016BDB0 (ExpInitializeResource.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpStdExtendUpperWatermark @ 0x1402ED588 (RtlpStdExtendUpperWatermark.c)
 */

__int64 __fastcall RtlpStdGetRecordedStackTraceIndex(KSPIN_LOCK *SpinLock, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  KSPIN_LOCK *v7; // rsi
  void *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  unsigned __int8 v11; // di
  struct _KPRCB *CurrentPrcb; // rcx

  LOWORD(v2) = a2[7];
  v5 = 0;
  if ( (_WORD)v2 )
  {
    v6 = a2 + 8;
    v2 = (unsigned __int16)v2;
    do
    {
      v5 += *v6;
      v6 += 2;
      --v2;
    }
    while ( v2 );
  }
  v7 = &SpinLock[3 * (v5 % *((_DWORD *)SpinLock + 180))];
  *((_BYTE *)v7 + 744) = KeAcquireSpinLockRaiseToDpc(v7 + 92);
  if ( *(_DWORD *)(a2 + 5) )
  {
    LODWORD(v10) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v9 = (_QWORD *)RtlpStdExtendUpperWatermark(SpinLock, v8);
    if ( v9 )
    {
      *v9 = a2;
      v10 = (__int64)(SpinLock[23] - (_QWORD)v9) >> 3;
      a2[6] = v10;
      a2[5] = WORD1(v10);
    }
    else
    {
      LODWORD(v10) = 0;
    }
  }
  v11 = *((_BYTE *)v7 + 744);
  KxReleaseSpinLock(v7 + 92);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v11);
  return (unsigned int)v10;
}
