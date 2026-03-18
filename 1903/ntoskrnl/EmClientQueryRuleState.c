/*
 * XREFs of EmClientQueryRuleState @ 0x1405957C0
 * Callers:
 *     PopDirectedDripsQueryEmPS4DisableSetting @ 0x1405B1B5C (PopDirectedDripsQueryEmPS4DisableSetting.c)
 *     PopFilterCapabilities @ 0x1406A2194 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 *     PopDirectedDripsQueryEmSettings @ 0x1408A48C8 (PopDirectedDripsQueryEmSettings.c)
 *     KeInitializeClock @ 0x1409FCAA0 (KeInitializeClock.c)
 *     PopReadErrataDisablePrimaryDeviceFastResume @ 0x140A090B4 (PopReadErrataDisablePrimaryDeviceFastResume.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A09160 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140A091FC (PopEvaluateInputSuppressionRequired.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140A09228 (PopReadErrataForIncorrectLidNotification.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     EmpSearchTargetRuleList @ 0x140097508 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x14009752C (EmpSearchRuleDatabase.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     EmpUpdateRuleState @ 0x1400EE410 (EmpUpdateRuleState.c)
 *     EmpAcquirePagingReference @ 0x140595698 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140595708 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // r14
  volatile signed __int32 *v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbp

  v2 = 0;
  if ( a1 && a2 )
  {
    *a2 = 1;
    if ( EmpAcquirePagingReference() )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
      v5 = EmpSearchRuleDatabase(a1);
      v6 = v5;
      if ( v5 && (v7 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v5), (v9 = v7) != 0LL) )
      {
        _InterlockedIncrement(v7);
        EmpUpdateRuleState(v8, 0LL);
        _InterlockedAdd(v9, 0xFFFFFFFF);
        *a2 = *((_DWORD *)v6 + 4);
      }
      else
      {
        v2 = -1073741275;
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
  return v2;
}
