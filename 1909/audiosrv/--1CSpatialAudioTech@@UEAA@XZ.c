/*
 * XREFs of ??1CSpatialAudioTech@@UEAA@XZ @ 0x18012EA50
 * Callers:
 *     ??_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z @ 0x18012EAF0 (--_GCSpatialAudioDolbyAtmosMAT@@UEAAPEAXI@Z.c)
 *     ??_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z @ 0x18012EB30 (--_ECSpatialAudioDtsxHeadphones@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x18012EBC8 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
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
