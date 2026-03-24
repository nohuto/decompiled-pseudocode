/*
 * XREFs of PopAllocateHiberContext @ 0x1406DF534
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     MmGetHighestPhysicalPage @ 0x1400A8918 (MmGetHighestPhysicalPage.c)
 *     MmBuildMdlForNonPagedPool @ 0x140101FC0 (MmBuildMdlForNonPagedPool.c)
 *     PoSetHiberRange @ 0x1401447D0 (PoSetHiberRange.c)
 *     ZwQuerySystemInformation @ 0x1401B8850 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1402D3324 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x140569714 (PopCheckpointSystemSleep.c)
 *     BgkResumePrepare @ 0x14056B58C (BgkResumePrepare.c)
 *     PopDiscardRange @ 0x14056BA08 (PopDiscardRange.c)
 *     PopAllocatePages @ 0x14056BBD0 (PopAllocatePages.c)
 *     PopGenerateUnHibernatedMdl @ 0x14056BCDC (PopGenerateUnHibernatedMdl.c)
 *     PopGetBitlockerKeyLocation @ 0x14056BD8C (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x14056BF24 (PopGetHwConfigurationSignature.c)
 *     MmLockPreChargedPagedPool @ 0x1406DF040 (MmLockPreChargedPagedPool.c)
 *     IoGetDumpStack @ 0x1406DF084 (IoGetDumpStack.c)
 *     PopLoadResumeContext @ 0x1406DF0D4 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x1406DF244 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x1406DF4F0 (MmMarkHiberRange.c)
 *     PopBcdSetPendingResume @ 0x1406DF978 (PopBcdSetPendingResume.c)
 *     PopFreeHiberContext @ 0x1406DFFA0 (PopFreeHiberContext.c)
 *     BcdForciblyUnloadStore @ 0x1406E171C (BcdForciblyUnloadStore.c)
 *     PopBcdEstablishResumeObject @ 0x140711888 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x140711A08 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140712268 (BcdOpenStore.c)
 *     BcdCloseObject @ 0x140712FA0 (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x140817BDC (HvlpAllocatePageListResources.c)
 *     VslAllocateSecureHibernateResources @ 0x140817C78 (VslAllocateSecureHibernateResources.c)
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
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  unsigned int v21; // edx
  unsigned __int64 v22; // rcx
  PVOID Pages; // rax
  char *v24; // rax
  PVOID *v25; // rsi
  __int64 v26; // rbp
  PMDL UnHibernatedMdl; // rax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rcx
  __int16 v32; // ax
  unsigned __int64 v33; // rdx
  __int64 **v34; // r12
  __int64 *i; // rsi
  int v36; // eax
  PVOID *v37; // r15
  __int64 v38; // r13
  char SystemInformation; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp+10h] BYREF
  __int64 v41; // [rsp+80h] [rbp+18h] BYREF

  if ( dword_140417728 != 5 )
    return 0;
  v40 = 0LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v1 = (char *)MemoryMap;
  BugCheckParameter4 = (ULONG_PTR)MemoryMap;
  PopHiberScratchPages = PopHiberLoaderScratchPages
                       + ((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1C8uLL);
  MmLockPreChargedPagedPool((unsigned __int64)qword_140417870);
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v1 + 3) = xmmword_140417890;
  *((_QWORD *)v1 + 25) = qword_140417880;
  *((_QWORD *)v1 + 40) = qword_1404178D0;
  *((_QWORD *)v1 + 27) = qword_1404178B0;
  *((_QWORD *)v1 + 28) = qword_1404178E0;
  *((_QWORD *)v1 + 29) = qword_1404178D8;
  *((_OWORD *)v1 + 2) = xmmword_1404178A0;
  *((_QWORD *)v1 + 9) = v1 + 64;
  *((_QWORD *)v1 + 8) = v1 + 64;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    v29 = 42;
LABEL_46:
    PopCheckpointSystemSleep(v29);
    goto LABEL_43;
  }
  v4 = (ULONG_PTR *)(v1 + 168);
  DumpStack = IoGetDumpStack(v2, (__int64)(v1 + 168), v3, PopSimulate & 0x10);
  if ( DumpStack < 0 )
  {
    v30 = 43;
    goto LABEL_48;
  }
  v6 = *v4;
  v7 = 0;
  if ( dword_14041770C < 0 )
  {
    v7 = 0;
    if ( dword_140417714 == 2 )
      v7 = 2;
  }
  v8 = v7 | 1;
  v9 = __readcr4();
  v10 = v7 | 9;
  if ( (v9 & 0x1000) == 0 )
    v10 = v8;
  v11 = *((_QWORD *)v1 + 27);
  v1[1] = v10;
  v12 = qword_140417888;
  v13 = qword_140417888 & 0xFFFFFFFFFFFFF000uLL;
  v14 = qword_140417888;
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
    v31 = qword_1404178D8;
    v32 = qword_1404178D8;
    *(_QWORD *)v15 = 0LL;
    *(_WORD *)(v15 + 10) = 0;
    *(_DWORD *)(v15 + 40) = 4096;
    *(_WORD *)(v15 + 8) = 8 * (((unsigned __int16)((v32 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v15 + 32) = v31 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v15 + 44) = v31 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 28));
  }
  DumpStack = PopLoadResumeContext((__int64)v1);
  if ( DumpStack < 0 )
  {
    v30 = 44;
    goto LABEL_48;
  }
  DumpStack = BcdOpenStore(v16, 2LL, &v41);
  if ( DumpStack < 0 )
  {
    v30 = 45;
    goto LABEL_48;
  }
  v17 = v41;
  DumpStack = PopBcdEstablishResumeObject(v41, &v40);
  if ( DumpStack < 0 )
  {
    BcdCloseStore(v17);
    v30 = 46;
    goto LABEL_48;
  }
  DumpStack = PopBcdSetPendingResume(v17, v18, v19, v40);
  BcdCloseObject(v40);
  if ( DumpStack < 0 )
  {
    BcdCloseStore(v17);
    v30 = 47;
    goto LABEL_48;
  }
  BcdForciblyUnloadStore(v17);
  RtlClearAllBits((PRTL_BITMAP)v1 + 2);
  RtlSetAllBits((PRTL_BITMAP)v1 + 3);
  *((_DWORD *)v1 + 112) = PopGetHwConfigurationSignature();
  PopHiberInitializeResources(v1);
  if ( (int)PopGetBitlockerKeyLocation((__int64 *)&v40) >= 0 )
  {
    v33 = v40 >> 12;
    *((_QWORD *)v1 + 39) = v40 >> 12;
    PopDiscardRange((struct _RTL_BITMAP *)v1, v33, 4u);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v1, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v1, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange((__int64)v1, xmmword_140417848);
  ((void (__fastcall *)(char *))off_1403FE2E8[0])(v1);
  v20 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
  v21 = v20;
  *((_DWORD *)v1 + 38) = v20;
  if ( *((_QWORD *)v1 + 30) )
  {
    v22 = *((unsigned int *)v1 + 62);
    if ( v22 > v20 )
    {
      *((_DWORD *)v1 + 38) = v22;
      v21 = v22;
    }
  }
  Pages = PopAllocatePages(v21);
  DumpStack = *((_DWORD *)v1 + 47);
  *((_QWORD *)v1 + 18) = Pages;
  if ( DumpStack < 0 )
  {
    v30 = 48;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(*v4 + 280) )
  {
    v34 = (__int64 **)(*(_QWORD *)(*v4 + 272) + 40LL);
    for ( i = *v34; i != (__int64 *)v34; i = (__int64 *)*i )
    {
      v36 = *((_DWORD *)i + 16);
      if ( v36 )
      {
        if ( (v36 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
          PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
          PopCheckpointSystemSleep(0x31u);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
        }
        v37 = (PVOID *)(i + 9);
        v38 = 2LL;
        do
        {
          if ( *v37 )
            PoSetHiberRange(v1, 0x8000u, *v37, *((unsigned int *)i + 16), 0x66756263u);
          ++v37;
          --v38;
        }
        while ( v38 );
      }
    }
  }
  else
  {
    v24 = (char *)PopAllocatePages(16LL);
    *(_QWORD *)(v6 + 8) = v24;
    if ( !v24 )
    {
      DumpStack = *((_DWORD *)v1 + 47);
      v30 = 50;
      goto LABEL_48;
    }
    PoSetHiberRange(v1, 0x8000u, v24 + 0x2000, 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v6 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v6, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
      PopCheckpointSystemSleep(0x33u);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
    }
    v25 = (PVOID *)(v6 + 16);
    v26 = 2LL;
    do
    {
      if ( *v25 )
        PoSetHiberRange(v1, 0x8000u, *v25, *(unsigned int *)(v6 + 112), 0x66756263u);
      ++v25;
      --v26;
    }
    while ( v26 );
  }
  UnHibernatedMdl = PopGenerateUnHibernatedMdl((__int64)v1, (unsigned int)PopHiberScratchPages);
  *((_QWORD *)v1 + 15) = UnHibernatedMdl;
  if ( !UnHibernatedMdl )
  {
    DumpStack = -1073741670;
    v29 = 52;
    goto LABEL_46;
  }
  if ( VslVsmEnabled )
  {
    v1[452] = 1;
    DumpStack = VslAllocateSecureHibernateResources(v1);
    if ( DumpStack >= 0 )
      goto LABEL_33;
    v30 = 53;
LABEL_48:
    PopCheckpointSystemSleep(v30);
    goto LABEL_40;
  }
  v1[452] = 0;
LABEL_33:
  if ( ZwQuerySystemInformation(SystemObjectInformation|0x80, &SystemInformation, 2u, 0LL) >= 0 )
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
