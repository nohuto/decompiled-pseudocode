/*
 * XREFs of ??_EMPCTarget@@UEAAPEAXI@Z @ 0x18000B828
 * Callers:
 *     ??_EMPCTarget@@W7EAAPEAXI@Z @ 0x18000BF10 (--_EMPCTarget@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1MPCTarget@@UEAA@XZ @ 0x18000B874 (--1MPCTarget@@UEAA@XZ.c)
 */

MPCTarget *__fastcall MPCTarget::`vector deleting destructor'(MPCTarget *this, char a2)
{
  MPCTarget::~MPCTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
