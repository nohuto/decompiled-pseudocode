/*
 * XREFs of PfSnFailProcessTrace @ 0x1406F8314
 * Callers:
 *     PfSnLogHelper @ 0x14065788C (PfSnLogHelper.c)
 *     PfSnVolumeKeyQuery @ 0x1406C70A0 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1406EDF24 (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x1406E6D0C (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
