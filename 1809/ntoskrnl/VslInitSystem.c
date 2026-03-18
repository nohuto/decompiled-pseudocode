/*
 * XREFs of VslInitSystem @ 0x1409DE5F0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpIumPhase4Initialize @ 0x140192FF0 (VslpIumPhase4Initialize.c)
 *     VslpIumPhase0Initialize @ 0x1409F45F8 (VslpIumPhase0Initialize.c)
 */

NTSTATUS __fastcall VslInitSystem(int a1, __int64 a2)
{
  if ( a1 )
    return VslpIumPhase4Initialize();
  else
    return VslpIumPhase0Initialize(a2);
}
