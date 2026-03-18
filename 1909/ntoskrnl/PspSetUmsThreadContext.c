/*
 * XREFs of PspSetUmsThreadContext @ 0x1408CCFB0
 * Callers:
 *     PspGetSetContextInternal @ 0x1405E87A0 (PspGetSetContextInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CCA64 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeCopyContextToUch @ 0x140881138 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x1408813A4 (KeCopyContextToUmsContext.c)
 */

__int64 __fastcall PspSetUmsThreadContext(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (*a3 & 2) != 0 )
    return (unsigned int)KeCopyContextToUmsContext(**(_QWORD **)(a1 + 496), a2);
  else
    KeCopyContextToUch(*(_QWORD *)(a1 + 504), a2);
  return v3;
}
