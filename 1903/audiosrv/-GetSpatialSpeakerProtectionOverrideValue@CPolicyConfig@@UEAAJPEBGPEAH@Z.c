/*
 * XREFs of ?GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z @ 0x1800DF970
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z @ 0x1800030B4 (-IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@V?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVAtmosCheck@@XZ @ 0x180067B90 (--B-$ComPtrRef@V-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVAtmosCh.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x180068790 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ??1?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ @ 0x180069FD8 (--1-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CPolicyConfig::GetSpatialSpeakerProtectionOverrideValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int *a3)
{
  unsigned int v5; // ebx
  __int64 *v6; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  AtmosCheck *v10; // [rsp+40h] [rbp+18h] BYREF
  AtmosCheck **v11; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    v10 = 0LL;
    v11 = &v10;
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<AtmosCheck>>::operator AtmosCheck * *((__int64 **)&v11);
    v7 = CSpatialAudioTech::GetAtmosCheckInstance((struct AtmosCheck **)v6);
    v5 = v7;
    if ( v7 >= 0 )
    {
      if ( v10 )
      {
        *a3 = AtmosCheck::IsSpeakerOverrideEnabled(v10, a2);
        v5 = 0;
      }
      else
      {
        v5 = -2147418113;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x82,
        (__int64)"avcore\\audiocore\\server\\lib\\spatialsettings\\spatialproviders.h",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<AtmosCheck>::~ComPtr<AtmosCheck>((__int64 *)&v10);
  }
  else
  {
    v5 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB26,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
  }
  return v5;
}
