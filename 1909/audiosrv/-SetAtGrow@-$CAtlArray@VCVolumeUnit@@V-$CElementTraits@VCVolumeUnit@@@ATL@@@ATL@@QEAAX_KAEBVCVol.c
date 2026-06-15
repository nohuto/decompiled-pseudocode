/*
 * XREFs of ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18005BB2C
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005B8C0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800C5350 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800C5A20 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800C5D00 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800C5FE8 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18005BBD8 (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  __int64 result; // rax

  if ( a2 >= a1[1]
    && !(unsigned __int8)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount(a1, a2 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  v6 = *a1 + (a2 << 6);
  *(_DWORD *)v6 = *(_DWORD *)a3;
  *(_QWORD *)(v6 + 56) = *(_QWORD *)(a3 + 56);
  *(_DWORD *)(v6 + 4) = *(_DWORD *)(a3 + 4);
  *(_QWORD *)(v6 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(v6 + 32) = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(v6 + 40) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(v6 + 48) = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(v6 + 12) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(a3 + 16);
  result = *(unsigned int *)(a3 + 20);
  *(_DWORD *)(v6 + 20) = result;
  return result;
}
