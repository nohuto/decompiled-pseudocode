/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C00B59E8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B4B70 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0015E80 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0057110 (--$FreeIsolatedType@V-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007FEC8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     DrvNotifySessionStateChange @ 0x1C00A3A30 (DrvNotifySessionStateChange.c)
 *     Win32FreePagedLookasideList @ 0x1C00B5F10 (Win32FreePagedLookasideList.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C00B605C (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00B6150 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00B6254 (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B68D0 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00B6AC0 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00B6B0C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00B7570 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C0133200 (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 */

__int64 MultiUserNtGreCleanup()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  __int64 v2; // rdx
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx
  unsigned __int8 v6; // al
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rbx
  __int64 *MAPPER_SignatureTable; // rbx
  __int64 v11; // rax
  struct _ENTRY *v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 *v19; // rbx
  void *v20; // rcx
  __int64 *v21; // rbx
  __int64 *v22; // rbx
  struct tagREMOTE_CONTEXT *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  NSInstrumentation::CReferenceTracker::CReferenceCountedType **v26; // rbx
  __int64 v27; // rsi
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v28; // rdi
  struct GdiHandleManager *v29; // rcx
  void * near **v30; // rbx
  __int64 v31; // rdi
  unsigned int i; // ebx
  struct tagStackTraceEntry *v34; // rcx
  unsigned int j; // ebx
  struct tagAltStackTraceEntry *v36; // rcx
  struct _ENTRY *v37; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  gbGreSessionCleanup = 1;
  v2 = 0LL;
  v3 = CurrentProcessId & 0xFFFFFFFC;
  v4 = 0;
  if ( gpHandleManager )
  {
    while ( 1 )
    {
      LODWORD(v2) = GdiHandleManager::GetNextEntryIndex(v1, v2, &v37);
      if ( !(_DWORD)v2 )
        break;
      v1 = v37;
      v6 = *((_BYTE *)v37 + 14);
      if ( v6 )
      {
        if ( v6 <= 0x1Eu )
        {
          *((_DWORD *)v37 + 2) = v3 | *((_DWORD *)v37 + 2) & 1;
          ++v4;
        }
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) = v4;
  }
  if ( (int)IsGdiMultiUserFontCleanupSupported(v1, v2) >= 0 )
    GdiMultiUserFontCleanup();
  if ( gpHandleManager )
    NtGdiCloseProcess(v3, 2u);
  if ( (int)IsGetgpfsTableSupported() >= 0 )
  {
    v8 = (__int64 *)GetgpfsTable();
    if ( *v8 )
    {
      Win32FreePool(*v8);
      *v8 = 0LL;
    }
  }
  if ( (int)IsGetgpfmffTableSupported() >= 0 )
  {
    v9 = (__int64 *)GetgpfmffTable();
    if ( *v9 )
    {
      Win32FreePool(*v9);
      *v9 = 0LL;
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
    v11 = GetgpwszFamilyDefaultFonts(&v37);
    v12 = v37;
    v13 = 0LL;
    v14 = v11;
    if ( v37 )
    {
      do
      {
        v15 = *(_QWORD *)(v14 + 8 * v13);
        if ( v15 )
        {
          Win32FreePool(v15);
          *(_QWORD *)(v14 + 8 * v13) = 0LL;
          v12 = v37;
        }
        ++v13;
      }
      while ( v13 < (unsigned __int64)v12 );
    }
  }
  if ( LastNlsTableBuffer )
  {
    Win32FreePool(LastNlsTableBuffer);
    LastNlsTableBuffer = 0LL;
  }
  if ( (int)IsMultiUserGreDeleteScriptsSupported() >= 0 )
    MultiUserGreDeleteScripts();
  v16 = (__int64 *)&unk_1C02181A8;
  v17 = 8LL;
  do
  {
    v18 = *v16;
    if ( *v16 )
    {
      PopThreadGuardedObject((_QWORD *)(v18 - 32));
      Win32FreePool(v18 - 32);
    }
    v16 += 4;
    --v17;
  }
  while ( v17 );
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
    v19 = (__int64 *)GetgpDefITable();
    if ( *v19 )
    {
      Win32FreePool(*v19);
      *v19 = 0LL;
    }
  }
  v20 = (void *)*((_QWORD *)gpSfmState + 3);
  if ( v20 )
    ZwClose(v20);
  if ( (int)IsGetgpRedirDevSupported() >= 0 )
  {
    v21 = (__int64 *)GetgpRedirDev();
    if ( *v21 )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>(*v21);
      *v21 = 0LL;
    }
  }
  if ( (int)IsGetgpBmpDevSupported() >= 0 )
  {
    v22 = (__int64 *)GetgpBmpDev();
    if ( *v22 )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>(*v22);
      *v22 = 0LL;
    }
  }
  MultiUserGreCleanupDrivers();
  DrvCleanupGraphicsDeviceList(gpLocalGraphicsDeviceList);
  gpLocalGraphicsDeviceList = 0LL;
  DrvCleanupGraphicsDeviceList(gpRemoteGraphicsDeviceList);
  gpRemoteGraphicsDeviceList = 0LL;
  gpGraphicsDeviceList = 0LL;
  if ( qword_1C0215B88 )
  {
    Win32FreePool((__int64)qword_1C0215B88);
    qword_1C0215B88 = 0LL;
  }
  v23 = qword_1C0215B98;
  if ( qword_1C0215B98 )
  {
    Win32FreePool((__int64)qword_1C0215B98);
    qword_1C0215B98 = 0LL;
  }
  GreCleanupRemoteAdapterContext(v23);
  DrvNotifySessionStateChange(1LL, v24, v25);
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
  if ( gpTypeIsolation )
  {
    TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy();
    Win32FreePool((__int64)gpTypeIsolation);
    gpTypeIsolation = 0LL;
  }
  if ( gpReferenceTracker )
  {
    v26 = &qword_1C0210538;
    v27 = 3LL;
    do
    {
      v28 = *v26;
      if ( *v26 )
      {
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType(*v26);
        ExFreePoolWithTag(v28, 0);
      }
      v26 += 2;
      --v27;
    }
    while ( v27 );
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
  v29 = (struct GdiHandleManager *)ghfmMemory;
  if ( ghfmMemory )
    Win32FreePool((__int64)ghfmMemory);
  ghfmMemory = 0LL;
  if ( gpentHmgrStacks )
  {
    for ( i = 0; i < gMaxGdiHandleCount; ++i )
    {
      v34 = gpentHmgrStacks[i];
      if ( v34 )
        Win32FreePool((__int64)v34);
    }
    Win32FreePool((__int64)gpentHmgrStacks);
  }
  if ( gpentHmgrAltStacks )
  {
    for ( j = 0; j < gMaxGdiHandleCount; ++j )
    {
      v36 = gpentHmgrAltStacks[j];
      if ( v36 )
        Win32FreePool((__int64)v36);
    }
    Win32FreePool((__int64)gpentHmgrAltStacks);
  }
  if ( gpHandleManager )
  {
    GdiHandleManager::Destroy(v29);
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
  v30 = &pHmgLookAsideList;
  v31 = 31LL;
  do
  {
    if ( *v30 )
    {
      Win32FreePagedLookasideList();
      *v30 = 0LL;
    }
    ++v30;
    --v31;
  }
  while ( v31 );
  if ( (int)IsvNetworkedFontFileCleanupSupported() >= 0 )
    vNetworkedFontFileCleanup();
  if ( (int)IsvTrustedFontFileTableCleanupSupported() >= 0 )
    vTrustedFontFileTableCleanup();
  return 1LL;
}
