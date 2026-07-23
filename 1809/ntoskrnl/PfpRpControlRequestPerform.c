/*
 * XREFs of PfpRpControlRequestPerform @ 0x14069EDF8
 * Callers:
 *     PfpRpControlRequest @ 0x14069ED40 (PfpRpControlRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     PfpRpControlRequestUpdate @ 0x14069F080 (PfpRpControlRequestUpdate.c)
 *     PfpRpControlRequestReset @ 0x14069F594 (PfpRpControlRequestReset.c)
 */

__int64 __fastcall PfpRpControlRequestPerform(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // ebx

  v2 = a1 + 17;
  if ( !ExAcquireRundownProtection_0(a1 + 17) )
    return (unsigned int)-1073741696;
  if ( *(_WORD *)(a2 + 2) )
  {
    if ( *(_WORD *)(a2 + 2) != 1 )
    {
      v6 = -1073741811;
      goto LABEL_5;
    }
    v5 = PfpRpControlRequestReset(a1);
  }
  else
  {
    v5 = PfpRpControlRequestUpdate(a1, a2);
  }
  v6 = v5;
LABEL_5:
  ExReleaseRundownProtection_0(v2);
  return v6;
}
