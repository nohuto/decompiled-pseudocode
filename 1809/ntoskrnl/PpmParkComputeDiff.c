/*
 * XREFs of PpmParkComputeDiff @ 0x1402E805C
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x140122380 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     KeXorAffinityEx @ 0x14028E658 (KeXorAffinityEx.c)
 */

__int64 PpmParkComputeDiff()
{
  __int64 v0; // r8
  __int64 v1; // rcx
  unsigned __int16 v2; // dx
  __int64 v3; // r9

  PpmPerfNewCoreParkingMask = 1310721;
  memset(&unk_140404FD4, 0, 0xA4uLL);
  if ( PpmParkNumNodes )
  {
    v0 = (unsigned int)PpmParkNumNodes;
    v1 = PpmParkNodes + 4;
    do
    {
      v2 = *(_WORD *)v1;
      v3 = *(_QWORD *)(v1 + 28);
      if ( (unsigned __int16)PpmPerfNewCoreParkingMask <= *(_WORD *)v1 )
        LOWORD(PpmPerfNewCoreParkingMask) = v2 + 1;
      v1 += 264LL;
      qword_140404FD8[v2] |= v3;
      --v0;
    }
    while ( v0 );
  }
  return KeXorAffinityEx();
}
