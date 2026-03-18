/*
 * XREFs of PpmParkComputeDiff @ 0x1402F89BC
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14011F5C0 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeInitializeAffinityEx @ 0x1400BE1B0 (KeInitializeAffinityEx.c)
 *     KeAddGroupAffinityEx @ 0x1402A4D70 (KeAddGroupAffinityEx.c)
 *     KeXorAffinityEx @ 0x1402A4F58 (KeXorAffinityEx.c)
 */

__int64 PpmParkComputeDiff()
{
  __int64 v0; // rdi
  __int64 v1; // rbx

  KeInitializeAffinityEx(PpmPerfNewCoreParkingMask);
  KeInitializeAffinityEx(PpmParkNewSoftParkingMask);
  if ( PpmParkNumNodes )
  {
    v0 = (unsigned int)PpmParkNumNodes;
    v1 = PpmParkNodes + 4;
    do
    {
      KeAddGroupAffinityEx(PpmPerfNewCoreParkingMask, *(_WORD *)v1, *(_QWORD *)(v1 + 28));
      if ( PoSoftParkingAllowed )
        KeAddGroupAffinityEx(PpmParkNewSoftParkingMask, *(_WORD *)v1, *(_QWORD *)(v1 + 44));
      v1 += 272LL;
      --v0;
    }
    while ( v0 );
  }
  return KeXorAffinityEx(PpmPerfCoreParkingMask, PpmPerfNewCoreParkingMask, PpmPerfChangedCoreParkingMask);
}
