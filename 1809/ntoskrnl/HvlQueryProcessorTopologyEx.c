/*
 * XREFs of HvlQueryProcessorTopologyEx @ 0x140271860
 * Callers:
 *     HvlQueryProcessorTopology @ 0x140271800 (HvlQueryProcessorTopology.c)
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x14027219C (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall HvlQueryProcessorTopologyEx(__int64 a1, _WORD *a2, _DWORD *a3, __int64 a4, int *a5)
{
  __int64 LpcbByLpIndex; // rax
  _DWORD *v9; // r11
  __int64 v10; // r10
  int v11; // ecx
  int v12; // eax

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( (unsigned int)a1 >= 0x200 )
    return 3221225485LL;
  LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
  v10 = LpcbByLpIndex;
  if ( !LpcbByLpIndex )
    return 3221225485LL;
  if ( a2 )
    *a2 = *(_WORD *)(LpcbByLpIndex + 12);
  if ( a3 )
    *a3 = *(_DWORD *)(LpcbByLpIndex + 16);
  if ( v9 )
    *v9 = *(_DWORD *)(LpcbByLpIndex + 20);
  if ( a5 )
  {
    v11 = *(_DWORD *)(LpcbByLpIndex + 24);
    v12 = -1;
    if ( v11 != -1 )
      v12 = *(_DWORD *)(v10 + 24);
    *a5 = v12;
  }
  return 0LL;
}
