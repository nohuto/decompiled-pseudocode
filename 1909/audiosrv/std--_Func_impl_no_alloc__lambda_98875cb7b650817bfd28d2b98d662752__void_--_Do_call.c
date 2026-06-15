/*
 * XREFs of std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1800E1520
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$ComPtrRef@V?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVAtmosCheck@@XZ @ 0x180068BF0 (--B-$ComPtrRef@V-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVAtmosCh.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x1800697F0 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ??1?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ @ 0x18006B038 (--1-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18013F908 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rbx
  __int64 *v2; // rax
  AtmosCheck *v3; // [rsp+40h] [rbp+8h] BYREF
  AtmosCheck **v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(const unsigned __int16 **)(a1 + 8);
  if ( v1 )
    v1 = *(const unsigned __int16 **)v1;
  v3 = 0LL;
  v4 = &v3;
  v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<AtmosCheck>>::operator AtmosCheck * *((__int64 **)&v4);
  if ( (int)CSpatialAudioTech::GetAtmosCheckInstance((struct AtmosCheck **)v2) >= 0 && v3 )
    AtmosCheck::RefreshLicenseStatus(v3, v1);
  Microsoft::WRL::ComPtr<AtmosCheck>::~ComPtr<AtmosCheck>((__int64 *)&v3);
  CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
}
