/*
 * XREFs of ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180013700
 * Callers:
 *     ?Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180012434 (-Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180012510 (-StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800125EC (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x1800126C4 (-Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800131D0 (-StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180013630 (-Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180065A40 (-StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180084360 (-StopActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180085730 (-StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180431190 (-StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180431540 (-StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1804318F0 (-StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180431CA0 (-StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  PSRWLOCK *p_SRWLock; // rax
  char v4; // bl
  PSRWLOCK v5; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v5) = 0;
  v2 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v2 )
  {
    v2 += 31;
    AcquireSRWLockExclusive(v2);
    p_SRWLock = &SRWLock;
    v4 = 1;
  }
  else
  {
    p_SRWLock = &v5;
    v4 = 2;
  }
  *p_SRWLock = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
  }
  if ( (v4 & 1) != 0 && SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
