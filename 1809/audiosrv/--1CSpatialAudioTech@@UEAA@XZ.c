/*
 * XREFs of ??1CSpatialAudioTech@@UEAA@XZ @ 0x180124CD8
 * Callers:
 *     ??_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z @ 0x180124D70 (--_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z.c)
 *     ??_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z @ 0x180124DB0 (--_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x180124E48 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 */

void __fastcall CSpatialAudioTech::~CSpatialAudioTech(CSpatialAudioTech *this)
{
  *(_QWORD *)this = &CSpatialAudioTech::`vftable';
  if ( *((_QWORD *)this + 1) )
  {
    CSpatialAudioTech::FreeAtmosCheck();
    *((_QWORD *)this + 1) = 0LL;
  }
}
