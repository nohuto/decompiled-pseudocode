/*
 * XREFs of HmgCreate @ 0x1C00C2B84
 * Callers:
 *     InitializeGre @ 0x1C01F40E8 (InitializeGre.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002BA30 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C0034614 (GreCreateSemaphoreInternal.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     Win32CreateSection @ 0x1C0068E58 (Win32CreateSection.c)
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0077618 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C00C2610 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1C00C271C (-HmgrStacksInit@@YAXXZ.c)
 *     bLoadProcessHandleQuota @ 0x1C00C32FC (bLoadProcessHandleQuota.c)
 *     GreCreateFastMutex @ 0x1C00D8DA0 (GreCreateFastMutex.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x1C00DB7BC (-InitializeReferenceTracker@@YA_NXZ.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C016886C (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C0168904 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 */

__int64 HmgCreate()
{
  __int64 v0; // rbx
  __int64 v1; // r8
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 CurrentProcess; // rdi
  struct _ENTRY *v11; // rdx
  unsigned int v12; // ecx
  GdiHandleManager *v13; // rcx
  int v14; // ebx
  union _LARGE_INTEGER *v15; // rax
  void **v16; // rax
  unsigned __int8 **v17; // rax
  __int64 AllocationType; // [rsp+20h] [rbp-50h]
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+20h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+28h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+30h] BYREF
  int v26; // [rsp+A8h] [rbp+38h] BYREF
  int v27; // [rsp+ACh] [rbp+3Ch]

  gMaxGdiHandleCount = GetMaxGdiHandleCount();
  if ( !(unsigned int)bLoadProcessHandleQuota() )
    gProcessHandleQuota = 10000;
  v0 = 0x10000LL;
  if ( gMaxGdiHandleCount < 0x10000 )
    v0 = gMaxGdiHandleCount;
  GetgvsStateWrap();
  ghsemHmgr = (PERESOURCE)GreCreateSemaphoreInternal(0);
  if ( !ghsemHmgr )
    return 0LL;
  memset(&laSize, 0, 0x7CuLL);
  if ( !HmgInitializeLookAsideList(1u, 0x9D8u, v1, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(4u, 0xD8u, v2, 0x60u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(5u, (int)SURFACE::tSize + 256, v3, 0x28u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(8u, 0xC8u, v4, 0xCu) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0x10u, 0xB8u, v5, 0x60u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0xAu, 0x278u, v6, 0x40u) )
    return 0LL;
  if ( !HmgInitializeLookAsideList(0xBu, 0x388u, v7, 0x37u) )
    return 0LL;
  ghfmMemory = (PKGUARDED_MUTEX)GreCreateFastMutex();
  if ( !ghfmMemory )
    return 0LL;
  gDpiDepDefaultGuiFontsPushLock = 0LL;
  v27 = 0;
  v26 = 1573528;
  if ( (int)Win32CreateSection(&gpHmgrSharedHandleSection, 6LL, v8, (__int64)&v26, AllocationType, 0x4000000) < 0 )
    return 0LL;
  ViewSize = 0LL;
  if ( MmMapViewInSessionSpace(gpHmgrSharedHandleSection, &gpGdiSharedMemory, &ViewSize) < 0 )
    return 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v9);
  if ( (int)MmMapViewOfSection(gpHmgrSharedHandleSection, CurrentProcess, &v23, 0LL, 4096LL, &v22, &v21, 2, 0x400000, 4) < 0 )
    return 0LL;
  RegionSize = 24 * v0;
  BaseAddress = (PVOID)v23;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  BaseAddress = (PVOID)(v23 + 1572864);
  RegionSize = 664LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess);
  gpentHmgr = (struct _ENTRY *)gpGdiSharedMemory;
  gpGdiDevCaps = (struct _DEVCAPS *)((char *)gpGdiSharedMemory + 1572864);
  gpHandleManager = GdiHandleManager::Create(v12, v11, v0);
  if ( !gpHandleManager )
    return 0LL;
  v14 = 0;
  while ( GdiHandleManager::AcquireEntryIndex(v13, (unsigned int *)&v23) )
  {
    if ( (unsigned int)++v14 >= 0xA )
      goto LABEL_25;
  }
  GdiHandleManager::Destroy(v13);
  gpHandleManager = 0LL;
LABEL_25:
  if ( !gpHandleManager )
    return 0LL;
  gahStockObjects = (void **)((char *)gpGdiSharedMemory + 1573040);
  gahStockObjects96 = (void **)((char *)gpGdiSharedMemory + 1573216);
  gahDpiDepDefaultGuiFonts = (void **)((char *)gpGdiSharedMemory + 1573392);
  HmgrStacksInit();
  v15 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged(8LL, 0x6C6D6847u);
  gpLockShortDelay = v15;
  if ( !v15 )
    return 0LL;
  v15->LowPart = -100000;
  gpLockShortDelay->HighPart = -1;
  gpTmpGlobal = PALLOCMEM2(0x1000uLL, 0x6D746847u, 0);
  v16 = (void **)Win32AllocPoolNonPaged(8LL, 0x6D746847u);
  gpTmpGlobalFree = v16;
  if ( !gpTmpGlobal )
    return 0LL;
  if ( v16
    && (*v16 = gpTmpGlobal, InitializeReferenceTracker())
    && (v17 = (unsigned __int8 **)Win32AllocPool(48LL, 0x6F736955u), (gpTypeIsolation = v17) != 0LL)
    && (memset(v17, 0, 0x30uLL),
        TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<233472,912>>::Create()) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
