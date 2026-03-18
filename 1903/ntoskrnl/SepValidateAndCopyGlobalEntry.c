/*
 * XREFs of SepValidateAndCopyGlobalEntry @ 0x14031E9AC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140092EE0 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000A420 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14008573C (SepGetSingletonEntryFromIndexNumber.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x14031E6F4 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateAndCopyGlobalEntry(__int64 a1, _QWORD *a2)
{
  int ProcUniqueLuidAndIndexFromAttributeInfo; // edi
  _DWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  __int64 SingletonEntryFromIndexNumber; // rbp
  KIRQL v9; // si
  struct _KPRCB *v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(a1, &v15, &v16);
  if ( ProcUniqueLuidAndIndexFromAttributeInfo >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74416553u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0;
      PoolWithTag[6] = 0;
      v6 = PoolWithTag + 2;
      v7 = v15;
      v6[1] = v6;
      *v6 = v6;
      v5[5] = v5 + 4;
      v5[4] = v5 + 4;
      SingletonEntryFromIndexNumber = SepGetSingletonEntryFromIndexNumber(v7);
      v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
      if ( *(_QWORD *)(SingletonEntryFromIndexNumber + 8) == v16 )
      {
        v11 = *(_QWORD *)(SingletonEntryFromIndexNumber + 16);
        if ( v11 )
        {
          v12 = AuthzBasepDuplicateSecurityAttributes(v11, (__int64)v5, 0);
          *a2 = v5;
          ProcUniqueLuidAndIndexFromAttributeInfo = v12;
          v5 = 0LL;
        }
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          v10 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v10);
        }
        ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
      }
      __writecr8(v9);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x74416553u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)ProcUniqueLuidAndIndexFromAttributeInfo;
}
