/*
 * XREFs of PfFbBufferListInsertInFree @ 0x140098178
 * Callers:
 *     PfFbBufferListFlushStandby @ 0x140098220 (PfFbBufferListFlushStandby.c)
 *     PfFbBufferListAllocateTemporary @ 0x140098AC4 (PfFbBufferListAllocateTemporary.c)
 *     PfTFullEventListAdd @ 0x140123A18 (PfTFullEventListAdd.c)
 *     PfFbBufferListAllocate @ 0x140195E70 (PfFbBufferListAllocate.c)
 *     PfpRepurposeNameLoggingTrace @ 0x14065B094 (PfpRepurposeNameLoggingTrace.c)
 *     PfpFlushEventBuffers @ 0x14065B0D0 (PfpFlushEventBuffers.c)
 *     PfTCleanup @ 0x1408A16E0 (PfTCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PfFbBufferListInsertInFree(_SLIST_ENTRY *RunRef, _SLIST_ENTRY *P, int a3, int a4, int a5)
{
  _SLIST_ENTRY *v7; // r8
  __int64 v8; // rcx
  char *v9; // rcx

  if ( (a4 & 1) != 0 && LOWORD(RunRef[1].Next) + (unsigned int)LOWORD(RunRef[2].Next) >= (int)KeNumberProcessors_0 + 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, -a3);
    ExFreePoolWithTag(P, HIDWORD(RunRef[4].Next));
  }
  else
  {
    v7 = (_SLIST_ENTRY *)((char *)P + a3);
    P[1].Next = RunRef;
    P[2].Next = v7;
    v8 = *((unsigned int *)&RunRef[4].Next + 3);
    *((_DWORD *)&P[2].Next + 2) = 0;
    v9 = (char *)P + v8;
    *((_QWORD *)&P[1].Next + 1) = v9;
    *((_DWORD *)&P[2].Next + 3) = a4;
    memset(v9, 0, (char *)v7 - v9);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[1], P);
  }
  if ( a5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)RunRef);
}
