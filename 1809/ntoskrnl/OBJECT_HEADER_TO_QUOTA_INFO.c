/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14001622C
 * Callers:
 *     ObAdjustSecurityQuota @ 0x1405CA9A4 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1405CAA24 (ObpChargeQuotaForObject.c)
 *     NtQueryObject @ 0x140661C70 (NtQueryObject.c)
 *     ObGetObjectInformation @ 0x140862EC0 (ObGetObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_QUOTA_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0xF];
  else
    return 0LL;
}
