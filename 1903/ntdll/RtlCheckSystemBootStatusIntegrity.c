/*
 * XREFs of RtlCheckSystemBootStatusIntegrity @ 0x1800EAA80
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation @ 0x18009D2B0 (ZwPowerInformation.c)
 */

__int64 __fastcall RtlCheckSystemBootStatusIntegrity(__int64 a1)
{
  if ( a1 )
    return ZwPowerInformation();
  else
    return 3221225485LL;
}
