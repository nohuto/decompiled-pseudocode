/*
 * XREFs of ??_GSpatialAudioStateIO@@UEAAPEAXI@Z @ 0x1801285C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ??1SpatialAudioIO@@UEAA@XZ @ 0x18012849C (--1SpatialAudioIO@@UEAA@XZ.c)
 */

SpatialAudioStateIO *__fastcall SpatialAudioStateIO::`scalar deleting destructor'(SpatialAudioStateIO *this, char a2)
{
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  SpatialAudioIO::~SpatialAudioIO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
