/*
 * XREFs of EtwpKernelTraceRundown @ 0x14070999C
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140709638 (EtwpUpdateGroupMasks.c)
 *     EtwKernelMemoryRundown @ 0x1408F34B0 (EtwKernelMemoryRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x1408FB084 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 *     EtwpOpenLogger @ 0x1400C8C44 (EtwpOpenLogger.c)
 *     IoSetThreadHardErrorMode @ 0x1400EA080 (IoSetThreadHardErrorMode.c)
 *     EtwpCloseLogger @ 0x140147E3C (EtwpCloseLogger.c)
 *     EtwpProcessThreadImageRundown @ 0x140709534 (EtwpProcessThreadImageRundown.c)
 *     WmiTraceRundownNotify @ 0x14071DCA0 (WmiTraceRundownNotify.c)
 *     CmEtwRunDown @ 0x1408258C8 (CmEtwRunDown.c)
 *     MmIdentifyPhysicalMemory @ 0x140889988 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x14088B3AC (MmPerfLogSessionRundown.c)
 *     MmLogSystemShareablePfnInfo @ 0x140897A80 (MmLogSystemShareablePfnInfo.c)
 *     MmLogQueryCombineStats @ 0x14089B300 (MmLogQueryCombineStats.c)
 *     EtwpClockSourceRunDown @ 0x1408FAE04 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1408FAFA0 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogMemInfoRundown @ 0x1408FB0F8 (EtwpLogMemInfoRundown.c)
 *     EtwpLogRefSetAutoMark @ 0x1408FB2F8 (EtwpLogRefSetAutoMark.c)
 *     EtwpObjectTypeRundown @ 0x1408FB67C (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1408FB7DC (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1408FBD6C (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1408FC1E4 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1408FC38C (EtwpSpinLockConfigRunDown.c)
 */

BOOLEAN __fastcall EtwpKernelTraceRundown(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned int **a5,
        unsigned int a6)
{
  unsigned int v8; // ebp
  BOOLEAN v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rdi
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  int v21; // eax
  char v22[56]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h] BYREF

  v23 = a3;
  v22[0] = 0;
  v8 = a3;
  v10 = IoSetThreadHardErrorMode(0);
  v11 = EtwpOpenLogger(v8, a2, 0, v22);
  v15 = v11;
  if ( v11 )
  {
    if ( a1 )
    {
      if ( (*(_DWORD *)(a1 + 4) & 0x20) != 0 && !a4 )
        EtwpLogRefSetAutoMark(0LL, v11);
      v16 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0xC004) != 0
        || (*(_DWORD *)(a1 + 16) & 0x40) != 0
        || (v16 & 1) != 0
        || (v16 & 2) != 0
        || (*(_DWORD *)(a1 + 4) & 0x8000000) != 0 )
      {
        EtwpProcessThreadImageRundown(a1, v15, a4, a5, a6);
        v16 = *(_DWORD *)a1;
      }
      v17 = v16 & 0x20000;
      if ( (_DWORD)v17 || (*(_DWORD *)(a1 + 8) & 0x1000000) != 0 )
      {
        LOBYTE(v14) = *(_BYTE *)(a1 + 11) & 1;
        LOBYTE(v13) = (_DWORD)v17 != 0;
        CmEtwRunDown(a2, v8, v13, v14, a4);
      }
      v18 = *(_DWORD *)(a1 + 4);
      if ( (v18 & 2) != 0 )
      {
        LOBYTE(v13) = 1;
        LOBYTE(v12) = a4;
        EtwpSampledProfileRunDown(v15, v12, v13);
        v18 = *(_DWORD *)(a1 + 4);
      }
      if ( (v18 & 0x400) != 0 )
      {
        LOBYTE(v12) = a4;
        EtwpSampledProfileRunDown(v15, v12, 0LL);
        v18 = *(_DWORD *)(a1 + 4);
      }
      if ( (v18 & 0x10000) != 0 )
      {
        LOBYTE(v12) = a4;
        EtwpSpinLockConfigRunDown(v15, v12);
        v18 = *(_DWORD *)(a1 + 4);
      }
      if ( (v18 & 0x20000) != 0 )
      {
        LOBYTE(v12) = a4;
        EtwpExecutiveResourceConfigRunDown(v15, v12);
        v18 = *(_DWORD *)(a1 + 4);
      }
      if ( (v18 & 0x400008) != 0 )
      {
        MmPerfLogSessionRundown(a2, v8, a4);
        v18 = *(_DWORD *)(a1 + 4);
      }
      if ( (v18 & 0x8000049) != 0 )
      {
        LOBYTE(v12) = a4;
        EtwpPoolRunDown(v15, v12);
      }
      if ( (*(_DWORD *)(a1 + 8) & 0x100000) != 0 )
      {
        LOBYTE(v12) = a4;
        EtwpClockSourceRunDown(v15, v12);
      }
      v19 = *(_DWORD *)(a1 + 4);
      if ( a4 )
      {
        if ( (v19 & 0x8000000) != 0 )
        {
          MmIdentifyPhysicalMemory(a2, v8, 645LL, 1LL);
          MmLogSystemShareablePfnInfo(a2, v8);
          v19 = *(_DWORD *)(a1 + 4);
        }
        if ( (v19 & 0x20) != 0 )
        {
          LOBYTE(v17) = a4;
          EtwpLogRefSetAutoMark(v17, v15);
        }
      }
      else
      {
        if ( (v19 & 0x8000000) != 0 )
        {
          MmLogSystemShareablePfnInfo(a2, v8);
          MmIdentifyPhysicalMemory(a2, v8, 645LL, 1LL);
          v19 = *(_DWORD *)(a1 + 4);
        }
        if ( (v19 & 9) != 0 )
        {
          EtwpLogMemInfoRundown(v15);
          MmIdentifyPhysicalMemory(a2, v8, 547LL, 0LL);
          v19 = *(_DWORD *)(a1 + 4);
        }
        if ( (v19 & 0x80000) != 0 )
        {
          MmLogQueryCombineStats(a2, &v23, 0LL);
          v8 = v23;
        }
        if ( (*(_DWORD *)a1 & 0x200) != 0 )
          WmiTraceRundownNotify(**(_QWORD **)(v15 + 1080), v8);
        v21 = *(_DWORD *)(a1 + 16);
        if ( (v21 & 0x8000) != 0 )
        {
          PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmTracePerfIdleRundown, 0LL, 0LL);
          v21 = *(_DWORD *)(a1 + 16);
        }
        if ( (v21 & 0x40) != 0 || (v21 & 0x80u) != 0 )
          EtwpObjectTypeRundown(v15, 0LL);
        if ( (*(_DWORD *)(a1 + 8) & 0x10000) != 0 )
          EtwpProcessorRundown(v15);
      }
    }
    EtwpCloseLogger(v8, a2, v22[0]);
  }
  return IoSetThreadHardErrorMode(v10);
}
