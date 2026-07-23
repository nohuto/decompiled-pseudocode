/*
 * XREFs of ExpCheckForWorker @ 0x14031D2D4
 * Callers:
 *     ExpFreePoolChecks @ 0x14009D6BC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     PsGetNextPartition @ 0x140120058 (PsGetNextPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

_QWORD *__fastcall ExpCheckForWorker(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // r12
  void *i; // rcx
  _QWORD *result; // rax
  _QWORD *v6; // rbx
  unsigned __int16 j; // si
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rdi
  unsigned __int8 CurrentIrql; // bp
  volatile signed __int32 **v13; // rdx
  int k; // ecx
  volatile signed __int32 *m; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  BugCheckParameter4 = BugCheckParameter3 + a2;
  for ( i = 0LL; ; i = v6 )
  {
    result = PsGetNextPartition(i);
    v6 = result;
    if ( !result )
      break;
    if ( result != PspSystemPartition || result[2] )
    {
      for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
      {
        v8 = 0LL;
        v9 = KeNodeBlock[j];
        if ( (_UNKNOWN *)v9 == (_UNKNOWN *)((char *)&KiNodeInit + 384 * j) )
          v9 = 0LL;
        do
        {
          v10 = *(unsigned __int16 *)(v9 + 146);
          v11 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(v6[2] + 8LL) + 8 * v10) + v8);
          if ( ((unsigned __int8)v11 & 1) == 0 && v11 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            KiAcquireKobjectLockSafe(v11, v10, 1LL);
            v13 = (volatile signed __int32 **)(v11 + 6);
            for ( k = 0; k < 32; ++k )
            {
              for ( m = *v13; m != &v11[4 * k + 6]; m = *(volatile signed __int32 **)m )
              {
                if ( (unsigned __int64)m >= BugCheckParameter3 && (unsigned __int64)m < BugCheckParameter4 )
                  KeBugCheckEx(0xE4u, 0LL, (ULONG_PTR)m, BugCheckParameter3, BugCheckParameter4);
              }
              v13 += 2;
            }
            _InterlockedAnd(v11, 0xFFFFFF7F);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(CurrentIrql);
          }
          v8 += 8LL;
        }
        while ( v8 < 64 );
      }
    }
  }
  return result;
}
