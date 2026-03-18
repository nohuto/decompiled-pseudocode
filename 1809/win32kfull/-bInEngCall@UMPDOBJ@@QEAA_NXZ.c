/*
 * XREFs of ?bInEngCall@UMPDOBJ@@QEAA_NXZ @ 0x1C015EBC0
 * Callers:
 *     EngTextOut @ 0x1C0087B90 (EngTextOut.c)
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C008DB54 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     XLATEOBJ_iXlate @ 0x1C0094450 (XLATEOBJ_iXlate.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

bool __fastcall UMPDOBJ::bInEngCall(UMPDOBJ *this)
{
  bool v2; // zf

  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
    v2 = (_InterlockedCompareExchange((volatile signed __int32 *)this + 105, 0, 0) & 0x7FFFFFFF) == 0;
  else
    v2 = *((_DWORD *)this + 105) == 0;
  return !v2;
}
