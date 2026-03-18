/*
 * XREFs of PfFbBufferListFlushStandby @ 0x1400E2708
 * Callers:
 *     PfGetCompletedTrace @ 0x14064B654 (PfGetCompletedTrace.c)
 *     PfSnEndTrace @ 0x140669374 (PfSnEndTrace.c)
 *     PfpFlushEventBuffers @ 0x140669B30 (PfpFlushEventBuffers.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     PfFbBufferListInsertInFree @ 0x1400E2660 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x1401C5430 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

void __fastcall PfFbBufferListFlushStandby(_SLIST_ENTRY *RunRef)
{
  PSLIST_ENTRY v2; // rdi
  PSLIST_ENTRY v3; // rsi

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)RunRef) )
  {
    v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)&RunRef[2]);
    while ( v2 )
    {
      v3 = v2;
      v2 = v2->Next;
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)RunRef) )
        ((void (__fastcall *)(PSLIST_ENTRY))RunRef[6].Next)(v3);
      else
        PfFbBufferListInsertInFree(RunRef, v3, LODWORD(v3[2].Next) - (_DWORD)v3, *((_DWORD *)&v3[2].Next + 3), 0);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)RunRef);
  }
}
