/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x1406B3374
 * Callers:
 *     CmpIsVirtEnabledForSubject @ 0x1406B332C (CmpIsVirtEnabledForSubject.c)
 *     CmpBuildAdminInformation @ 0x1407F34F0 (CmpBuildAdminInformation.c)
 *     CmpGetVirtualizationID @ 0x1407F4744 (CmpGetVirtualizationID.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407F6328 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F66E0 (CmpReportAuditVirtualizationEvent.c)
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
