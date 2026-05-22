/*
 * XREFs of ??_ESpatialRimDeviceCollection@@UEAAPEAXI@Z @ 0x18009C460
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x18009C1B8 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 */

SpatialRimDeviceCollection *__fastcall SpatialRimDeviceCollection::`vector deleting destructor'(
        SpatialRimDeviceCollection *this,
        void *a2)
{
  char v2; // di

  v2 = (char)a2;
  SpatialRimDeviceCollection::~SpatialRimDeviceCollection(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
