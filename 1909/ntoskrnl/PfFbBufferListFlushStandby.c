/*
 * XREFs of PfFbBufferListFlushStandby @ 0x1400D499C
 * Callers:
 *     PfGetCompletedTrace @ 0x14066AF34 (PfGetCompletedTrace.c)
 *     PfpFlushEventBuffers @ 0x14066D960 (PfpFlushEventBuffers.c)
 *     PfSnEndTrace @ 0x14066F1D4 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     PfFbBufferListInsertInFree @ 0x1400D48F4 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x1401CC5F0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
