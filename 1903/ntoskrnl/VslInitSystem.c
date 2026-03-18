/*
 * XREFs of VslInitSystem @ 0x140A218C4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpIumPhase4Initialize @ 0x14019D3AC (VslpIumPhase4Initialize.c)
 *     VslpIumPhase0Initialize @ 0x140A39B20 (VslpIumPhase0Initialize.c)
 */

NTSTATUS __fastcall VslInitSystem(int a1, __int64 a2)
{
  if ( a1 )
    return VslpIumPhase4Initialize();
  else
    return VslpIumPhase0Initialize(a2);
}
