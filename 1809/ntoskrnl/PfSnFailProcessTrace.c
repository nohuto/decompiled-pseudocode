/*
 * XREFs of PfSnFailProcessTrace @ 0x1406D8034
 * Callers:
 *     PfSnLogHelper @ 0x14064C1E4 (PfSnLogHelper.c)
 *     PfSnVolumeKeyQuery @ 0x1406A4A24 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1406D0290 (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x140607950 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
