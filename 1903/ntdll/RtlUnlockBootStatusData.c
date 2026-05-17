/*
 * XREFs of RtlUnlockBootStatusData @ 0x1800EAF30
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation @ 0x18009D2B0 (ZwPowerInformation.c)
 */

__int64 __fastcall RtlUnlockBootStatusData(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return ZwPowerInformation();
  return result;
}
