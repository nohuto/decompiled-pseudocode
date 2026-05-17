/*
 * XREFs of RtlUnlockBootStatusData @ 0x1800EDE40
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x1800A0EB0 (NtPowerInformation.c)
 */

__int64 __fastcall RtlUnlockBootStatusData(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return NtPowerInformation();
  return result;
}
