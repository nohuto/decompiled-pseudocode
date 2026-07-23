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

__int64 __fastcall KeIntSteerSnapPerf(_DWORD *a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rax
  LONGLONG v5; // rbx
  LARGE_INTEGER v6; // rsi
  __int64 MHz; // rdi
  __int64 result; // rax
  __int64 v9; // r13
  KIRQL v10; // al
  ULONG_PTR *v11; // r11
  KIRQL v12; // r14
  ULONG_PTR *v13; // r10
  ULONG_PTR v14; // rdi
  ULONG_PTR *v15; // r12
  unsigned int v16; // ecx
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // r8
  __int64 *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // zf
  ULONG_PTR v24; // rcx
  __int64 v25; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-48h] BYREF
  KIRQL v28; // [rsp+80h] [rbp+18h]
  __int64 v29; // [rsp+88h] [rbp+20h]

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap;
  v6 = InterruptTimePrecise;
  MHz = KeGetCurrentPrcb()->MHz;
  v29 = MHz;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap) >= 0x16E360 )
  {
    KiIntSteerPreviousPerfSnap = InterruptTimePrecise.QuadPart;
    v9 = 0LL;
    v10 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    v11 = (ULONG_PTR *)KiIntTrackRootList;
    v28 = v10;
    v12 = v10;
    if ( (ULONG_PTR *)KiIntTrackRootList != &KiIntTrackRootList )
    {
      do
      {
        v13 = (ULONG_PTR *)v11[2];
        v14 = 0LL;
        if ( v13 != v11 + 2 )
        {
          do
          {
            v15 = (ULONG_PTR *)*v13;
            if ( *(ULONG_PTR **)(*v13 + 8) != v13 || *(ULONG_PTR **)v13[1] != v13 )
              __fastfail(3u);
            v16 = *((_DWORD *)v13 + 6);
            v17 = 0LL;
            v18 = 0LL;
            if ( v16 )
            {
              v19 = (__int64 *)v13[4];
              v20 = v16;
              do
              {
                v21 = *v19++;
                v18 += *(_QWORD *)(v21 + 176);
                v17 += *(_QWORD *)(v21 + 200);
                --v20;
              }
              while ( v20 );
            }
            v22 = v18 - v13[5];
            v23 = v18 == v13[5];
            v13[5] = v18;
            v24 = v14 + v22;
            if ( v22 < 0 || v23 )
              v24 = v14;
            v25 = v17 - v13[6];
            v13[6] = v17;
            v13 = v15;
            v14 = v25 + v24;
            if ( v25 <= 0 )
              v14 = v24;
          }
          while ( v15 != v11 + 2 );
        }
        v11[24] = v14;
        v9 += v14;
        v11 = (ULONG_PTR *)*v11;
      }
      while ( v11 != &KiIntTrackRootList );
      MHz = v29;
      v12 = v28;
    }
    KxReleaseSpinLock(&KiIntTrackSpinlock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v12);
    KiIntSteerLoadPercent = 10000 * v9 / (unsigned __int64)(v5 * MHz);
  }
  *a1 = KiIntSteerLoadPercent;
  result = 0LL;
  *a2 = v6;
  return result;
}
