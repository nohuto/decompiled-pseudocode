/*
 * XREFs of KiClearPriorityFloor @ 0x14011F7AC
 * Callers:
 *     KiAbThreadUnboostCpuPriority @ 0x14011F5C8 (KiAbThreadUnboostCpuPriority.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

char __fastcall KiClearPriorityFloor(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, char a4)
{
  char v5; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  char v10; // al
  unsigned int v11; // eax
  char v12; // dl
  unsigned __int8 v13; // cl
  char v14; // cl
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v19; // [rsp+60h] [rbp+18h] BYREF

  v5 = a3;
  if ( !a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v19 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v16 = SchedulerAssist[5];
          SchedulerAssist[5] = v16 + 1;
          if ( v16 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v15 = CurrentPrcb->SchedulerAssist;
      if ( v15 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v17 = v15[5] - 1;
          v15[5] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v19, a2, a3);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
  }
  v10 = *(_BYTE *)(v5 + BugCheckParameter1 + 1392);
  if ( !v10 )
    KeBugCheckEx(0x157u, BugCheckParameter1, v5, 2uLL, 0LL);
  LOBYTE(v11) = v10 - 1;
  *(_BYTE *)(v5 + BugCheckParameter1 + 1392) = v11;
  if ( !(_BYTE)v11 )
  {
    v11 = *(_DWORD *)(BugCheckParameter1 + 1408) ^ (1 << v5);
    *(_DWORD *)(BugCheckParameter1 + 1408) = v11;
    if ( v11 < 1 << v5 )
    {
      v12 = *(_BYTE *)(BugCheckParameter1 + 195);
      if ( v12 < 16 )
      {
        v13 = *(_BYTE *)(BugCheckParameter1 + 564);
        LOBYTE(v11) = v13 & 0xF;
        v14 = *(_BYTE *)(BugCheckParameter1 + 563) + (v13 & 0xF) + (v13 >> 4);
        if ( v14 < v12 )
          LOBYTE(v11) = KiSetPriorityThread(BugCheckParameter1, a2, v14);
      }
    }
  }
  if ( !a4 )
    LOBYTE(v11) = KiReleaseThreadLockSafe(BugCheckParameter1);
  return v11;
}
