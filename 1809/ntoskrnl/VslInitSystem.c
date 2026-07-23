/*
 * XREFs of VslInitSystem @ 0x1409DF5F0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpIumPhase4Initialize @ 0x140193150 (VslpIumPhase4Initialize.c)
 *     VslpIumPhase0Initialize @ 0x1409F5600 (VslpIumPhase0Initialize.c)
 */

NTSTATUS __fastcall VslInitSystem(int a1, __int64 a2)
{
  if ( a1 )
    return VslpIumPhase4Initialize();
  else
    return VslpIumPhase0Initialize(a2);
}
