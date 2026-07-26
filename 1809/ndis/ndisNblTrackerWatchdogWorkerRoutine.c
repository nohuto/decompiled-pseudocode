/*
 * XREFs of ndisNblTrackerWatchdogWorkerRoutine @ 0x1C00F6CF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisMLiveBugCheck @ 0x1C005036C (ndisMLiveBugCheck.c)
 */

void __fastcall ndisNblTrackerWatchdogWorkerRoutine(_DWORD *P)
{
  int v1; // eax
  __int64 v3; // rdi

  v1 = P[2];
  if ( !v1 || (unsigned int)(v1 - 3) <= 2 )
  {
    v3 = *(_QWORD *)P;
    if ( (_BYTE)KdDebuggerNotPresent )
      ndisMLiveBugCheck(v3, 48LL, v3, *(_QWORD *)(v3 + 3864), 0LL);
    ndisDereferenceMiniport(v3, 0x68u);
  }
  ExFreePoolWithTag(P, 0);
}
