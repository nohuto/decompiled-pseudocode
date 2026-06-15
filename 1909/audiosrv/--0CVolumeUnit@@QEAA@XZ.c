/*
 * XREFs of ??0CVolumeUnit@@QEAA@XZ @ 0x18005BE40
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005B8C0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x18005BC50 (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 *     ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800BD9B4 (--$make_shared@VCVolumeUnit@@$$V@std@@YA-AV-$shared_ptr@VCVolumeUnit@@@0@XZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800C5350 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800C5D00 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800C5FE8 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18005BE90 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005BF90 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 */

CVolumeUnit *__fastcall CVolumeUnit::CVolumeUnit(CVolumeUnit *this)
{
  CVolumeUnit::SetDBRange(this);
  CVolumeUnit::SetWiper(this, 0.0);
  return this;
}
