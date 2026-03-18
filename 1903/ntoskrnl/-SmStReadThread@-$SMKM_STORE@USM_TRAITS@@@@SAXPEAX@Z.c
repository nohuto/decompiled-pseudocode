/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140105330
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140105508 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140105A50 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     SmFpAllocate @ 0x140148B24 (SmFpAllocate.c)
 *     SmFpFree @ 0x140149E64 (SmFpFree.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x1401623C0 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1401623EC (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  __int64 v3; // rbp
  __int64 Context; // r14
  LONG result; // eax
  unsigned __int64 *v6; // rdi
  KIRQL v7; // al
  __int64 *v8; // rdx
  KIRQL v9; // bl
  __int64 *v10; // rsi
  __int64 v11; // rbx
  unsigned int Issue; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(KSPIN_LOCK **)a1;
  v3 = *(_QWORD *)a1 + 6472LL;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12LL);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(v1);
  *(_DWORD *)(a1 + 32) = Context == 0 ? 0xC000009A : 0;
  result = KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = v1 + 813;
    Object[1] = v1 + 810;
    do
    {
      while ( 1 )
      {
        result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( result )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v6 = v1 + 816;
        while ( 1 )
        {
          v7 = KeAcquireSpinLockRaiseToDpc(v1 + 818);
          v8 = *(__int64 **)(v3 + 64);
          v9 = v7;
          if ( v8 == (__int64 *)v6 )
          {
            v10 = 0LL;
          }
          else
          {
            v10 = (__int64 *)*v6;
            *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v10 == v8 )
            {
              *v6 = 0LL;
              *(_QWORD *)(v3 + 64) = v3 + 56;
            }
            else
            {
              *v8 = *v8 & 7 | (8 * (((unsigned __int64)*v8 >> 3) - 1));
            }
          }
          KxReleaseSpinLock(v1 + 818);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(v9);
          if ( !v10 )
            break;
          v11 = SmFpAllocate(&dword_14058C480, 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(v1, v10, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(v1, v10, Issue);
          SmFpFree(&dword_14058C480, 3LL, v1 + 809, v11);
        }
      }
    }
    while ( result != 1 );
  }
  if ( Context )
    return ST_STORE<SM_TRAITS>::StReleaseReadContext(v1, Context);
  return result;
}
