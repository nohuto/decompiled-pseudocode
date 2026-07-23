/*
 * XREFs of HvlQueryHypervisorProcessorNodeNumber @ 0x1402716C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x14027219C (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall HvlQueryHypervisorProcessorNodeNumber(__int64 a1)
{
  __int64 LpcbByLpIndex; // rax
  _WORD *v2; // r10

  if ( (HvlpFlags & 2) == 0 )
    return 3221225473LL;
  if ( (unsigned int)a1 >= 0x200 )
    return 3221225473LL;
  LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
  if ( !LpcbByLpIndex )
    return 3221225473LL;
  *v2 = *(_WORD *)(LpcbByLpIndex + 12);
  return 0LL;
}
