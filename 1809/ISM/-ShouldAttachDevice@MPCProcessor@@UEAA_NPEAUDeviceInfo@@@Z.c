/*
 * XREFs of ?ShouldAttachDevice@MPCProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1800F64C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UseDdiForHands@@YA_NXZ @ 0x180058594 (-UseDdiForHands@@YA_NXZ.c)
 */

bool __fastcall MPCProcessor::ShouldAttachDevice(MPCProcessor *this, struct DeviceInfo *a2)
{
  if ( UseDdiForHands() )
    return *(_DWORD *)a2 == **((_DWORD **)this + 6);
  else
    return (*((_DWORD *)a2 + 1) & 0x200) != 0;
}
