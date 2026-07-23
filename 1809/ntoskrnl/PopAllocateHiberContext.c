/*
 * XREFs of PopAllocateHiberContext @ 0x1406E07D4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     MmGetHighestPhysicalPage @ 0x1400A8858 (MmGetHighestPhysicalPage.c)
 *     MmBuildMdlForNonPagedPool @ 0x140102040 (MmBuildMdlForNonPagedPool.c)
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     BgkResumePrepare @ 0x14056C58C (BgkResumePrepare.c)
 *     PopDiscardRange @ 0x14056CA08 (PopDiscardRange.c)
 *     PopAllocatePages @ 0x14056CBD0 (PopAllocatePages.c)
 *     PopGenerateUnHibernatedMdl @ 0x14056CCDC (PopGenerateUnHibernatedMdl.c)
 *     PopGetBitlockerKeyLocation @ 0x14056CD8C (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x14056CF24 (PopGetHwConfigurationSignature.c)
 *     MmLockPreChargedPagedPool @ 0x1406E02E0 (MmLockPreChargedPagedPool.c)
 *     IoGetDumpStack @ 0x1406E0324 (IoGetDumpStack.c)
 *     PopLoadResumeContext @ 0x1406E0374 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x1406E04E4 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x1406E0790 (MmMarkHiberRange.c)
 *     PopBcdSetPendingResume @ 0x1406E0C18 (PopBcdSetPendingResume.c)
 *     PopFreeHiberContext @ 0x1406E1240 (PopFreeHiberContext.c)
 *     BcdForciblyUnloadStore @ 0x1406E29BC (BcdForciblyUnloadStore.c)
 *     PopBcdEstablishResumeObject @ 0x140712B28 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x140712CA8 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140713508 (BcdOpenStore.c)
 *     BcdCloseObject @ 0x140714240 (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x140818DDC (HvlpAllocatePageListResources.c)
 *     VslAllocateSecureHibernateResources @ 0x140818E78 (VslAllocateSecureHibernateResources.c)
 */

__int64 PopAllocateHiberContext()
{
  __int64 HighestPhysicalPage; // rax
  char *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r8
  ULONG_PTR *v4; // r15
  int DumpStack; // esi
  ULONG_PTR v6; // r14
  char v7; // cl
  char v8; // r8
  __int16 v9; // dx
  char v10; // cl
  __int64 v11; // r8
  __int16 v12; // dx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rdx
  UNICODE_STRING *v16; // rcx
  HANDLE v17; // rbp
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  unsigned __int64 v20; // rcx
  PVOID Pages; // rax
  char *v22; // rax
  PVOID *v23; // rsi
  __int64 v24; // rbp
  PMDL UnHibernatedMdl; // rax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // rcx
  __int16 v30; // ax
  unsigned __int64 v31; // rdx
  __int64 **v32; // r12
  __int64 *i; // rsi
  int v34; // eax
  PVOID *v35; // r15
  __int64 v36; // r13
  char SystemInformation; // [rsp+70h] [rbp+8h] BYREF
  HANDLE BcdObjectHandle; // [rsp+78h] [rbp+10h] BYREF
  HANDLE BcdStoreHandle; // [rsp+80h] [rbp+18h] BYREF

  if ( dword_1404187C8 != 5 )
    return 0;
  BcdObjectHandle = 0LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v1 = (char *)MemoryMap;
  BugCheckParameter4 = (ULONG_PTR)MemoryMap;
  PopHiberScratchPages = PopHiberLoaderScratchPages
                       + ((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1C8uLL);
  MmLockPreChargedPagedPool((unsigned __int64)qword_140418910);
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v1 + 3) = xmmword_140418930;
  *((_QWORD *)v1 + 25) = qword_140418920;
  *((_QWORD *)v1 + 40) = qword_140418970;
  *((_QWORD *)v1 + 27) = qword_140418950;
  *((_QWORD *)v1 + 28) = qword_140418980;
  *((_QWORD *)v1 + 29) = qword_140418978;
  *((_OWORD *)v1 + 2) = xmmword_140418940;
  *((_QWORD *)v1 + 9) = v1 + 64;
  *((_QWORD *)v1 + 8) = v1 + 64;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    v27 = 42;
LABEL_46:
    PopCheckpointSystemSleep(v27);
    goto LABEL_43;
  }
  v4 = (ULONG_PTR *)(v1 + 168);
  DumpStack = IoGetDumpStack(v2, (__int64)(v1 + 168), v3, PopSimulate & 0x10);
  if ( DumpStack < 0 )
  {
    v28 = 43;
    goto LABEL_48;
  }
  v6 = *v4;
  v7 = 0;
  if ( dword_1404187AC < 0 )
  {
    v7 = 0;
    if ( dword_1404187B4 == 2 )
      v7 = 2;
  }
  v8 = v7 | 1;
  v9 = __readcr4();
  v10 = v7 | 9;
  if ( (v9 & 0x1000) == 0 )
    v10 = v8;
  v11 = *((_QWORD *)v1 + 27);
  v1[1] = v10;
  v12 = qword_140418928;
  v13 = qword_140418928 & 0xFFFFFFFFFFFFF000uLL;
  v14 = qword_140418928;
  *(_QWORD *)v11 = 0LL;
  *(_WORD *)(v11 + 10) = 0;
  *(_QWORD *)(v11 + 32) = v13;
  *(_DWORD *)(v11 + 44) = v12 & 0xFFF;
  *(_WORD *)(v11 + 8) = 8 * ((((unsigned __int64)(v14 & 0xFFF) + 102399) >> 12) + 6);
  *(_DWORD *)(v11 + 40) = 98304;
  MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 27));
  v15 = *((_QWORD *)v1 + 28);
  if ( v15 )
  {
    v29 = qword_140418978;
    v30 = qword_140418978;
    *(_QWORD *)v15 = 0LL;
    *(_WORD *)(v15 + 10) = 0;
    *(_DWORD *)(v15 + 40) = 4096;
    *(_WORD *)(v15 + 8) = 8 * (((unsigned __int16)((v30 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v15 + 32) = v29 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v15 + 44) = v29 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 28));
  }
  DumpStack = PopLoadResumeContext((__int64)v1);
  if ( DumpStack < 0 )
  {
    v28 = 44;
    goto LABEL_48;
  }
  DumpStack = BcdOpenStore(v16, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle);
  if ( DumpStack < 0 )
  {
    v28 = 45;
    goto LABEL_48;
  }
  v17 = BcdStoreHandle;
  DumpStack = PopBcdEstablishResumeObject(BcdStoreHandle);
  if ( DumpStack < 0 )
  {
    BcdCloseStore(v17);
    v28 = 46;
    goto LABEL_48;
  }
  DumpStack = PopBcdSetPendingResume(v17);
  BcdCloseObject(BcdObjectHandle);
  if ( DumpStack < 0 )
  {
    BcdCloseStore(v17);
    v28 = 47;
    goto LABEL_48;
  }
  BcdForciblyUnloadStore(v17);
  RtlClearAllBits((PRTL_BITMAP)v1 + 2);
  RtlSetAllBits((PRTL_BITMAP)v1 + 3);
  *((_DWORD *)v1 + 112) = PopGetHwConfigurationSignature();
  PopHiberInitializeResources(v1);
  if ( (int)PopGetBitlockerKeyLocation((__int64 *)&BcdObjectHandle) >= 0 )
  {
    v31 = (unsigned __int64)BcdObjectHandle >> 12;
    *((_QWORD *)v1 + 39) = (unsigned __int64)BcdObjectHandle >> 12;
    PopDiscardRange((_RTL_BITMAP *)v1, v31, 4u);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v1, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v1, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange((__int64)v1, xmmword_1404188E8);
  ((void (__fastcall *)(char *))off_1403FF2E8[0])(v1);
  v18 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
  v19 = v18;
  *((_DWORD *)v1 + 38) = v18;
  if ( *((_QWORD *)v1 + 30) )
  {
    v20 = *((unsigned int *)v1 + 62);
    if ( v20 > v18 )
    {
      *((_DWORD *)v1 + 38) = v20;
      v19 = v20;
    }
  }
  Pages = PopAllocatePages(v19);
  DumpStack = *((_DWORD *)v1 + 47);
  *((_QWORD *)v1 + 18) = Pages;
  if ( DumpStack < 0 )
  {
    v28 = 48;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(*v4 + 280) )
  {
    v32 = (__int64 **)(*(_QWORD *)(*v4 + 272) + 40LL);
    for ( i = *v32; i != (__int64 *)v32; i = (__int64 *)*i )
    {
      v34 = *((_DWORD *)i + 16);
      if ( v34 )
      {
        if ( (v34 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
          PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
          PopCheckpointSystemSleep(0x31u);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
        }
        v35 = (PVOID *)(i + 9);
        v36 = 2LL;
        do
        {
          if ( *v35 )
            PoSetHiberRange(v1, 0x8000u, *v35, *((unsigned int *)i + 16), 0x66756263u);
          ++v35;
          --v36;
        }
        while ( v36 );
      }
    }
  }
  else
  {
    v22 = (char *)PopAllocatePages(16LL);
    *(_QWORD *)(v6 + 8) = v22;
    if ( !v22 )
    {
      DumpStack = *((_DWORD *)v1 + 47);
      v28 = 50;
      goto LABEL_48;
    }
    PoSetHiberRange(v1, 0x8000u, v22 + 0x2000, 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v6 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v6, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
      PopCheckpointSystemSleep(0x33u);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
    }
    v23 = (PVOID *)(v6 + 16);
    v24 = 2LL;
    do
    {
      if ( *v23 )
        PoSetHiberRange(v1, 0x8000u, *v23, *(unsigned int *)(v6 + 112), 0x66756263u);
      ++v23;
      --v24;
    }
    while ( v24 );
  }
  UnHibernatedMdl = PopGenerateUnHibernatedMdl((__int64)v1, (unsigned int)PopHiberScratchPages);
  *((_QWORD *)v1 + 15) = UnHibernatedMdl;
  if ( !UnHibernatedMdl )
  {
    DumpStack = -1073741670;
    v27 = 52;
    goto LABEL_46;
  }
  if ( VslVsmEnabled )
  {
    v1[452] = 1;
    DumpStack = VslAllocateSecureHibernateResources(v1);
    if ( DumpStack >= 0 )
      goto LABEL_33;
    v28 = 53;
LABEL_48:
    PopCheckpointSystemSleep(v28);
    goto LABEL_40;
  }
  v1[452] = 0;
LABEL_33:
  if ( ZwQuerySystemInformation(SystemSecureBootInformation, &SystemInformation, 2u, 0LL) >= 0 )
    v1[453] = SystemInformation;
  if ( (int)BgkResumePrepare(v1) >= 0 )
    PopBgkResumePrepared = 1;
  *((_DWORD *)v1 + 48) = *((_DWORD *)v1 + 64) - 1;
  if ( (HvlpFlags & 2) != 0 )
    HvlpAllocatePageListResources();
  DumpStack = 0;
LABEL_40:
  if ( DumpStack < 0 )
LABEL_43:
    PopFreeHiberContext();
  return (unsigned int)DumpStack;
}
