/*
 * XREFs of EmClientQueryRuleState @ 0x1405663B0
 * Callers:
 *     PopFilterCapabilities @ 0x1405B1968 (PopFilterCapabilities.c)
 *     PoInitHiberServices @ 0x140746E80 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 *     PopDirectedDripsQueryEmSettings @ 0x1408697D4 (PopDirectedDripsQueryEmSettings.c)
 *     PopReadErrataDisablePrimaryDeviceFastResume @ 0x1409AC034 (PopReadErrataDisablePrimaryDeviceFastResume.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     KeInitializeClock @ 0x1409D9C58 (KeInitializeClock.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x1409DFF6C (PopHiberEvaluateSkippingMemoryMapValidation.c)
 * Callees:
 *     EmpSearchTargetRuleList @ 0x1400106FC (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x140010720 (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x140010758 (EmpUpdateRuleState.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     EmpAcquirePagingReference @ 0x1405665A8 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140566618 (EmpReleasePagingReference.c)
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
    if ( (unsigned __int8)EmpAcquirePagingReference() )
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
