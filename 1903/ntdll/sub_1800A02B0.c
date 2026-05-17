/*
 * XREFs of sub_1800A02B0 @ 0x1800A02B0
 * Callers:
 *     <none>
 * Callees:
 *     ZwTestAlert @ 0x18009FE10 (ZwTestAlert.c)
 */

__int64 __fastcall sub_1800A02B0(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x66) != 0 )
    ZwTestAlert();
  return 1LL;
}
