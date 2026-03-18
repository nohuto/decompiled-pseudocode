/*
 * XREFs of EmClientQueryRuleState @ 0x140595780
 * Callers:
 *     PopDirectedDripsQueryEmPS4DisableSetting @ 0x1405B1B70 (PopDirectedDripsQueryEmPS4DisableSetting.c)
 *     PopFilterCapabilities @ 0x14066EEE8 (PopFilterCapabilities.c)
 *     PoInitHiberServices @ 0x140759AFC (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x140759E1C (PopEnableHiberFile.c)
 *     PopDirectedDripsQueryEmSettings @ 0x1408A4108 (PopDirectedDripsQueryEmSettings.c)
 *     KeInitializeClock @ 0x1409FCFBC (KeInitializeClock.c)
 *     PopReadErrataDisablePrimaryDeviceFastResume @ 0x140A095E0 (PopReadErrataDisablePrimaryDeviceFastResume.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A0968C (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140A09728 (PopEvaluateInputSuppressionRequired.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140A09754 (PopReadErrataForIncorrectLidNotification.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     EmpSearchTargetRuleList @ 0x1400D4828 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400D484C (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x1400D4AB0 (EmpUpdateRuleState.c)
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
