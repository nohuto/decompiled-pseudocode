/*
 * XREFs of SepGetScopedPolicySid @ 0x14031C714
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeComputeCreatorDeniedRights @ 0x14003A9B0 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x1401562A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlFindAceByType @ 0x14000AC80 (RtlFindAceByType.c)
 */

unsigned __int8 *__fastcall SepGetScopedPolicySid(__int64 a1)
{
  unsigned __int8 *result; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  while ( 1 )
  {
    result = RtlFindAceByType(a1, 19, &v3);
    if ( result )
    {
      if ( (result[1] & 8) == 0 )
        break;
    }
    ++v3;
    if ( !result )
      return result;
  }
  result += 8;
  return result;
}
