/*
 * XREFs of ?RoundSubPixelToPixel@ManipulationInjector@@AEAAJM@Z @ 0x1800E8F70
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800E8918 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ManipulationInjector::RoundSubPixelToPixel(ManipulationInjector *this, float a2)
{
  float v2; // xmm0_4
  __int64 result; // rax

  if ( a2 >= 0.0 )
    v2 = FLOAT_0_5;
  else
    v2 = FLOAT_N0_5;
  result = (unsigned int)(int)(float)(v2 + a2);
  if ( a2 != 0.0 && !(_DWORD)result )
  {
    result = 1LL;
    if ( a2 < 0.0 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
