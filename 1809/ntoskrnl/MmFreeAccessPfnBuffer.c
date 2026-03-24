/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x1400E261C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14006D580 (MiTrimOrAgeWorkingSet.c)
 *     MiQueuePageAccessLog @ 0x140088980 (MiQueuePageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1400DFA6C (MiReturnCcAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1400E279C (PfpReturnAccessBuffer.c)
 *     PfTAccessTracingCleanup @ 0x14056598C (PfTAccessTracingCleanup.c)
 *     PfpFlushBuffers @ 0x140669E70 (PfpFlushBuffers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C1060 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall MmFreeAccessPfnBuffer(_QWORD *P, char a2)
{
  void *v3; // rcx

  if ( !*((_DWORD *)P + 2) )
  {
    v3 = (void *)P[7];
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDelete(v3);
      else
        ObfDereferenceObject(v3);
    }
  }
  ExFreePoolWithTag(P, 0);
}
