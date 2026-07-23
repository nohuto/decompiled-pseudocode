/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011D770
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011D924 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011DE40 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140145DE0 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1401465E0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     SmFpAllocate @ 0x14014BB74 (SmFpAllocate.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // r15
  __int64 v5; // rbp
  __int64 Context; // r14
  LONG result; // eax
  unsigned __int64 *v8; // rdi
  KIRQL v9; // al
  __int64 *v10; // rdx
  KIRQL v11; // bl
  __int64 *v12; // rsi
  __int64 v13; // rbx
  unsigned int Issue; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(KSPIN_LOCK **)a1;
  v5 = *(_QWORD *)a1 + 6472LL;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12LL, a3);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(v3);
  *(_DWORD *)(a1 + 32) = Context == 0 ? 0xC000009A : 0;
  result = KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = v3 + 813;
    Object[1] = v3 + 810;
    do
    {
      while ( 1 )
      {
        result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( result )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v8 = v3 + 816;
        while ( 1 )
        {
          v9 = KeAcquireSpinLockRaiseToDpc(v3 + 818);
          v10 = *(__int64 **)(v5 + 64);
          v11 = v9;
          if ( v10 == (__int64 *)v8 )
          {
            v12 = 0LL;
          }
          else
          {
            v12 = (__int64 *)*v8;
            *v8 = *(_QWORD *)*v8 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v12 == v10 )
            {
              *v8 = 0LL;
              *(_QWORD *)(v5 + 64) = v5 + 56;
            }
            else
            {
              *v10 = *v10 & 7 | (8 * (((unsigned __int64)*v10 >> 3) - 1));
            }
          }
          KxReleaseSpinLock(v3 + 818);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(v11);
          if ( !v12 )
            break;
          v13 = SmFpAllocate(&dword_14055C480, 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(v3, v12, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(v3, v12, Issue);
          SmFpFree(&dword_14055C480, 3LL, v3 + 809, v13);
        }
      }
    }
    while ( result != 1 );
  }
  if ( Context )
    return ST_STORE<SM_TRAITS>::StReleaseReadContext(v3, Context);
  return result;
}
