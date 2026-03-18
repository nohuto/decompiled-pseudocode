/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14000A2B8
 * Callers:
 *     ObAdjustSecurityQuota @ 0x1405C752C (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1405D693C (ObpChargeQuotaForObject.c)
 *     NtQueryObject @ 0x14062A260 (NtQueryObject.c)
 *     ObGetObjectInformation @ 0x14089E704 (ObGetObjectInformation.c)
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
