/*
 * XREFs of ?GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18012EBC0
 * Callers:
 *     ?GetEndpointExtendedSpatialLicenseInfo@CPolicyConfig@@UEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x1800DF5F0 (-GetEndpointExtendedSpatialLicenseInfo@CPolicyConfig@@UEAAJPEBGKPEAUExtendedSpatialAudioEncoderI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@V?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVAtmosCheck@@XZ @ 0x180067B90 (--B-$ComPtrRef@V-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVAtmosCh.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x180068790 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ??1?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ @ 0x180069FD8 (--1-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18013E9B0 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialAudioTech::GetEndpointExtendedSpatialLicenseInfo(
        const unsigned __int16 *a1,
        unsigned int a2,
        struct ExtendedSpatialAudioEncoderInfo *a3)
{
  unsigned int v6; // ebx
  __int64 *v7; // rax
  int v8; // eax
  int v9; // edi
  __int64 *v11[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  AtmosCheck *v13; // [rsp+68h] [rbp+20h] BYREF

  v11[1] = (__int64 *)-2LL;
  v6 = 0;
  v13 = 0LL;
  v11[0] = (__int64 *)&v13;
  v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<AtmosCheck>>::operator AtmosCheck * *(v11);
  v8 = CSpatialAudioTech::GetAtmosCheckInstance((struct AtmosCheck **)v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"avcore\\audiocore\\server\\lib\\spatialsettings\\spatialproviders.h",
      (const char *)(unsigned int)v8);
LABEL_6:
    v6 = v9;
    goto LABEL_7;
  }
  if ( !v13 )
  {
    v9 = -2147418113;
    goto LABEL_6;
  }
  AtmosCheck::GetEndpointExtendedSpatialLicenseInfo(v13, a1, a2, a3);
LABEL_7:
  Microsoft::WRL::ComPtr<AtmosCheck>::~ComPtr<AtmosCheck>((__int64 *)&v13);
  return v6;
}
