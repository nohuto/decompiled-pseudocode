/*
 * XREFs of PfSnEndProcessTrace @ 0x14066E9E4
 * Callers:
 *     PspExitProcess @ 0x140652A2C (PspExitProcess.c)
 *     PfSnOperationProcess @ 0x1406F09C4 (PfSnOperationProcess.c)
 *     PfSnFailProcessTrace @ 0x1406FA0D4 (PfSnFailProcessTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     PfSnReferenceProcessTrace @ 0x1400D1DC0 (PfSnReferenceProcessTrace.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 */

__int64 __fastcall PfSnEndProcessTrace(__int64 a1, signed __int32 a2, const void *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rax
  unsigned int v6; // ebx
  struct _EX_RUNDOWN_REF *v7; // rdi

  v5 = PfSnReferenceProcessTrace(a1);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    if ( !a3 || !memcmp(a3, &v5[3], 0x40uLL) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)&v7[50], a2, 0) )
        v6 = -1073741431;
      else
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&v7[46], DelayedWorkQueue);
    }
    else
    {
      v6 = -1073741198;
    }
    ExReleaseRundownProtection_0(v7 + 45);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v6;
}
