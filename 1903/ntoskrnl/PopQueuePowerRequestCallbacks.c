/*
 * XREFs of PopQueuePowerRequestCallbacks @ 0x1400ED0B8
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400EC750 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopQueuePowerRequestCallback @ 0x1400ED07C (PopQueuePowerRequestCallback.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void __fastcall PopQueuePowerRequestCallbacks(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  if ( !*(_BYTE *)(a1 + 78) )
  {
    v4 = 0LL;
    while ( !*(_BYTE *)(a1 + v4 + 72) )
    {
      if ( ++v4 >= 6 )
        return;
    }
    ObfReferenceObjectWithTag((PVOID)a1, 0x72506F50u);
    v5 = PopPowerRequestCallbacks;
    v6 = (_QWORD *)(a1 + 56);
    if ( *(__int64 **)(PopPowerRequestCallbacks + 8) != &PopPowerRequestCallbacks )
      __fastfail(3u);
    *v6 = PopPowerRequestCallbacks;
    *(_QWORD *)(a1 + 64) = &PopPowerRequestCallbacks;
    *(_QWORD *)(v5 + 8) = v6;
    PopPowerRequestCallbacks = a1 + 56;
    *(_BYTE *)(a1 + 78) = 1;
    if ( a2 )
    {
      if ( !PopCallbackWorkItemScheduled )
      {
        PopCallbackWorkItemScheduled = 1;
        ExQueueWorkItem(&PopCallbackWorkItem, CriticalWorkQueue);
      }
    }
  }
}
