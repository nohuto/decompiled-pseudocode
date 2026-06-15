/*
 * XREFs of ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005BF90
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005B8C0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18005BE40 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005D4C8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800C5350 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800C5D00 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800C5FE8 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18004ED74 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     pow @ 0x180065D0C (pow.c)
 */

void __fastcall CVolumeUnit::SetDBRange(__int64 a1, __int64 a2, float a3, float a4, int a5, __int64 a6)
{
  double v7; // xmm0_8
  double v8; // xmm8_8
  double v9; // xmm0_8
  double v10; // xmm6_8

  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 56) = a6;
  *(_DWORD *)(a1 + 16) = a5;
  *(float *)(a1 + 8) = a3;
  *(float *)(a1 + 12) = a4;
  *(float *)(a1 + 20) = a4;
  v7 = pow(10.0, a3 / 20.0);
  *(double *)(a1 + 48) = v7;
  v8 = v7;
  v9 = pow(10.0, a4 / 20.0);
  *(double *)(a1 + 40) = v9;
  v10 = v9;
  *(double *)(a1 + 24) = CVolumeUnit::TaperFromScalar((CVolumeUnit *)a1, v8, v9);
  *(double *)(a1 + 32) = CVolumeUnit::TaperFromScalar((CVolumeUnit *)a1, v10, v10);
}
