/*
 * XREFs of InitializeGre @ 0x1C0266238
 * Callers:
 *     DriverEntry @ 0x1C0263740 (DriverEntry.c)
 * Callees:
 *     GreCreateSemaphore @ 0x1C0010710 (GreCreateSemaphore.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0027430 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C002A944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     HmgCreate @ 0x1C008E07C (HmgCreate.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C0096BB0 (-Initialize@SfmState@@QEAAHXZ.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C00A6E40 (GreCreateSemaphoreNonTracked.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C00A73C4 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     bLockEtwEnabled @ 0x1C00A7AC0 (bLockEtwEnabled.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x1C00A7BF4 (-bUseActualGDIScale@@YAHXZ.c)
 *     ?UMPDAllowPrinterSurfaceInDisplayDC@@YAHXZ @ 0x1C00BBE34 (-UMPDAllowPrinterSurfaceInDisplayDC@@YAHXZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C0120998 (-InitializeDefaultDCAttributes@@YAXXZ.c)
 *     GreCreateRectRgn @ 0x1C012F350 (GreCreateRectRgn.c)
 *     bInitBRUSHOBJ @ 0x1C0263128 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C0265474 (bInitBMOBJ.c)
 *     bInitICM @ 0x1C02654C8 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C02657B0 (bInitPALOBJ.c)
 *     vInitXLATE @ 0x1C0265A70 (vInitXLATE.c)
 */

char InitializeGre()
{
  PULONG BitMapBuffer; // [rsp+E0h] [rbp+67h] BYREF
  void *v2; // [rsp+E8h] [rbp+6Fh] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+F0h] [rbp+77h] BYREF
  _QWORD *v4; // [rsp+F8h] [rbp+7Fh] BYREF

  G_fConsole = gbRemoteSession == 0;
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  gAllowPrinterSurfaceInDisplayDC = UMPDAllowPrinterSurfaceInDisplayDC();
  if ( _InterlockedDecrement(&CountInit) )
    return 1;
  InitializeDefaultDCAttributes();
  RtlGetSuiteMask();
  qword_1C0215748 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  MultiUserEngAllocListLock = (HSEMAPHORE)GreCreateSemaphoreNonTracked();
  if ( MultiUserEngAllocListLock )
  {
    if ( (int)IsVerifierInitializationSupported() >= 0 )
      VerifierInitialization();
    qword_1C0215738 = (__int64)&GreEngLoadModuleAllocList;
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
          GetNineGridRenderingData(&v2, &BitMapBuffer, &BitMapHeader, &v4);
          memset(v2, 0, 0x200uLL);
          *(_QWORD *)BitMapBuffer = 0LL;
          RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
          *v4 = 0LL;
        }
        GreCreateSemaphore();
      }
    }
  }
  return 0;
}
