/*
 * XREFs of ComputeProcessorEnergy @ 0x1C000E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ComputePowerEnvelopeFromCurve @ 0x1C000E830 (ComputePowerEnvelopeFromCurve.c)
 */

unsigned __int64 __fastcall ComputeProcessorEnergy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  int *v6; // r8
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 result; // rax

  v6 = &dword_1C001A938[64 * (unsigned __int64)a1];
  if ( (v6[1] & 1) != 0 )
  {
    v7 = ComputePowerEnvelopeFromCurve((__int64)&dword_1C001A938[64 * (unsigned __int64)a1], a4);
    v8 = 100LL;
  }
  else
  {
    v7 = *v6;
    v8 = a4;
  }
  result = 10 * a2 * v8 * (unsigned __int64)v7 / qword_1C001AB40;
  *a5 = result;
  return result;
}
