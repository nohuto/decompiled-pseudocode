/*
 * XREFs of ?IncrementExpectedStopCount@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180162F2C
 * Callers:
 *     ?Split@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x180164538 (-Split@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ?Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x1801CB720 (-Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18010B090 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 */

void __fastcall wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::IncrementExpectedStopCount(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v2 = SRWLock;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
