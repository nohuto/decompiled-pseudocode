/*
 * XREFs of ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x1800A4F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800A53BC (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

PenDeviceCollection *__fastcall PenDeviceCollection::`vector deleting destructor'(PenDeviceCollection *this, char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &PenDeviceCollection::`vftable';
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
