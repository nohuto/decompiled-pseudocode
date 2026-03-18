/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x1406ADAB8
 * Callers:
 *     CmpIsVirtEnabledForSubject @ 0x1406ADA70 (CmpIsVirtEnabledForSubject.c)
 *     CmpGetVirtualizationID @ 0x1406F5290 (CmpGetVirtualizationID.c)
 *     CmpBuildAdminInformation @ 0x1406F58F0 (CmpBuildAdminInformation.c)
 *     CmpExamineSaclForAuditEvent @ 0x14082DEC8 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14082E2B4 (CmpReportAuditVirtualizationEvent.c)
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
