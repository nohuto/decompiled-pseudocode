/*
 * XREFs of pow @ 0x180064D1C
 * Callers:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18004E6D8 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18004E754 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180060254 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x180060368 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x1800604BC (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x180060508 (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180060550 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800C8350 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1801051C8 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
