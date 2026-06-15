/*
 * XREFs of ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800E5490
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x18004CCA0 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180059644 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall CQPCStopWatch::GetTimeSec(CQPCStopWatch *this)
{
  double v1; // xmm1_8

  v1 = 0.0;
  if ( *((_QWORD *)this + 2) )
    return (double)(*((_DWORD *)this + 2) - *(_DWORD *)this) / (double)(int)*((_QWORD *)this + 2);
  return v1;
}
