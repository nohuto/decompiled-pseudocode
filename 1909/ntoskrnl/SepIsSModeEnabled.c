/*
 * XREFs of SepIsSModeEnabled @ 0x1401010D0
 * Callers:
 *     SeIsSModeAdminlessEnabled @ 0x1400E8634 (SeIsSModeAdminlessEnabled.c)
 *     SeSecurityModelQueryInformation @ 0x14072F980 (SeSecurityModelQueryInformation.c)
 * Callees:
 *     SeCodeIntegrityQueryPolicyInformation @ 0x1406B24A0 (SeCodeIntegrityQueryPolicyInformation.c)
 */

bool SepIsSModeEnabled()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF
  char v2; // [rsp+48h] [rbp+10h] BYREF

  return (int)SeCodeIntegrityQueryPolicyInformation(205, 0, 0, (unsigned int)&v1, 4, (__int64)&v2) >= 0
      && (v1 & 0xA0000000) != 0;
}
