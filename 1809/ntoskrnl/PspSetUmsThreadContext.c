/*
 * XREFs of PspSetUmsThreadContext @ 0x14088F31C
 * Callers:
 *     PspGetSetContextInternal @ 0x14061F940 (PspGetSetContextInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14088EDF0 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeCopyContextToUch @ 0x1408465F8 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x140846864 (KeCopyContextToUmsContext.c)
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
