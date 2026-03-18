/*
 * XREFs of zzzEndDeferWinEventNotify @ 0x1C0028B0C
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C0008660 (xxxDwmStopRedirection.c)
 *     zzzEnableDwmPointerSupport @ 0x1C000A9EC (zzzEnableDwmPointerSupport.c)
 *     zzzCancelJournalling @ 0x1C000BD40 (zzzCancelJournalling.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     zzzReattachThreads @ 0x1C00586B4 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0058A44 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0059870 (zzzLockWindowUpdate2.c)
 *     xxxCapture @ 0x1C00605D8 (xxxCapture.c)
 *     xxxCreateCaret @ 0x1C0063BA8 (xxxCreateCaret.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     NtUserSetImeOwnerWindow @ 0x1C0070A70 (NtUserSetImeOwnerWindow.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxCreateWindowStation @ 0x1C00B437C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E7FA8 (zzzUpdateWindowsAfterModeChange.c)
 *     EditionEndDeferWinEventNotify @ 0x1C0103320 (EditionEndDeferWinEventNotify.c)
 *     zzzShowCursor @ 0x1C010BEA4 (zzzShowCursor.c)
 *     xxxAddShadow @ 0x1C0119F60 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C011A754 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxHardErrorControl @ 0x1C01FE504 (xxxHardErrorControl.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C0028C98 (xxxFlushDeferredWindowEvents.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void zzzEndDeferWinEventNotify()
{
  unsigned int DLT; // eax
  __int64 v1; // rcx
  tagObjLock *DomainLockRef; // rbx
  unsigned int v3; // eax
  __int64 v4; // rcx
  tagObjLock *v5; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  tagObjLock *v11; // rbp
  unsigned int v12; // eax
  __int64 v13; // rcx
  tagObjLock *v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  tagObjLock *v18; // rsi
  unsigned int v19; // eax

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  if ( DomainLockRef == (tagObjLock *)gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
  tagObjLock::LockExclusive(DomainLockRef);
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
  {
    v3 = DLT_WINEVENT::getDLT();
    v5 = (tagObjLock *)GetDomainLockRef(v3);
    if ( v5 == (tagObjLock *)gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    tagObjLock::UnLock(v5);
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v10 = *ThreadWin32Thread;
        if ( v10 )
        {
          v11 = (tagObjLock *)(v10 + 384);
          v12 = DLT_THREADINFO::getDLT();
          v14 = (tagObjLock *)GetDomainLockRef(v12);
          if ( v11 == (tagObjLock *)gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
          v15 = DLT_THREADINFO::getDLT();
          ptiSetDomainLockBit(v15);
          tagObjLock::LockShared(v14);
          tagObjLock::LockExclusive(v11);
          v16 = DLT_WINEVENT::getDLT();
          v18 = (tagObjLock *)GetDomainLockRef(v16);
          if ( v18 == (tagObjLock *)gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
          tagObjLock::LockExclusive(v18);
          xxxFlushDeferredWindowEvents();
          tagObjLock::UnLock(v18);
          v19 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v19);
          tagObjLock::UnLock(v11);
          tagObjLock::UnLock(v14);
        }
      }
    }
    tagObjLock::LockExclusive(v5);
  }
  tagObjLock::UnLock(DomainLockRef);
}
