/*
 * XREFs of KeCheckForTimer @ 0x1402A6AB8
 * Callers:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x1400F5C08 (ExpFreePoolChecks.c)
 *     VerifierKeInitializeTimerEx @ 0x1409781C0 (VerifierKeInitializeTimerEx.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

ULONG __fastcall KeCheckForTimer(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG result; // eax
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG v5; // r15d
  __int64 *v6; // r12
  volatile signed __int32 *v7; // rdi
  _QWORD **v8; // r14
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  _QWORD *v15; // r9
  ULONG_PTR v16; // r10
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // r8
  ULONG_PTR v19; // r8
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  int v22; // eax
  struct _KPRCB *v23; // rcx
  ULONG v24; // [rsp+30h] [rbp-48h]
  unsigned int v25; // [rsp+90h] [rbp+18h]
  int v26; // [rsp+98h] [rbp+20h] BYREF

  result = KeTimerCheckFlags;
  if ( (KeTimerCheckFlags & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 + a2;
    result = KeQueryActiveProcessorCountEx(0xFFFFu);
    v5 = 0;
    v24 = result;
    if ( result )
    {
      v6 = KiProcessorBlock;
      do
      {
        v25 = 0;
        v7 = (volatile signed __int32 *)(*v6 + 14464);
        v8 = (_QWORD **)(*v6 + 14472);
        do
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = 0;
          while ( 1 )
          {
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v12 = SchedulerAssist[5];
                SchedulerAssist[5] = v12 + 1;
                if ( v12 == -1 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            if ( !_interlockedbittestandset64(v7, 0LL) )
              break;
            v13 = CurrentPrcb->SchedulerAssist;
            if ( v13 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v14 = v13[5] - 1;
                v13[5] = v14;
                if ( !v14 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            do
              KeYieldProcessorEx(&v26);
            while ( *(_QWORD *)v7 );
          }
          v15 = *v8;
          if ( *v8 != v8 )
          {
            v16 = BugCheckParameter3 - 64;
            do
            {
              v17 = (ULONG_PTR)(v15 - 4);
              v15 = (_QWORD *)*v15;
              if ( v17 > v16 && v17 < BugCheckParameter4 )
                KeBugCheckEx(0xC7u, 0LL, v17, BugCheckParameter3, BugCheckParameter4);
              v18 = KiWaitAlways ^ _byteswap_uint64(v17 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v17 + 48), KiWaitNever));
              if ( v18 )
              {
                if ( v18 > v16 && v18 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 1uLL, v18, BugCheckParameter3, BugCheckParameter4);
                v19 = *(_QWORD *)(v18 + 24);
                if ( v19 >= BugCheckParameter3 && v19 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 2uLL, v19, BugCheckParameter3, BugCheckParameter4);
              }
            }
            while ( v15 != v8 );
          }
          _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          if ( v21 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v22 = v21[5] - 1;
              v21[5] = v22;
              if ( !v22 )
                KiRemoveSystemWorkPriorityKick((__int64)v20);
            }
          }
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            v23 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v23);
          }
          result = CurrentIrql;
          __writecr8(CurrentIrql);
          v8 += 4;
          v7 += 8;
          ++v25;
        }
        while ( v25 < 0x100 );
        ++v5;
        ++v6;
      }
      while ( v5 < v24 );
    }
  }
  return result;
}
