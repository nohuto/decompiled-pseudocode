/*
 * XREFs of KeIntSteerSnapPerf @ 0x1400BE540
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1400BDBA0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(_DWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 InterruptTimePrecise; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 MHz; // rdi
  __int64 result; // rax
  __int64 v10; // r13
  KIRQL v11; // al
  ULONG_PTR *v12; // r11
  KIRQL v13; // r14
  ULONG_PTR *v14; // r10
  ULONG_PTR v15; // rdi
  ULONG_PTR *v16; // r12
  unsigned int v17; // ecx
  ULONG_PTR v18; // rdx
  ULONG_PTR v19; // r8
  __int64 *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // zf
  ULONG_PTR v25; // rcx
  __int64 v26; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  char v28[72]; // [rsp+20h] [rbp-48h] BYREF
  KIRQL v29; // [rsp+80h] [rbp+18h]
  __int64 v30; // [rsp+88h] [rbp+20h]

  InterruptTimePrecise = RtlGetInterruptTimePrecise(v28, a2, a3);
  v6 = InterruptTimePrecise - KiIntSteerPreviousPerfSnap;
  v7 = InterruptTimePrecise;
  MHz = KeGetCurrentPrcb()->MHz;
  v30 = MHz;
  if ( (unsigned __int64)(InterruptTimePrecise - KiIntSteerPreviousPerfSnap) >= 0x16E360 )
  {
    KiIntSteerPreviousPerfSnap = InterruptTimePrecise;
    v10 = 0LL;
    v11 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    v12 = (ULONG_PTR *)KiIntTrackRootList;
    v29 = v11;
    v13 = v11;
    if ( (ULONG_PTR *)KiIntTrackRootList != &KiIntTrackRootList )
    {
      do
      {
        v14 = (ULONG_PTR *)v12[2];
        v15 = 0LL;
        if ( v14 != v12 + 2 )
        {
          do
          {
            v16 = (ULONG_PTR *)*v14;
            if ( *(ULONG_PTR **)(*v14 + 8) != v14 || *(ULONG_PTR **)v14[1] != v14 )
              __fastfail(3u);
            v17 = *((_DWORD *)v14 + 6);
            v18 = 0LL;
            v19 = 0LL;
            if ( v17 )
            {
              v20 = (__int64 *)v14[4];
              v21 = v17;
              do
              {
                v22 = *v20++;
                v19 += *(_QWORD *)(v22 + 176);
                v18 += *(_QWORD *)(v22 + 200);
                --v21;
              }
              while ( v21 );
            }
            v23 = v19 - v14[5];
            v24 = v19 == v14[5];
            v14[5] = v19;
            v25 = v15 + v23;
            if ( v23 < 0 || v24 )
              v25 = v15;
            v26 = v18 - v14[6];
            v14[6] = v18;
            v14 = v16;
            v15 = v26 + v25;
            if ( v26 <= 0 )
              v15 = v25;
          }
          while ( v16 != v12 + 2 );
        }
        v12[24] = v15;
        v10 += v15;
        v12 = (ULONG_PTR *)*v12;
      }
      while ( v12 != &KiIntTrackRootList );
      MHz = v30;
      v13 = v29;
    }
    KxReleaseSpinLock(&KiIntTrackSpinlock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v13);
    KiIntSteerLoadPercent = 10000 * v10 / (unsigned __int64)(v6 * MHz);
  }
  *a1 = KiIntSteerLoadPercent;
  result = 0LL;
  *a2 = v7;
  return result;
}
