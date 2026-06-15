/*
 * XREFs of ??_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z @ 0x180128510
 * Callers:
 *     ??_ESpatialAudioDeviceStateWriter@@WCDI@EAAPEAXI@Z @ 0x180069280 (--_ESpatialAudioDeviceStateWriter@@WCDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SpatialAudioIO@@UEAA@XZ @ 0x18012849C (--1SpatialAudioIO@@UEAA@XZ.c)
 */

SpatialAudioDeviceStateWriter *__fastcall SpatialAudioDeviceStateWriter::`vector deleting destructor'(
        SpatialAudioDeviceStateWriter *this,
        char a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  *((_DWORD *)this + 153) = -1073741823;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 75);
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  SpatialAudioIO::~SpatialAudioIO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
