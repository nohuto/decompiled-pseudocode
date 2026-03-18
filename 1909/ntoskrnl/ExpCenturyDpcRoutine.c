/*
 * XREFs of ExpCenturyDpcRoutine @ 0x140337CF0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x1401A0030 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine9 @ 0x1401CEBF0 (KiCustomAccessRoutine9.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall ExpCenturyDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v8[82]; // [rsp+0h] [rbp-168h] BYREF
  _DWORD *v9; // [rsp+148h] [rbp-20h]

  v9 = v8;
  memset(&v8[32], 0, 0x62uLL);
  if ( (__int64)DeferredContext >> 47 != -1 && (__int64)DeferredContext >> 47 != 0 )
  {
    v8[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v8[54] + 2) = SystemArgument1;
    *(_QWORD *)((char *)&v8[52] + 2) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v8[34] + 2) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine9((unsigned int *)DeferredContext);
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)DeferredContext) == 1 )
    ExQueueWorkItem(&ExpCenturyWorkItem, DelayedWorkQueue);
}
