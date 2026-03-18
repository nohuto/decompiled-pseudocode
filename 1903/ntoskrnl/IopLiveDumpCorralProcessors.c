/*
 * XREFs of IopLiveDumpCorralProcessors @ 0x1405A8590
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1405A8730 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x14029B55C (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1405A8BC4 (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpLockPages @ 0x14085A3DC (IopLiveDumpLockPages.c)
 */

__int64 __fastcall IopLiveDumpCorralProcessors(char *DeferredContext, __int64 a2)
{
  unsigned __int8 CurrentIrql; // dl
  int v4; // esi
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v7[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v8; // [rsp+40h] [rbp-10h]
  int v9; // [rsp+42h] [rbp-Eh]
  __int16 v10; // [rsp+46h] [rbp-Ah]
  int v11; // [rsp+80h] [rbp+30h] BYREF
  int v12; // [rsp+88h] [rbp+38h] BYREF

  *((_DWORD *)DeferredContext + 2) = 0;
  v9 = 0;
  v10 = 0;
  *((_DWORD *)DeferredContext + 3) = 0;
  *((_DWORD *)DeferredContext + 4) = 0;
  *((_DWORD *)DeferredContext + 5) = 0;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  IopLiveDumpLockPages(DeferredContext, a2);
  Affinity.Reserved[1] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, (PGROUP_AFFINITY)DeferredContext + 6);
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 3) = 1;
  IopLiveDumpTraceSystemQuiesceStart();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  DeferredContext[88] = CurrentIrql;
  KeInitializeDpc((PRKDPC)(DeferredContext + 24), (PKDEFERRED_ROUTINE)IopLiveDumpCorralDpc, DeferredContext);
  DeferredContext[25] = 2;
  v7[1] = (unsigned __int16 *)qword_140572748[0];
  v7[0] = (unsigned __int16 *)KeActiveProcessors;
  v8 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v7) )
  {
    if ( v11 == *((_DWORD *)DeferredContext + 28) )
    {
      _InterlockedIncrement((volatile signed __int32 *)DeferredContext + 4);
    }
    else
    {
      v4 = *((_DWORD *)DeferredContext + 4);
      if ( !*((_QWORD *)DeferredContext + 10) )
        *((_WORD *)DeferredContext + 13) = v11 + 1280;
      KeInsertQueueDpc((PRKDPC)(DeferredContext + 24), 0LL, 0LL);
      v12 = 0;
      while ( v4 == *((_DWORD *)DeferredContext + 4) )
        KeYieldProcessorEx(&v12);
    }
  }
  *((_DWORD *)DeferredContext + 5) = *((_DWORD *)DeferredContext + 4);
  IopLiveDumpInitiateCorralStateChange(DeferredContext, 2LL);
  PoAllProcIntrDisabled = 1;
  result = IopLiveDumpInitiateCorralStateChange(DeferredContext, 3LL);
  *((_DWORD *)DeferredContext + 2) |= 1u;
  return result;
}
