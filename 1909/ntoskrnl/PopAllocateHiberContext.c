/*
 * XREFs of PopAllocateHiberContext @ 0x1407287C8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x140005F68 (MmGetHighestPhysicalPage.c)
 *     RtlClearAllBits @ 0x14008D950 (RtlClearAllBits.c)
 *     RtlSetAllBits @ 0x1400D7250 (RtlSetAllBits.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400F27E0 (MmBuildMdlForNonPagedPool.c)
 *     PoSetHiberRange @ 0x14015FEC0 (PoSetHiberRange.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1402ED674 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x1405990B4 (PopCheckpointSystemSleep.c)
 *     PopDiscardRange @ 0x14059B398 (PopDiscardRange.c)
 *     PopAllocatePages @ 0x14059B524 (PopAllocatePages.c)
 *     BgkResumePrepare @ 0x14059B590 (BgkResumePrepare.c)
 *     PopGenerateUnHibernatedMdl @ 0x14059B840 (PopGenerateUnHibernatedMdl.c)
 *     PopGetBitlockerKeyLocation @ 0x14059B8F0 (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x14059BAA8 (PopGetHwConfigurationSignature.c)
 *     PopHiberInitializeResources @ 0x1407284D8 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140728784 (MmMarkHiberRange.c)
 *     PopBcdSetPendingResume @ 0x140728C24 (PopBcdSetPendingResume.c)
 *     BcdForciblyUnloadStore @ 0x140729F08 (BcdForciblyUnloadStore.c)
 *     PopLoadResumeContext @ 0x14072A584 (PopLoadResumeContext.c)
 *     MmLockPreChargedPagedPool @ 0x14072AED0 (MmLockPreChargedPagedPool.c)
 *     IoGetDumpStack @ 0x14072B1A8 (IoGetDumpStack.c)
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 *     PopBcdEstablishResumeObject @ 0x14073D8C0 (PopBcdEstablishResumeObject.c)
 *     BcdCloseObject @ 0x14073F218 (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x140850D1C (HvlpAllocatePageListResources.c)
 *     VslAllocateSecureHibernateResources @ 0x140850DB8 (VslAllocateSecureHibernateResources.c)
 *     PopBcdClose @ 0x1408B60BC (PopBcdClose.c)
 *     PopBcdOpen @ 0x1408B60D0 (PopBcdOpen.c)
 */

__int64 PopAllocateHiberContext()
{
  __int64 HighestPhysicalPage; // rax
  char *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r8
  ULONG_PTR *v4; // r14
  int DumpStack; // edi
  ULONG_PTR v6; // rbp
  char v7; // cl
  char v8; // r8
  __int16 v9; // dx
  char v10; // cl
  __int64 v11; // r8
  __int16 v12; // dx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rdx
  HANDLE v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  unsigned __int64 v19; // rcx
  PVOID Pages; // rax
  char *v21; // rax
  PVOID *v22; // rdi
  __int64 v23; // rsi
  PMDL UnHibernatedMdl; // rax
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  __int16 v29; // ax
  unsigned __int64 v30; // rdx
  __int64 **v31; // r15
  __int64 *i; // rdi
  int v33; // eax
  PVOID *v34; // r14
  __int64 v35; // r12
  __int16 SystemInformation; // [rsp+80h] [rbp+8h] BYREF
  HANDLE BcdObjectHandle; // [rsp+88h] [rbp+10h]
  unsigned __int64 v38; // [rsp+90h] [rbp+18h] BYREF
  HANDLE BcdStoreHandle; // [rsp+98h] [rbp+20h] BYREF

  v38 = 0LL;
  SystemInformation = 0;
  if ( dword_140442FE8 != 5 )
    return 0;
  BcdObjectHandle = 0LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v1 = (char *)MemoryMap;
  qword_140443000 = (ULONG_PTR)MemoryMap;
  PopHiberScratchPages = PopHiberLoaderScratchPages
                       + ((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1C8uLL);
  MmLockPreChargedPagedPool(qword_1404433D0, Length);
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v1 + 3) = xmmword_1404433F0;
  *((_QWORD *)v1 + 25) = qword_1404433E0;
  *((_QWORD *)v1 + 40) = qword_140443430;
  *((_QWORD *)v1 + 27) = qword_140443410;
  *((_QWORD *)v1 + 28) = qword_140443440;
  *((_QWORD *)v1 + 29) = qword_140443438;
  *((_OWORD *)v1 + 2) = xmmword_140443400;
  *((_QWORD *)v1 + 9) = v1 + 64;
  *((_QWORD *)v1 + 8) = v1 + 64;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    v26 = 42;
LABEL_46:
    PopCheckpointSystemSleep(v26);
    goto LABEL_43;
  }
  v4 = (ULONG_PTR *)(v1 + 168);
  DumpStack = IoGetDumpStack(v2, v1 + 168, v3, PopSimulate & 0x10);
  if ( DumpStack < 0 )
  {
    v27 = 43;
    goto LABEL_48;
  }
  v6 = *v4;
  v7 = 0;
  if ( dword_140442FCC < 0 )
  {
    v7 = 0;
    if ( dword_140442FD4 == 2 )
      v7 = 2;
  }
  v8 = v7 | 1;
  v9 = __readcr4();
  v10 = v7 | 9;
  if ( (v9 & 0x1000) == 0 )
    v10 = v8;
  v11 = *((_QWORD *)v1 + 27);
  v1[1] = v10;
  v12 = qword_1404433E8;
  v13 = qword_1404433E8 & 0xFFFFFFFFFFFFF000uLL;
  v14 = qword_1404433E8;
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
    v28 = qword_140443438;
    v29 = qword_140443438;
    *(_QWORD *)v15 = 0LL;
    *(_WORD *)(v15 + 10) = 0;
    *(_DWORD *)(v15 + 40) = 4096;
    *(_WORD *)(v15 + 8) = 8 * (((unsigned __int16)((v29 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v15 + 32) = v28 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v15 + 44) = v28 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 28));
  }
  DumpStack = PopLoadResumeContext(v1);
  if ( DumpStack < 0 )
  {
    v27 = 44;
    goto LABEL_48;
  }
  DumpStack = PopBcdOpen(&BcdStoreHandle);
  if ( DumpStack < 0 )
  {
    v27 = 45;
    goto LABEL_48;
  }
  v16 = BcdStoreHandle;
  DumpStack = PopBcdEstablishResumeObject(BcdStoreHandle);
  if ( DumpStack < 0 )
  {
    PopBcdClose(v16);
    v27 = 46;
    goto LABEL_48;
  }
  DumpStack = PopBcdSetPendingResume(v16);
  BcdCloseObject(BcdObjectHandle);
  if ( DumpStack < 0 )
  {
    PopBcdClose(v16);
    v27 = 47;
    goto LABEL_48;
  }
  BcdForciblyUnloadStore(v16);
  RtlClearAllBits((PRTL_BITMAP)v1 + 2);
  RtlSetAllBits((PRTL_BITMAP)v1 + 3);
  *((_DWORD *)v1 + 112) = PopGetHwConfigurationSignature();
  PopHiberInitializeResources(v1);
  if ( (int)PopGetBitlockerKeyLocation((__int64 *)&v38) >= 0 )
  {
    v30 = v38 >> 12;
    *((_QWORD *)v1 + 39) = v38 >> 12;
    PopDiscardRange((_RTL_BITMAP *)v1, v30, 4u);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v1, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v1, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange((__int64)v1, qword_1404433A8);
  ((void (__fastcall *)(char *))off_1404242E8[0])(v1);
  v17 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
  v18 = v17;
  *((_DWORD *)v1 + 38) = v17;
  if ( *((_QWORD *)v1 + 30) )
  {
    v19 = *((unsigned int *)v1 + 62);
    if ( v19 > v17 )
    {
      *((_DWORD *)v1 + 38) = v19;
      v18 = v19;
    }
  }
  Pages = PopAllocatePages(v18);
  DumpStack = *((_DWORD *)v1 + 47);
  *((_QWORD *)v1 + 18) = Pages;
  if ( DumpStack < 0 )
  {
    v27 = 48;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(*v4 + 280) )
  {
    v31 = (__int64 **)(*(_QWORD *)(*v4 + 272) + 40LL);
    for ( i = *v31; i != (__int64 *)v31; i = (__int64 *)*i )
    {
      v33 = *((_DWORD *)i + 16);
      if ( v33 )
      {
        if ( (v33 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
          PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
          PopCheckpointSystemSleep(49);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
        }
        v34 = (PVOID *)(i + 9);
        v35 = 2LL;
        do
        {
          if ( *v34 )
            PoSetHiberRange(v1, 0x8000u, *v34, *((unsigned int *)i + 16), 0x66756263u);
          ++v34;
          --v35;
        }
        while ( v35 );
      }
    }
  }
  else
  {
    v21 = (char *)PopAllocatePages(16LL);
    *(_QWORD *)(v6 + 8) = v21;
    if ( !v21 )
    {
      DumpStack = *((_DWORD *)v1 + 47);
      v27 = 50;
      goto LABEL_48;
    }
    PoSetHiberRange(v1, 0x8000u, v21 + 0x2000, 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v6 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v6, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
      PopCheckpointSystemSleep(51);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
    }
    v22 = (PVOID *)(v6 + 16);
    v23 = 2LL;
    do
    {
      if ( *v22 )
        PoSetHiberRange(v1, 0x8000u, *v22, *(unsigned int *)(v6 + 112), 0x66756263u);
      ++v22;
      --v23;
    }
    while ( v23 );
  }
  UnHibernatedMdl = PopGenerateUnHibernatedMdl((__int64)v1, (unsigned int)PopHiberScratchPages);
  *((_QWORD *)v1 + 15) = UnHibernatedMdl;
  if ( !UnHibernatedMdl )
  {
    DumpStack = -1073741670;
    v26 = 52;
    goto LABEL_46;
  }
  if ( VslVsmEnabled )
  {
    v1[452] = 1;
    DumpStack = VslAllocateSecureHibernateResources(v1);
    if ( DumpStack >= 0 )
      goto LABEL_33;
    v27 = 53;
LABEL_48:
    PopCheckpointSystemSleep(v27);
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
