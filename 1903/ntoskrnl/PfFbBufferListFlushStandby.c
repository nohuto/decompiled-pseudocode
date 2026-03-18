/*
 * XREFs of PfFbBufferListFlushStandby @ 0x140098220
 * Callers:
 *     PfGetCompletedTrace @ 0x140657F14 (PfGetCompletedTrace.c)
 *     PfpFlushEventBuffers @ 0x14065B0D0 (PfpFlushEventBuffers.c)
 *     PfSnEndTrace @ 0x14065CF74 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     PfFbBufferListInsertInFree @ 0x140098178 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x1401CBA70 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
