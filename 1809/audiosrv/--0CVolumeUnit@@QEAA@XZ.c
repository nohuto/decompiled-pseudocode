/*
 * XREFs of ??0CVolumeUnit@@QEAA@XZ @ 0x18005BFD0
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005BA50 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x18005BDE0 (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 *     ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800AF4B8 (--$make_shared@VCVolumeUnit@@$$V@std@@YA-AV-$shared_ptr@VCVolumeUnit@@@0@XZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800B70D0 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800B7A80 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800B7D68 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18005C020 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005C0BC (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 */

CVolumeUnit *__fastcall CVolumeUnit::CVolumeUnit(CVolumeUnit *this)
{
  CVolumeUnit::SetDBRange(this);
  CVolumeUnit::SetWiper(this, 0.0);
  return this;
}
