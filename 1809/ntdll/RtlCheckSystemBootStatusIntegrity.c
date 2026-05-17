/*
 * XREFs of RtlCheckSystemBootStatusIntegrity @ 0x1800ED970
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x1800A0EB0 (NtPowerInformation.c)
 */

__int64 __fastcall RtlCheckSystemBootStatusIntegrity(__int64 a1)
{
  if ( a1 )
    return NtPowerInformation();
  else
    return 3221225485LL;
}
