/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x1400D4890
 * Callers:
 *     MiEmptyPageAccessLog @ 0x14001CD20 (MiEmptyPageAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 *     MiReturnCcAccessLog @ 0x1400901DC (MiReturnCcAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1400D4A10 (PfpReturnAccessBuffer.c)
 *     MiQueuePageAccessLog @ 0x14013AEF4 (MiQueuePageAccessLog.c)
 *     PfTAccessTracingCleanup @ 0x14059E1E4 (PfTAccessTracingCleanup.c)
 *     PfpFlushBuffers @ 0x14066DCC0 (PfpFlushBuffers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
