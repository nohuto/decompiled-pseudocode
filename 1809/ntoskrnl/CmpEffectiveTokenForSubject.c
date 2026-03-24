/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x1406B20D4
 * Callers:
 *     CmpIsVirtEnabledForSubject @ 0x1406B208C (CmpIsVirtEnabledForSubject.c)
 *     CmpBuildAdminInformation @ 0x1407F22F0 (CmpBuildAdminInformation.c)
 *     CmpGetVirtualizationID @ 0x1407F3544 (CmpGetVirtualizationID.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407F5128 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F54E0 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpEffectiveTokenForSubject(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( !*a1 )
    v2 = a1[2];
  if ( a2 )
    *a2 = (*a1 != 0) + 1;
  return v2;
}
