/*
 * XREFs of PpmParkComputeDiff @ 0x1402F846C
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x140120310 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeInitializeAffinityEx @ 0x14009E030 (KeInitializeAffinityEx.c)
 *     KeAddGroupAffinityEx @ 0x1402A4AD0 (KeAddGroupAffinityEx.c)
 *     KeXorAffinityEx @ 0x1402A4CB8 (KeXorAffinityEx.c)
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
