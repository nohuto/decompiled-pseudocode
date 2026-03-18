/*
 * XREFs of InitializeGre @ 0x1C021A080
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     ?bUseActualGDIScale@@YAHXZ @ 0x1C0004D00 (-bUseActualGDIScale@@YAHXZ.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C0004DA0 (-Initialize@SfmState@@QEAAHXZ.c)
 *     GreCreateRectRgn @ 0x1C0004F50 (GreCreateRectRgn.c)
 *     HmgCreate @ 0x1C0005068 (HmgCreate.c)
 *     bLockEtwEnabled @ 0x1C000548C (bLockEtwEnabled.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C0005538 (GreCreateSemaphoreNonTracked.c)
 *     ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C0005588 (-InitializeDefaultDCAttributes@@YAXXZ.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C00056F0 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreCreateSemaphoreInternal @ 0x1C002BF30 (GreCreateSemaphoreInternal.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     bInitICM @ 0x1C021A500 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C021A780 (bInitBMOBJ.c)
 *     vInitXLATE @ 0x1C021A824 (vInitXLATE.c)
 *     bInitPALOBJ @ 0x1C021A8AC (bInitPALOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C021AC18 (bInitBRUSHOBJ.c)
 */

char InitializeGre()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  G_fConsole = gbRemoteSession == 0;
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  if ( _InterlockedDecrement(&CountInit) )
    return 1;
  InitializeDefaultDCAttributes();
  RtlGetSuiteMask(v1, v0, v2);
  qword_1C01D0AC0 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  MultiUserEngAllocListLock = (HSEMAPHORE)GreCreateSemaphoreNonTracked();
  if ( MultiUserEngAllocListLock )
  {
    if ( (int)IsVerifierInitializationSupported() >= 0 )
      VerifierInitialization();
    qword_1C01D0AB0 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocListLock = GreCreateSemaphoreNonTracked();
    if ( GreEngLoadModuleAllocListLock
      && ((int)IsInitializeGdiCrossSessionGlobalsSupported() < 0 || (unsigned int)InitializeGdiCrossSessionGlobals()) )
    {
      gbLockEtw = bLockEtwEnabled();
      gbDisableTrappedAcRendering = 0;
      HmgCreate();
    }
  }
  return 0;
}
