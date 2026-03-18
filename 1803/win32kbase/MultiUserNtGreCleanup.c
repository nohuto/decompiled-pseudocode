/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C00C4240
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00A90D0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     PopThreadGuardedObject @ 0x1C001E1D0 (PopThreadGuardedObject.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002BD90 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0077838 (-Destroy@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     GreDeleteFastMutex @ 0x1C0077A20 (GreDeleteFastMutex.c)
 *     Win32FreePagedLookasideList @ 0x1C00BD280 (Win32FreePagedLookasideList.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00C386C (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00C3D60 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00C3E6C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CD0F0 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvNotifySessionStateChange @ 0x1C00D57C0 (DrvNotifySessionStateChange.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D7DB8 (-Destroy@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D7E34 (-Destroy@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D7E68 (-Destroy@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1C00DC814 (-Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C0168904 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 */

__int64 MultiUserNtGreCleanup()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  int v2; // edi
  unsigned int v3; // ebx
  unsigned int i; // edx
  unsigned int NextEntryIndex; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rbx
  __int64 *MAPPER_SignatureTable; // rbx
  __int64 v10; // rax
  struct _ENTRY *v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 *v18; // rbx
  void *v19; // rcx
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // rbx
  struct tagREMOTE_CONTEXT *v24; // rcx
  unsigned __int8 **v25; // rbx
  unsigned __int8 *v26; // rcx
  unsigned __int8 *v27; // rcx
  unsigned __int8 *v28; // rcx
  unsigned __int8 *v29; // rcx
  unsigned __int8 *v30; // rcx
  PVOID *v31; // rbx
  __int64 v32; // rdi
  struct GdiHandleManager *v33; // rcx
  unsigned int j; // ebx
  struct tagStackTraceEntry *v35; // rcx
  unsigned int k; // ebx
  struct tagAltStackTraceEntry *v37; // rcx
  __int64 *v38; // rbx
  __int64 v39; // rdi
  struct _ENTRY *v41; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  gbGreSessionCleanup = 1;
  v2 = 0;
  v3 = CurrentProcessId & 0xFFFFFFFC;
  if ( gpHandleManager )
  {
    for ( i = 0; ; i = NextEntryIndex )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v1, i, &v41);
      if ( !NextEntryIndex )
        break;
      LOBYTE(v1) = *((_BYTE *)v41 + 14) - 1;
      if ( (unsigned __int8)v1 <= 0x1Du )
      {
        v1 = (GdiHandleManager *)(v3 | *((_DWORD *)v41 + 2) & 1);
        *((_DWORD *)v41 + 2) = (_DWORD)v1;
        ++v2;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) = v2;
  }
  if ( (int)IsGdiMultiUserFontCleanupSupported() >= 0 )
    GdiMultiUserFontCleanup();
  if ( gpHandleManager )
    NtGdiCloseProcess(v3, 2u);
  if ( (int)IsGetgpfsTableSupported() >= 0 )
  {
    v7 = (__int64 *)GetgpfsTable();
    if ( *v7 )
    {
      Win32FreePool(*v7);
      *v7 = 0LL;
    }
  }
  if ( (int)IsGetgpfmffTableSupported() >= 0 )
  {
    v8 = (__int64 *)GetgpfmffTable();
    if ( *v8 )
    {
      Win32FreePool(*v8);
      *v8 = 0LL;
    }
  }
  if ( (int)IsGetMAPPER_SignatureTableSupported() >= 0 )
  {
    MAPPER_SignatureTable = (__int64 *)GetMAPPER_SignatureTable();
    if ( *MAPPER_SignatureTable )
    {
      Win32FreePool(*MAPPER_SignatureTable);
      *MAPPER_SignatureTable = 0LL;
    }
  }
  if ( (int)IsGetgpwszFamilyDefaultFontsSupported() >= 0 )
  {
    v10 = GetgpwszFamilyDefaultFonts(&v41);
    v11 = v41;
    v12 = 0LL;
    v13 = v10;
    if ( v41 )
    {
      do
      {
        v14 = *(_QWORD *)(v13 + 8 * v12);
        if ( v14 )
        {
          Win32FreePool(v14);
          *(_QWORD *)(v13 + 8 * v12) = 0LL;
          v11 = v41;
        }
        ++v12;
      }
      while ( v12 < (unsigned __int64)v11 );
    }
  }
  if ( LastNlsTableBuffer )
  {
    Win32FreePool(LastNlsTableBuffer);
    LastNlsTableBuffer = 0LL;
  }
  if ( (int)IsMultiUserGreDeleteScriptsSupported() >= 0 )
    MultiUserGreDeleteScripts();
  v15 = (__int64 *)&unk_1C01A5DC8;
  v16 = 8LL;
  do
  {
    v17 = *v15;
    if ( *v15 )
    {
      PopThreadGuardedObject((_QWORD *)(v17 - 32));
      Win32FreePool(v17 - 32);
    }
    v15 += 4;
    --v16;
  }
  while ( v16 );
  if ( gpCachedEngbrush )
    Win32FreePool((__int64)gpCachedEngbrush);
  if ( gpCachedDbrush )
    Win32FreePool((__int64)gpCachedDbrush);
  if ( gpRGBXlate )
  {
    Win32FreePool((__int64)gpRGBXlate);
    gpRGBXlate = 0LL;
  }
  if ( (int)IsGetgpDefITableSupported() >= 0 )
  {
    v18 = (__int64 *)GetgpDefITable();
    if ( *v18 )
    {
      Win32FreePool(*v18);
      *v18 = 0LL;
    }
  }
  v19 = (void *)*((_QWORD *)gpSfmState + 3);
  if ( v19 )
    ZwClose(v19);
  if ( (int)IsGetgpRedirDevSupported() >= 0 )
  {
    v20 = (__int64 *)GetgpRedirDev();
    if ( *v20 )
    {
      Win32FreePool(*v20);
      *v20 = 0LL;
    }
  }
  if ( (int)IsGetgpBmpDevSupported() >= 0 )
  {
    v23 = (__int64 *)GetgpBmpDev();
    v22 = *v23;
    if ( *v23 )
    {
      Win32FreePool(v22);
      *v23 = 0LL;
    }
  }
  MultiUserGreCleanupDrivers(v22, v21);
  DrvCleanupGraphicsDeviceList(gpLocalGraphicsDeviceList);
  gpLocalGraphicsDeviceList = 0LL;
  DrvCleanupGraphicsDeviceList(gpRemoteGraphicsDeviceList);
  gpRemoteGraphicsDeviceList = 0LL;
  gpGraphicsDeviceList = 0LL;
  if ( qword_1C01A1738 )
  {
    Win32FreePool((__int64)qword_1C01A1738);
    qword_1C01A1738 = 0LL;
  }
  v24 = (struct tagREMOTE_CONTEXT *)qword_1C01A1748;
  if ( qword_1C01A1748 )
  {
    Win32FreePool(qword_1C01A1748);
    qword_1C01A1748 = 0LL;
  }
  GreCleanupRemoteAdapterContext(v24);
  DrvNotifySessionStateChange(1LL);
  if ( gpLockShortDelay )
  {
    Win32FreePool((__int64)gpLockShortDelay);
    gpLockShortDelay = 0LL;
  }
  if ( gpTmpGlobal )
  {
    Win32FreePool((__int64)gpTmpGlobal);
    gpTmpGlobal = 0LL;
  }
  if ( gpTmpGlobalFree )
  {
    Win32FreePool((__int64)gpTmpGlobalFree);
    gpTmpGlobalFree = 0LL;
  }
  v25 = gpTypeIsolation;
  if ( gpTypeIsolation )
  {
    if ( *gpTypeIsolation )
      NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Destroy(*gpTypeIsolation);
    v26 = v25[2];
    if ( v26 )
      NSInstrumentation::CTypeIsolation<81920,320>::Destroy(v26);
    v27 = v25[3];
    if ( v27 )
      NSInstrumentation::CTypeIsolation<81920,320>::Destroy(v27);
    v28 = v25[1];
    if ( v28 )
      NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Destroy(v28);
    v29 = v25[4];
    if ( v29 )
      NSInstrumentation::CTypeIsolation<81920,320>::Destroy(v29);
    v30 = v25[5];
    if ( v30 )
      NSInstrumentation::CTypeIsolation<233472,912>::Destroy(v30);
    Win32FreePool((__int64)gpTypeIsolation);
    gpTypeIsolation = 0LL;
  }
  if ( gpReferenceTracker )
  {
    v31 = (PVOID *)&qword_1C019F730;
    v32 = 3LL;
    do
    {
      if ( *v31 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(*v31);
      v31 += 2;
      --v32;
    }
    while ( v32 );
    ExFreePoolWithTag(gpReferenceTracker, 0);
    gpReferenceTracker = 0LL;
  }
  if ( gpAdapterLuids )
  {
    Win32FreePool((__int64)gpAdapterLuids);
    gpAdapterLuids = 0LL;
  }
  if ( gpDevicesPerLuid )
  {
    Win32FreePool((__int64)gpDevicesPerLuid);
    gpDevicesPerLuid = 0LL;
  }
  if ( (int)IsMultiUserCleanupPathAllocSupported() >= 0 )
    MultiUserCleanupPathAlloc();
  MultiUserGreCleanupEngResources();
  GreDeleteFastMutex((__int64)ghfmMemory);
  ghfmMemory = 0LL;
  if ( gpentHmgrStacks )
  {
    for ( j = 0; j < gMaxGdiHandleCount; ++j )
    {
      v35 = gpentHmgrStacks[j];
      if ( v35 )
        Win32FreePool((__int64)v35);
    }
    Win32FreePool((__int64)gpentHmgrStacks);
  }
  if ( gpentHmgrAltStacks )
  {
    for ( k = 0; k < gMaxGdiHandleCount; ++k )
    {
      v37 = gpentHmgrAltStacks[k];
      if ( v37 )
        Win32FreePool((__int64)v37);
    }
    Win32FreePool((__int64)gpentHmgrAltStacks);
  }
  if ( gpHandleManager )
  {
    GdiHandleManager::Destroy(v33);
    gpHandleManager = 0LL;
  }
  if ( gpGdiSharedMemory )
  {
    MmUnmapViewInSessionSpace(gpGdiSharedMemory);
    gpGdiSharedMemory = 0LL;
  }
  if ( gpHmgrSharedHandleSection )
  {
    ObfDereferenceObject(gpHmgrSharedHandleSection);
    gpHmgrSharedHandleSection = 0LL;
  }
  v38 = (__int64 *)&pHmgLookAsideList;
  v39 = 31LL;
  do
  {
    if ( *v38 )
    {
      Win32FreePagedLookasideList(*v38);
      *v38 = 0LL;
    }
    ++v38;
    --v39;
  }
  while ( v39 );
  if ( (int)IsvNetworkedFontFileCleanupSupported() >= 0 )
    vNetworkedFontFileCleanup();
  if ( (int)IsvTrustedFontFileTableCleanupSupported() >= 0 )
    vTrustedFontFileTableCleanup();
  return 1LL;
}
