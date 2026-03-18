/*
 * XREFs of InitializeGre @ 0x1C0266080
 * Callers:
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0026F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0029D08 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreCreateSemaphoreInternal @ 0x1C0056C14 (GreCreateSemaphoreInternal.c)
 *     HmgCreate @ 0x1C005D050 (HmgCreate.c)
 *     ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C00A76F0 (-InitializeDefaultDCAttributes@@YAXXZ.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C00A7CB8 (GreCreateSemaphoreNonTracked.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C00A8244 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C00A867C (-Initialize@SfmState@@QEAAHXZ.c)
 *     bLockEtwEnabled @ 0x1C00A88B0 (bLockEtwEnabled.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x1C00A89AC (-bUseActualGDIScale@@YAHXZ.c)
 *     GreCreateRectRgn @ 0x1C00AE1D0 (GreCreateRectRgn.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     bInitBMOBJ @ 0x1C0268670 (bInitBMOBJ.c)
 *     bInitICM @ 0x1C0268710 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C0268990 (bInitPALOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C0268CF8 (bInitBRUSHOBJ.c)
 *     vInitXLATE @ 0x1C026913C (vInitXLATE.c)
 */

char InitializeGre()
{
  HRGN RectRgn; // rax
  SfmState *v1; // rcx
  _QWORD v3[4]; // [rsp+30h] [rbp-49h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-29h] BYREF
  __int64 v5; // [rsp+88h] [rbp+Fh]
  int v6; // [rsp+90h] [rbp+17h]
  __int64 v7; // [rsp+98h] [rbp+1Fh]
  PULONG BitMapBuffer; // [rsp+E0h] [rbp+67h] BYREF
  void *v9; // [rsp+E8h] [rbp+6Fh] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+F0h] [rbp+77h] BYREF
  _QWORD *v11; // [rsp+F8h] [rbp+7Fh] BYREF

  G_fConsole = gbRemoteSession == 0;
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  if ( _InterlockedDecrement(&CountInit) )
    return 1;
  InitializeDefaultDCAttributes();
  RtlGetSuiteMask();
  qword_1C0218748 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  MultiUserEngAllocListLock = (HSEMAPHORE)GreCreateSemaphoreNonTracked();
  if ( MultiUserEngAllocListLock )
  {
    if ( (int)IsVerifierInitializationSupported() >= 0 )
      VerifierInitialization();
    qword_1C0218738 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocListLock = GreCreateSemaphoreNonTracked();
    if ( GreEngLoadModuleAllocListLock )
    {
      if ( (int)IsInitializeGdiCrossSessionGlobalsSupported() < 0 || (unsigned int)InitializeGdiCrossSessionGlobals() )
      {
        gbLockEtw = bLockEtwEnabled();
        gbDisableTrappedAcRendering = 0;
        if ( (unsigned int)HmgCreate() )
        {
          REGION::ulUniqueREGION = 1;
          if ( (int)IsNineGridRenderingSupported() >= 0 )
          {
            GetNineGridRenderingData(&v9, &BitMapBuffer, &BitMapHeader, &v11);
            memset(v9, 0, 0x200uLL);
            *(_QWORD *)BitMapBuffer = 0LL;
            RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
            *v11 = 0LL;
          }
          ghsemDriverMgmt = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
          if ( ghsemDriverMgmt )
          {
            PATHALLOC::hsemFreelist = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
            if ( PATHALLOC::hsemFreelist )
            {
              PATHALLOC::freelist = 0LL;
              PATHALLOC::cFree = 0;
              PATHALLOC::cAllocated = 0;
              ghsemRFONTList = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
              if ( ghsemRFONTList )
              {
                ghsemCLISERV = GreCreateSemaphoreInternal(0);
                if ( ghsemCLISERV )
                {
                  ghsemAtmfdInit = GreCreateSemaphoreInternal(0);
                  if ( ghsemAtmfdInit )
                  {
                    ghsemWndobj = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                    if ( ghsemWndobj )
                    {
                      ghsemFntCache = GreCreateSemaphoreInternal(0);
                      if ( ghsemFntCache )
                      {
                        ghsemDwmState = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                        if ( ghsemDwmState )
                        {
                          ghsemDynamicModeChange = (PERESOURCE)GreCreateSemaphoreInternal(0);
                          if ( ghsemDynamicModeChange )
                          {
                            ghsemDCVisRgn = (PERESOURCE)GreCreateSemaphoreInternal(0);
                            if ( ghsemDCVisRgn )
                            {
                              ghsemVisRgnUniqueness = (PERESOURCE)GreCreateSemaphoreInternal(0);
                              if ( ghsemVisRgnUniqueness )
                              {
                                ghsemVisRgnPublish = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                if ( ghsemVisRgnPublish )
                                {
                                  ghsemSprite = (PERESOURCE)GreCreateSemaphoreInternal(0);
                                  if ( ghsemSprite )
                                  {
                                    ghsemMapRot = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                    if ( ghsemMapRot )
                                    {
                                      ghsemGreLock = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                      if ( ghsemGreLock )
                                      {
                                        ghsemHT = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                        if ( ghsemHT )
                                        {
                                          RectRgn = (HRGN)GreCreateRectRgn(0, 0, 0, 0);
                                          hrgnDefault = RectRgn;
                                          if ( RectRgn )
                                          {
                                            RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v3, RectRgn, 1);
                                            if ( v3[0] )
                                            {
                                              prgnDefault = (struct REGION *)v3[0];
                                              RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v3);
                                              if ( (unsigned int)bInitPALOBJ() )
                                              {
                                                vInitXLATE();
                                                if ( (unsigned int)bInitBMOBJ() )
                                                {
                                                  if ( (unsigned int)bInitBRUSHOBJ()
                                                    && (unsigned int)bInitICM()
                                                    && ((int)IsEnableHalftoneSupported() < 0
                                                     || (unsigned int)EnableHalftone())
                                                    && ((int)IsbInitRedirDevSupported() < 0
                                                     || (unsigned int)bInitRedirDev()) )
                                                  {
                                                    if ( (int)IsvInitFontsDirectoryNameInformationSupported() >= 0 )
                                                      vInitFontsDirectoryNameInformation();
                                                    if ( (unsigned int)SfmState::Initialize(v1) )
                                                    {
                                                      QueryTable.Flags = 0;
                                                      QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
                                                      memset(&QueryTable.Name, 0, 20);
                                                      QueryTable.DefaultData = 0LL;
                                                      QueryTable.DefaultLength = 0;
                                                      v5 = 0LL;
                                                      v6 = 0;
                                                      v7 = 0LL;
                                                      *((_DWORD *)gpGdiSharedMemory + 393253) = 0;
                                                      RtlQueryRegistryValues(
                                                        0x80000003,
                                                        L"LanguagePack",
                                                        &QueryTable,
                                                        0LL,
                                                        0LL);
                                                      *((_DWORD *)gpGdiSharedMemory + 393254) = 1;
                                                      gbUseActualGDIScale = bUseActualGDIScale();
                                                      return 1;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            else
                                            {
                                              RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v3);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
