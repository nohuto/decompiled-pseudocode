/*
 * XREFs of VslInitSystem @ 0x140A219A4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpIumPhase4Initialize @ 0x14019DB2C (VslpIumPhase4Initialize.c)
 *     VslpIumPhase0Initialize @ 0x140A398F0 (VslpIumPhase0Initialize.c)
 */

NTSTATUS __fastcall VslInitSystem(int a1, __int64 a2)
{
  if ( a1 )
    return VslpIumPhase4Initialize();
  else
    return VslpIumPhase0Initialize(a2);
}
