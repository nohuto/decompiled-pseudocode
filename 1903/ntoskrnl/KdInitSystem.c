/*
 * XREFs of KdInitSystem @ 0x140953150
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x1402A20AC (KdEnableDebuggerWithLock.c)
 *     KeEnterKernelDebugger @ 0x1402A8A30 (KeEnterKernelDebugger.c)
 *     KiSystemStartup @ 0x140595010 (KiSystemStartup.c)
 *     PopHiberCheckResume @ 0x14059B630 (PopHiberCheckResume.c)
 *     KiSetFeatureBits @ 0x1405A09C4 (KiSetFeatureBits.c)
 *     KiSetProcessorSignature @ 0x1405A2324 (KiSetProcessorSignature.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     RtlInitString @ 0x1400EBCC0 (RtlInitString.c)
 *     MmGetPagedPoolCommitPointer @ 0x14013D7F4 (MmGetPagedPoolCommitPointer.c)
 *     DbgLoadImageSymbols @ 0x140154DB0 (DbgLoadImageSymbols.c)
 *     KdDisableDebuggerWithLock @ 0x14019DCB4 (KdDisableDebuggerWithLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _strupr @ 0x14019F2D0 (_strupr.c)
 *     strncmp @ 0x14019F550 (strncmp.c)
 *     strstr @ 0x14019F610 (strstr.c)
 *     atol @ 0x14019F6C0 (atol.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     __report_rangecheckfailure @ 0x14027BD8C (__report_rangecheckfailure.c)
 *     KdPollBreakIn @ 0x1402A2CE0 (KdPollBreakIn.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     KdRegisterDebuggerDataBlock @ 0x1409538B8 (KdRegisterDebuggerDataBlock.c)
 */

char __fastcall KdInitSystem(int a1, __int64 a2)
{
  char v3; // r12
  char v4; // r15
  char v5; // r14
  __int64 v6; // rcx
  __int16 v7; // ax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // rcx
  char *v10; // rbp
  char v11; // bl
  char *v12; // rax
  unsigned int v13; // eax
  const char *v14; // rsi
  char *v15; // rdx
  char v16; // al
  __int64 v17; // rcx
  const char *j; // rcx
  char v19; // al
  const char *v20; // rsi
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // ebp
  __int64 *k; // rbx
  __int64 v25; // rdx
  CHAR *v26; // r9
  unsigned int v27; // r8d
  CHAR v28; // al
  __int64 v29; // rcx
  __int64 v30; // rdi
  unsigned int i; // edi
  PVOID PoolWithTag; // rax
  PVOID v33; // rbx
  signed __int32 v35[8]; // [rsp+0h] [rbp-178h] BYREF
  STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  CHAR SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

  v3 = 0;
  v4 = 0;
  if ( a1 == -1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 116LL) & 8) != 0 )
      __debugbreak();
    return 1;
  }
  if ( a1 )
  {
    KeQueryPerformanceCounter(&KdPerformanceCounterRate);
    if ( !KdPitchDebugger )
    {
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6F49644Bu);
        v33 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1000uLL);
          _InterlockedOr(v35, 0);
          KdLogBuffer[i] = v33;
        }
      }
    }
    KdpLoaderDebuggerBlock = 0LL;
  }
  else
  {
    if ( (_BYTE)KdDebuggerEnabled )
      goto LABEL_91;
    KdpDebugRoutineSelect = 0;
    KdBreakAfterSymbolLoad = 0;
    if ( !KdPitchDebugger || (v5 = 1, !KdLocalDebugEnabled) )
      v5 = 0;
    if ( KdDebugDevice && *(_DWORD *)(KdDebugDevice + 236) == 3 )
      KdTransportMaxPacketSize = 1152;
    if ( !KdpDebuggerDataListHead )
    {
      *((_QWORD *)&KdpContext + 1) = KdDebugDevice;
      qword_140424BF0 = (__int64)MmGetPagedPoolCommitPointer();
      KdpPowerSpinLock = 0LL;
      qword_14045C548 = (__int64)&KdpPowerListHead;
      KdpPowerListHead = (__int64)&KdpPowerListHead;
      qword_14045C538 = (__int64)&KdpDebuggerDataListHead;
      KdpDebuggerDataListHead = (__int64)&KdpDebuggerDataListHead;
      KdRegisterDebuggerDataBlock(v6, &KdDebuggerDataBlock);
      v7 = 18363;
      if ( KernelVersionBump != 1 )
        v7 = 18362;
      WORD3(KdVersionBlock) |= 1u;
      WORD1(KdVersionBlock) = v7;
      LOWORD(KdVersionBlock) = 15;
      *((_QWORD *)&xmmword_1404283C8 + 1) = &PsLoadedModuleList;
      *(_WORD *)((char *)&KdVersionBlock + 11) = 13059;
      qword_1404283D8 = (__int64)&KdpDebuggerDataListHead;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !CurrentPrcb->Context )
    {
      CurrentPrcb->ContextFlagsInit = 1048587;
      CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
    }
    if ( a2 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL);
      off_140424D58 = &KdpLoaderDebuggerBlock;
      KdpLoaderDebuggerBlock = a2 + 16;
      v10 = *(char **)(a2 + 216);
      *(_QWORD *)&xmmword_1404283C8 = v9;
      if ( v10 )
      {
        strupr(v10);
        LODWORD(KdPrintBufferAllocateSize) = 0;
        v11 = 0;
        v12 = strstr(v10, "DBGPRINT_LOG_SIZE=");
        if ( v12 )
        {
          v13 = (atol(v12 + 18) + 4095) & 0xFFFFF000;
          LODWORD(KdPrintBufferAllocateSize) = v13;
          if ( v13 > 0x1000000 )
          {
            LODWORD(KdPrintBufferAllocateSize) = 0x1000000;
            v13 = 0x1000000;
          }
          if ( v13 <= 0x1000 )
            LODWORD(KdPrintBufferAllocateSize) = 0;
        }
        if ( strstr(v10, "CRASHDEBUG") )
        {
          KdPitchDebugger = 0;
          KdpBootedNodebug = 0;
        }
        else if ( strstr(v10, "NODEBUG") )
        {
          KdPitchDebugger = 1;
          KdPageDebuggerSection = 1;
          KdpBootedNodebug = 1;
        }
        else if ( strstr(v10, "DEBUGPORT=LOCAL") )
        {
          KdPitchDebugger = 1;
          v5 = 1;
          KdPageDebuggerSection = 1;
          LOBYTE(KdDebuggerNotPresent) = 1;
          KdLocalDebugEnabled = 1;
          KdpBootedNodebug = 0;
        }
        else
        {
          v14 = v10;
          do
          {
            v15 = strstr(v14, " DEBUG=");
            if ( !v15 )
            {
              v15 = strstr(v14, " DEBUG");
              if ( !v15 )
                break;
            }
            v14 = v15 + 6;
            v16 = v15[6];
            if ( (unsigned __int8)v16 <= 0x3Du )
            {
              v17 = 0x2000000100000001LL;
              if ( _bittest64(&v17, v16) )
              {
                KdpBootedNodebug = 0;
                v11 = 1;
                if ( v15[6] == 61 )
                {
                  for ( j = v15 + 7; ; j = v20 + 1 )
                  {
                    v19 = *j;
                    v20 = j;
                    while ( v19 )
                    {
                      if ( (unsigned __int8)v19 <= 0x2Cu )
                      {
                        v21 = 0x100100000200LL;
                        if ( _bittest64(&v21, v19) )
                          break;
                      }
                      v19 = *++v20;
                    }
                    v22 = (_DWORD)v20 - (_DWORD)j;
                    if ( (_DWORD)v20 == (_DWORD)j )
                      break;
                    if ( v22 == 10 )
                    {
                      if ( !strncmp(j, "AUTOENABLE", 0xAuLL) )
                      {
                        v3 = 1;
                        v4 = 0;
                        KdAutoEnableOnEvent = 1;
                      }
                    }
                    else if ( v22 == 7 )
                    {
                      if ( !strncmp(j, "DISABLE", 7uLL) )
                      {
                        v3 = 1;
                        KdAutoEnableOnEvent = 0;
                        v4 = 1;
                      }
                    }
                    else if ( v22 == 6 && !strncmp(j, "NOUMEX", 6uLL) )
                    {
                      KdIgnoreUmExceptions = 1;
                    }
                    if ( *v20 != 44 )
                      break;
                  }
                }
                break;
              }
            }
          }
          while ( v15 != (char *)-6LL );
        }
        if ( strstr(v10, "NOEVENT") )
        {
          KdEventLoggingEnabled = 0;
        }
        else if ( strstr(v10, "EVENT") )
        {
          KdEventLoggingEnabled = 1;
          v11 = 1;
          KdPageDebuggerSection = 0;
        }
      }
      else
      {
        KdPitchDebugger = 1;
        v11 = 0;
        KdPageDebuggerSection = 1;
      }
    }
    else
    {
      v11 = 1;
      *(_QWORD *)&xmmword_1404283C8 = PsNtosImageBase;
    }
    Base = (PVOID)xmmword_1404283C8;
    if ( !v5 )
    {
      if ( a2 && *(_DWORD *)(a2 + 12) != 1 )
        v11 = 0;
      if ( !v11 )
      {
        LOBYTE(KdDebuggerNotPresent) = 1;
        goto LABEL_91;
      }
      if ( (int)KdInitialize(0LL, a2, &KdpContext) < 0 )
      {
        KdPitchDebugger = 0;
        v11 = 0;
        LOBYTE(KdDebuggerNotPresent) = 1;
        KdLocalDebugEnabled = 1;
      }
      else
      {
        KdpDebugRoutineSelect = 1;
      }
    }
    if ( !KdpDebuggerStructuresInitialized )
    {
      BYTE4(KdpContext) = 0;
      LODWORD(KdpContext) = 20;
      KeInitializeDpc(&KdpTimeSlipDpc, KdpTimeSlipDpcRoutine, 0LL);
      KeInitializeTimerEx(&KdpTimeSlipTimer, NotificationTimer);
      KdpTimeSlipWorkItem.Parameter = 0LL;
      KdpTimeSlipWorkItem.WorkerRoutine = (void (__fastcall *)(void *))KdpTimeSlipWork;
      KdpTimeSlipWorkItem.List.Flink = 0LL;
      KdpDebuggerStructuresInitialized = 1;
    }
    KdTimerStart = 0LL;
    if ( KdEventLoggingEnabled && KdpBootedNodebug )
    {
      KdPitchDebugger = 1;
      KdEventLoggingPresent = v11;
      LOBYTE(KdDebuggerNotPresent) = 1;
      KdLocalDebugEnabled = 0;
    }
    else
    {
      LOBYTE(KdDebuggerEnabled) = 1;
      MEMORY[0xFFFFF780000002D4] = 1;
      if ( KdLocalDebugEnabled )
        goto LABEL_91;
    }
    if ( KdEventLoggingEnabled && !(_BYTE)KdDebuggerEnabled )
    {
LABEL_91:
      if ( a2 )
      {
        v30 = *(_QWORD *)(a2 + 240);
        if ( v30 )
          memset((void *)(v30 + 2448), 0, 0x20uLL);
      }
      return 1;
    }
    KdPitchDebugger = 0;
    if ( v3 )
    {
      KdDisableDebuggerWithLock();
      KdBlockEnable = v4;
      goto LABEL_91;
    }
    if ( a2 )
    {
      v23 = 0;
      for ( k = *(__int64 **)(a2 + 16); k != (__int64 *)(a2 + 16); ++v23 )
      {
        if ( v23 >= 3 )
          break;
        LODWORD(v25) = 0;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        v26 = (CHAR *)k[10];
        v27 = *((unsigned __int16 *)k + 36) >> 1;
        if ( v27 >= 0x100 )
          v27 = 255;
        do
        {
          v28 = *v26;
          v26 += 2;
          v29 = (unsigned int)v25;
          v25 = (unsigned int)(v25 + 1);
          SourceString[v29] = v28;
        }
        while ( (unsigned int)v25 < v27 );
        if ( (unsigned int)v25 >= 0x100uLL )
          _report_rangecheckfailure();
        SourceString[v25] = 0;
        RtlInitString(&DestinationString, SourceString);
        DbgLoadImageSymbols(&DestinationString, (PVOID)k[6], 0xFFFFFFFFuLL);
        k = (__int64 *)*k;
      }
    }
    else
    {
      DbgLoadImageSymbols(0LL, Base, 0xFFFFFFFFuLL);
    }
    if ( a2 )
    {
      KdBreakAfterSymbolLoad = KdPollBreakIn();
      goto LABEL_91;
    }
  }
  return 1;
}
