/*
 * XREFs of ?zInternalStop@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18009B1A4
 * Callers:
 *     ?StopActivity@ShowFlyoutActivity@MeetNowTelemetry@@MEAAXXZ @ 0x18009AAC0 (-StopActivity@ShowFlyoutActivity@MeetNowTelemetry@@MEAAXXZ.c)
 *     ?Stop@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x1800ABF54 (-Stop@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger.c)
 *     ?Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z @ 0x1800B70A8 (-Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z.c)
 *     ?StopActivity@UpdateAppView@AppUsageTelemetry@@MEAAXXZ @ 0x1800B73D0 (-StopActivity@UpdateAppView@AppUsageTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@MEAAXXZ @ 0x180337490 (-StopActivity@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemet.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800985C8 (-LockExclusive@-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
