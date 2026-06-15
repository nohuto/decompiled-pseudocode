/*
 * XREFs of ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x1800604BC
 * Callers:
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180060450 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x1800C808C (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 * Callees:
 *     _o_log10_0 @ 0x180064D10 (_o_log10_0.c)
 *     pow @ 0x180064D1C (pow.c)
 */

double __fastcall CVolumeUnit::ConvertScalarToDb(CVolumeUnit *this, double a2)
{
  if ( pow(10.0, -9.6) > a2 )
    return DOUBLE_N192_0;
  else
    return o_log10_0(a2) * 20.0;
}
