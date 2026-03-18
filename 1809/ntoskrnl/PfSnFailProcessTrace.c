/*
 * XREFs of PfSnFailProcessTrace @ 0x1406D6DB4
 * Callers:
 *     PfSnLogHelper @ 0x14064B044 (PfSnLogHelper.c)
 *     PfSnVolumeKeyQuery @ 0x1406A37A4 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1406CF010 (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x140606950 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
