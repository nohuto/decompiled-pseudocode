/*
 * XREFs of KdInitSystem @ 0x140916140
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x14028C20C (KdEnableDebuggerWithLock.c)
 *     KeEnterKernelDebugger @ 0x1402922D0 (KeEnterKernelDebugger.c)
 *     KiSystemStartup @ 0x140566010 (KiSystemStartup.c)
 *     PopHiberCheckResume @ 0x14056C320 (PopHiberCheckResume.c)
 *     KiSetProcessorSignature @ 0x1405707A8 (KiSetProcessorSignature.c)
 *     KiSetFeatureBits @ 0x1405717EC (KiSetFeatureBits.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitString @ 0x140002070 (RtlInitString.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     DbgLoadImageSymbols @ 0x1400F4CE0 (DbgLoadImageSymbols.c)
 *     MmGetPagedPoolCommitPointer @ 0x14013BCF0 (MmGetPagedPoolCommitPointer.c)
 *     KdDisableDebuggerWithLock @ 0x140193824 (KdDisableDebuggerWithLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _strupr @ 0x140194D10 (_strupr.c)
 *     strncmp @ 0x140194F40 (strncmp.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     atol @ 0x1401950B0 (atol.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     __report_rangecheckfailure @ 0x140268FBC (__report_rangecheckfailure.c)
 *     KdPollBreakIn @ 0x14028CE30 (KdPollBreakIn.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     KdRegisterDebuggerDataBlock @ 0x140916420 (KdRegisterDebuggerDataBlock.c)
 */

char __fastcall KdInitSystem(int a1, __int64 a2)
{
  char v3; // r12
  char v4; // r15
  char v6; // r14
  __int64 v7; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // rcx
  char *v10; // rbp
  char v11; // bl
  char *v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // eax
  const char *v15; // rsi
  char *v16; // rdx
  char v17; // al
  __int64 v18; // rcx
  const char *j; // rcx
  char v20; // al
  const char *v21; // rsi
  __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // ebp
  __int64 *k; // rbx
  CHAR *v26; // r9
  __int64 v27; // rdx
  unsigned int v28; // r8d
  CHAR v29; // al
  __int64 v30; // rcx
  unsigned int i; // edi
  PVOID PoolWithTag; // rax
  PVOID v33; // rbx
  signed __int32 v34[8]; // [rsp+0h] [rbp-178h] BYREF
  STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  CHAR SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

  v3 = 0;
  v4 = 0;
  if ( a1 == -1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 116LL) & 8) != 0 )
      __debugbreak();
  }
  else
  {
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
            _InterlockedOr(v34, 0);
            KdLogBuffer[i] = v33;
          }
        }
      }
      KdpLoaderDebuggerBlock = 0LL;
      return 1;
    }
    if ( (_BYTE)KdDebuggerEnabled )
      goto LABEL_32;
    KdpDebugRoutineSelect = 0;
    KdBreakAfterSymbolLoad = 0;
    if ( !KdPitchDebugger || (v6 = 1, !KdLocalDebugEnabled) )
      v6 = 0;
    if ( KdDebugDevice && *(_DWORD *)(KdDebugDevice + 236) == 3 )
      KdTransportMaxPacketSize = 1152;
    if ( !KdpDebuggerDataListHead )
    {
      *((_QWORD *)&KdpContext + 1) = KdDebugDevice;
      qword_1403FFBF0 = (__int64)MmGetPagedPoolCommitPointer();
      KdpPowerSpinLock = 0LL;
      qword_140431958 = (__int64)&KdpPowerListHead;
      KdpPowerListHead = (__int64)&KdpPowerListHead;
      qword_140431948 = (__int64)&KdpDebuggerDataListHead;
      KdpDebuggerDataListHead = (__int64)&KdpDebuggerDataListHead;
      KdRegisterDebuggerDataBlock(v7, &KdDebuggerDataBlock);
      WORD3(KdVersionBlock) |= 1u;
      *((_QWORD *)&xmmword_140402F50 + 1) = &PsLoadedModuleList;
      LODWORD(KdVersionBlock) = 1164115983;
      *(_WORD *)((char *)&KdVersionBlock + 11) = 13059;
      qword_140402F60 = (__int64)&KdpDebuggerDataListHead;
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
      off_1403FFD58 = &KdpLoaderDebuggerBlock;
      KdpLoaderDebuggerBlock = a2 + 16;
      v10 = *(char **)(a2 + 216);
      *(_QWORD *)&xmmword_140402F50 = v9;
      if ( v10 )
      {
        strupr(v10);
        LODWORD(KdPrintBufferAllocateSize) = 0;
        v11 = 0;
        v12 = strstr(v10, "DBGPRINT_LOG_SIZE=");
        if ( v12 )
        {
          v14 = (atol(v12 + 18) + 4095) & 0xFFFFF000;
          LODWORD(KdPrintBufferAllocateSize) = v14;
          if ( v14 > 0x1000000 )
          {
            LODWORD(KdPrintBufferAllocateSize) = 0x1000000;
            v14 = 0x1000000;
          }
          if ( v14 <= 0x1000 )
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
          v6 = 1;
          KdPageDebuggerSection = 1;
          LOBYTE(KdDebuggerNotPresent) = 1;
          KdLocalDebugEnabled = 1;
          KdpBootedNodebug = 0;
        }
        else
        {
          v15 = v10;
          do
          {
            v16 = strstr(v15, " DEBUG=");
            if ( !v16 )
            {
              v16 = strstr(v15, " DEBUG");
              if ( !v16 )
                break;
            }
            v15 = v16 + 6;
            v17 = v16[6];
            if ( (unsigned __int8)v17 <= 0x3Du )
            {
              v18 = 0x2000000100000001LL;
              if ( _bittest64(&v18, v17) )
              {
                KdpBootedNodebug = 0;
                v11 = 1;
                if ( v16[6] == 61 )
                {
                  for ( j = v16 + 7; ; j = v21 + 1 )
                  {
                    v20 = *j;
                    v21 = j;
                    while ( v20 )
                    {
                      if ( (unsigned __int8)v20 <= 0x2Cu )
                      {
                        v22 = 0x100100000200LL;
                        if ( _bittest64(&v22, v20) )
                          break;
                      }
                      v20 = *++v21;
                    }
                    v23 = (_DWORD)v21 - (_DWORD)j;
                    if ( (_DWORD)v21 == (_DWORD)j )
                      break;
                    if ( v23 == 10 )
                    {
                      if ( !strncmp(j, "AUTOENABLE", 0xAuLL) )
                      {
                        v3 = 1;
                        v4 = 0;
                        KdAutoEnableOnEvent = 1;
                      }
                    }
                    else if ( v23 == 7 )
                    {
                      if ( !strncmp(j, "DISABLE", 7uLL) )
                      {
                        v3 = 1;
                        KdAutoEnableOnEvent = 0;
                        v4 = 1;
                      }
                    }
                    else if ( v23 == 6 && !strncmp(j, "NOUMEX", 6uLL) )
                    {
                      KdIgnoreUmExceptions = 1;
                    }
                    if ( *v21 != 44 )
                      break;
                  }
                }
                break;
              }
            }
          }
          while ( v16 != (char *)-6LL );
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
      *(_QWORD *)&xmmword_140402F50 = PsNtosImageBase;
    }
    Base = (PVOID)xmmword_140402F50;
    if ( !v6 )
    {
      if ( a2 && *(_DWORD *)(a2 + 12) < 2u )
        v11 = 0;
      if ( !v11 )
      {
        LOBYTE(KdDebuggerNotPresent) = 1;
        goto LABEL_32;
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
        goto LABEL_32;
    }
    if ( KdEventLoggingEnabled && !(_BYTE)KdDebuggerEnabled )
    {
LABEL_32:
      if ( a2 )
      {
        v13 = *(_QWORD *)(a2 + 240);
        if ( v13 )
          memset((void *)(v13 + 2424), 0, 0x20uLL);
      }
      return 1;
    }
    KdPitchDebugger = 0;
    if ( v3 )
    {
      KdDisableDebuggerWithLock();
      KdBlockEnable = v4;
      goto LABEL_32;
    }
    if ( a2 )
    {
      v24 = 0;
      for ( k = *(__int64 **)(a2 + 16); k != (__int64 *)(a2 + 16); ++v24 )
      {
        if ( v24 >= 3 )
          break;
        v26 = (CHAR *)k[10];
        LODWORD(v27) = 0;
        v28 = *((unsigned __int16 *)k + 36) >> 1;
        if ( v28 >= 0x100 )
          v28 = 255;
        do
        {
          v29 = *v26;
          v26 += 2;
          v30 = (unsigned int)v27;
          v27 = (unsigned int)(v27 + 1);
          SourceString[v30] = v29;
        }
        while ( (unsigned int)v27 < v28 );
        if ( (unsigned int)v27 >= 0x100uLL )
          _report_rangecheckfailure();
        SourceString[v27] = 0;
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
      goto LABEL_32;
    }
  }
  return 1;
}
