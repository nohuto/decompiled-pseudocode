/*
 * XREFs of IopLiveDumpCorralProcessors @ 0x140579704
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x140579890 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x1402863EC (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140579D24 (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpLockPages @ 0x140821570 (IopLiveDumpLockPages.c)
 */

__int64 __fastcall IopLiveDumpCorralProcessors(char *DeferredContext)
{
  unsigned __int8 CurrentIrql; // dl
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v8[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v9; // [rsp+40h] [rbp-10h]
  int v10; // [rsp+80h] [rbp+30h] BYREF
  int v11; // [rsp+88h] [rbp+38h] BYREF

  *((_DWORD *)DeferredContext + 2) = 0;
  *((_DWORD *)DeferredContext + 3) = 0;
  *((_DWORD *)DeferredContext + 4) = 0;
  *((_DWORD *)DeferredContext + 5) = 0;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  IopLiveDumpLockPages();
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
  v8[1] = (unsigned __int16 *)qword_1405426A8[0];
  v8[0] = (unsigned __int16 *)KeActiveProcessors;
  v9 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v8) )
  {
    if ( v10 == *((_DWORD *)DeferredContext + 28) )
    {
      _InterlockedIncrement((volatile signed __int32 *)DeferredContext + 4);
    }
    else
    {
      v3 = *((_DWORD *)DeferredContext + 4);
      if ( !*((_QWORD *)DeferredContext + 10) )
        *((_WORD *)DeferredContext + 13) = v10 + 1280;
      KeInsertQueueDpc((PRKDPC)(DeferredContext + 24), 0LL, 0LL);
      v11 = 0;
      while ( v3 == *((_DWORD *)DeferredContext + 4) )
        KeYieldProcessorEx(&v11, v4, v5);
    }
  }
  *((_DWORD *)DeferredContext + 5) = *((_DWORD *)DeferredContext + 4);
  IopLiveDumpInitiateCorralStateChange(DeferredContext, 2LL);
  PoAllProcIntrDisabled = 1;
  result = IopLiveDumpInitiateCorralStateChange(DeferredContext, 3LL);
  *((_DWORD *)DeferredContext + 2) |= 1u;
  return result;
}
