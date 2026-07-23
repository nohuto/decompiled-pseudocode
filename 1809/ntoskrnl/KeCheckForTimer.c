/*
 * XREFs of KeCheckForTimer @ 0x140290528
 * Callers:
 *     ExpFreePoolChecks @ 0x14009D6BC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VerifierKeInitializeTimerEx @ 0x14093AB90 (VerifierKeInitializeTimerEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

ULONG __fastcall KeCheckForTimer(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG result; // eax
  ULONG_PTR BugCheckParameter4; // rbp
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  ULONG v7; // r15d
  __int64 *v8; // r12
  volatile signed __int32 *v9; // rdi
  _QWORD **v10; // r14
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  _QWORD *v17; // r9
  ULONG_PTR v18; // r10
  ULONG_PTR v19; // rdx
  struct _KPRCB *v20; // rcx
  int v21; // eax
  struct _KPRCB *v22; // rcx
  ULONG v23; // [rsp+30h] [rbp-48h]
  unsigned int v24; // [rsp+90h] [rbp+18h]
  int v25; // [rsp+98h] [rbp+20h] BYREF

  result = KeTimerCheckFlags;
  if ( (KeTimerCheckFlags & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 + a2;
    result = KeQueryActiveProcessorCountEx(0xFFFFu);
    v7 = 0;
    v23 = result;
    if ( result )
    {
      v8 = KiProcessorBlock;
      do
      {
        v24 = 0;
        v9 = (volatile signed __int32 *)(*v8 + 14464);
        v10 = (_QWORD **)(*v8 + 14472);
        do
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = 0;
          while ( 1 )
          {
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v14 = SchedulerAssist[5];
                SchedulerAssist[5] = v14 + 1;
                if ( v14 == -1 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            if ( !_interlockedbittestandset64(v9, 0LL) )
              break;
            v15 = CurrentPrcb->SchedulerAssist;
            if ( v15 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v16 = v15[5] - 1;
                v15[5] = v16;
                if ( !v16 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            do
              KeYieldProcessorEx(&v25, v5, v6);
            while ( *(_QWORD *)v9 );
          }
          v17 = *v10;
          if ( *v10 != v10 )
          {
            v18 = BugCheckParameter3 - 64;
            do
            {
              v19 = (ULONG_PTR)(v17 - 4);
              v17 = (_QWORD *)*v17;
              if ( v19 > v18 && v19 < BugCheckParameter4 )
                KeBugCheckEx(0xC7u, 0LL, v19, BugCheckParameter3, BugCheckParameter4);
              v6 = KiWaitAlways ^ _byteswap_uint64(v19 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v19 + 48), KiWaitNever));
              if ( v6 )
              {
                if ( v6 > v18 && v6 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 1uLL, v6, BugCheckParameter3, BugCheckParameter4);
                v6 = *(_QWORD *)(v6 + 24);
                if ( v6 >= BugCheckParameter3 && v6 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 2uLL, v6, BugCheckParameter3, BugCheckParameter4);
              }
            }
            while ( v17 != v10 );
          }
          _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
          v20 = KeGetCurrentPrcb();
          v5 = (__int64)v20->SchedulerAssist;
          if ( v5 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v21 = *(_DWORD *)(v5 + 20) - 1;
              *(_DWORD *)(v5 + 20) = v21;
              if ( !v21 )
                KiRemoveSystemWorkPriorityKick((__int64)v20);
            }
          }
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            v22 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v22);
          }
          result = CurrentIrql;
          __writecr8(CurrentIrql);
          v10 += 4;
          v9 += 8;
          ++v24;
        }
        while ( v24 < 0x100 );
        ++v7;
        ++v8;
      }
      while ( v7 < v23 );
    }
  }
  return result;
}
