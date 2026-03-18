/*
 * XREFs of PspSetUmsThreadContext @ 0x1408CD6D0
 * Callers:
 *     PspGetSetContextInternal @ 0x1405E7FD0 (PspGetSetContextInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CD184 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeCopyContextToUch @ 0x140881A38 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x140881CA4 (KeCopyContextToUmsContext.c)
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
