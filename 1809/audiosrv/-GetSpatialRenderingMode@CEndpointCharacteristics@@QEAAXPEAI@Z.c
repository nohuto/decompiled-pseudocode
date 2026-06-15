/*
 * XREFs of ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x18010B730
 * Callers:
 *     _lambda_f4cfbe3a62d9ecd19aa084d08cd38d93_::operator() @ 0x180052DA8 (_lambda_f4cfbe3a62d9ecd19aa084d08cd38d93_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x180053D14 (Create_SpatialAudioDevicePropertyReader.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CEndpointCharacteristics::GetSpatialRenderingMode(CEndpointCharacteristics *this, unsigned int *a2)
{
  const GUID *v4; // r9
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  *a2 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v5);
  if ( (int)Create_SpatialAudioDevicePropertyReader(0LL, *((_QWORD *)this + 5), &v5, v4) >= 0 )
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 152LL))(v5, a2);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v5);
}
