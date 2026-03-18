/*
 * XREFs of HmgCreate @ 0x1C0005068
 * Callers:
 *     InitializeGre @ 0x1C021A080 (InitializeGre.c)
 * Callees:
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C00012E0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1C0007F78 (-HmgrStacksInit@@YAXXZ.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     GreCreateSemaphore @ 0x1C002D3D0 (GreCreateSemaphore.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C0060B58 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0066B68 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C006CB3C (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     Win32CreateSection @ 0x1C006CD4C (Win32CreateSection.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C007F018 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x1C0093FEC (-InitializeReferenceTracker@@YA_NXZ.c)
 *     GreCreateFastMutex @ 0x1C009568C (GreCreateFastMutex.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     bLoadProcessHandleQuota @ 0x1C00F9758 (bLoadProcessHandleQuota.c)
 */

void __noreturn HmgCreate()
{
  gMaxGdiHandleCount = GetMaxGdiHandleCount();
  if ( !(unsigned int)bLoadProcessHandleQuota() )
    gProcessHandleQuota = 10000;
  GetgvsStateWrap();
  GreCreateSemaphore();
}
