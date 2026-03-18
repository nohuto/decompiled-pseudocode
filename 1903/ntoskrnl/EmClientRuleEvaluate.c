/*
 * XREFs of EmClientRuleEvaluate @ 0x140595590
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1402F9BA4 (PopPepInitializeVetoMasks.c)
 *     PoRegisterPowerSettingCallback @ 0x14069FF90 (PoRegisterPowerSettingCallback.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140A090F4 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     EmpEvaluateTargetRule @ 0x140095D68 (EmpEvaluateTargetRule.c)
 *     EmpSearchTargetRuleList @ 0x140097508 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x14009752C (EmpSearchRuleDatabase.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     EmpAcquirePagingReference @ 0x140595698 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140595708 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
      v9 = EmpSearchRuleDatabase(a1);
      if ( v9 && (v10 = EmpSearchTargetRuleList((__int64)v9)) != 0LL )
      {
        if ( a3 == *(_DWORD *)(v11 + 48) )
          *a4 = EmpEvaluateTargetRule((__int64)v10, a2, a3);
        else
          v4 = -1073741811;
      }
      else
      {
        v4 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
      KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
      EmpReleasePagingReference();
    }
    else
    {
      return (unsigned int)-1073741818;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
