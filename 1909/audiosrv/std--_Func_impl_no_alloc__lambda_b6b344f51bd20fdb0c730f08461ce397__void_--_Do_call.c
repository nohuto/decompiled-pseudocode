/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1800E15A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180037244 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ??B?$ComPtrRef@V?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVAtmosCheck@@XZ @ 0x180068BF0 (--B-$ComPtrRef@V-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVAtmosCh.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x1800697F0 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ??1?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ @ 0x18006B038 (--1-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call()
{
  __int64 *v0; // rax
  const GUID *v1; // r8
  const GUID *v2; // r9
  AtmosCheck *v3; // [rsp+40h] [rbp+8h] BYREF
  AtmosCheck **v4; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = &v3;
  v0 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<AtmosCheck>>::operator AtmosCheck * *((__int64 **)&v4);
  if ( (int)CSpatialAudioTech::GetAtmosCheckInstance((struct AtmosCheck **)v0) >= 0 && v3 )
    AtmosCheck::PerformLicenseCheck(v3, 0, v1, v2);
  Microsoft::WRL::ComPtr<AtmosCheck>::~ComPtr<AtmosCheck>((__int64 *)&v3);
  CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
}
