/*
 * XREFs of InitializeGre @ 0x1C01F40E8
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0023E80 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C00242E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreCreateSemaphore @ 0x1C00348F0 (GreCreateSemaphore.c)
 *     ?UMPDAllowPrinterSurfaceInDisplayDC@@YAHXZ @ 0x1C0077260 (-UMPDAllowPrinterSurfaceInDisplayDC@@YAHXZ.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     HmgCreate @ 0x1C00C2B84 (HmgCreate.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C00CB610 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C00D77DC (-Initialize@SfmState@@QEAAHXZ.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C00D8DD8 (GreCreateSemaphoreNonTracked.c)
 *     bLockEtwEnabled @ 0x1C00D90F8 (bLockEtwEnabled.c)
 *     GreCreateRectRgn @ 0x1C00D9A90 (GreCreateRectRgn.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x1C00DB1E8 (-bUseActualGDIScale@@YAHXZ.c)
 *     bInitBRUSHOBJ @ 0x1C01F35BC (bInitBRUSHOBJ.c)
 *     bInitPALOBJ @ 0x1C01F3AA0 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1C01F3D5C (bInitBMOBJ.c)
 *     bInitICM @ 0x1C01F3DF8 (bInitICM.c)
 *     vInitXLATE @ 0x1C01F4060 (vInitXLATE.c)
 */

char InitializeGre()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  PULONG BitMapBuffer; // [rsp+E0h] [rbp+67h] BYREF
  void *v5; // [rsp+E8h] [rbp+6Fh] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+F0h] [rbp+77h] BYREF
  _QWORD *v7; // [rsp+F8h] [rbp+7Fh] BYREF

  G_fConsole = gbRemoteSession == 0;
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  gAllowPrinterSurfaceInDisplayDC = UMPDAllowPrinterSurfaceInDisplayDC();
  if ( _InterlockedDecrement(&CountInit) )
    return 1;
  RtlGetSuiteMask(v1, v0, v2);
  qword_1C01A11A0 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  MultiUserEngAllocListLock = (HSEMAPHORE)GreCreateSemaphoreNonTracked();
  if ( MultiUserEngAllocListLock )
  {
    if ( (int)IsVerifierInitializationSupported() >= 0 )
      VerifierInitialization();
    qword_1C01A5D88 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocListLock = GreCreateSemaphoreNonTracked();
    if ( GreEngLoadModuleAllocListLock
      && ((int)IsInitializeGdiCrossSessionGlobalsSupported() < 0 || (unsigned int)InitializeGdiCrossSessionGlobals()) )
    {
      gbLockEtw = bLockEtwEnabled();
      gbDisableTrappedAcRendering = 0;
      if ( (unsigned int)HmgCreate() )
      {
        REGION::ulUniqueREGION = 1;
        if ( (int)IsNineGridRenderingSupported() >= 0 )
        {
          GetNineGridRenderingData(&v5, &BitMapBuffer, &BitMapHeader, &v7);
          memset(v5, 0, 0x200uLL);
          *(_QWORD *)BitMapBuffer = 0LL;
          RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
          *v7 = 0LL;
        }
        GreCreateSemaphore();
      }
    }
  }
  return 0;
}
