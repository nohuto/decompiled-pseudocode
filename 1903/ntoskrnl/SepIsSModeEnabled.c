/*
 * XREFs of SepIsSModeEnabled @ 0x1400FE6D0
 * Callers:
 *     SeIsSModeAdminlessEnabled @ 0x1400AF810 (SeIsSModeAdminlessEnabled.c)
 *     SeSecurityModelQueryInformation @ 0x14072DAB0 (SeSecurityModelQueryInformation.c)
 * Callees:
 *     SeCodeIntegrityQueryPolicyInformation @ 0x1406B0570 (SeCodeIntegrityQueryPolicyInformation.c)
 */

bool SepIsSModeEnabled()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF
  char v2; // [rsp+48h] [rbp+10h] BYREF

  return (int)SeCodeIntegrityQueryPolicyInformation(205, 0, 0, (unsigned int)&v1, 4, (__int64)&v2) >= 0
      && (v1 & 0xA0000000) != 0;
}
