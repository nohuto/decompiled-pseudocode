/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x1406542B0
 * Callers:
 *     SepInitProcessAuditSd @ 0x14017D0CC (SepInitProcessAuditSd.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6D70 (SepSetProcessTrustLabelAceForToken.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402FE85C (SepBuildCapeSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1406527CC (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140654070 (ObpVerifyAccessToBoundaryEntry.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406AF7EC (LocalConvertStringSDToSD_Rev1.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F4B70 (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F5238 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepInitSystemDacls @ 0x1409AD07C (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x1409ADE18 (SeMakeSystemToken.c)
 *     ObInitSystem @ 0x1409B1964 (ObInitSystem.c)
 *     ExpKeyedEventInitialization @ 0x1409DA2F8 (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN SaclPresent,
        PACL Sacl,
        BOOLEAN SaclDefaulted)
{
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v8; // cx
  PACL v9; // rax
  __int16 v10; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1);
  if ( v5 >= 0 )
  {
    if ( SaclPresent )
    {
      v8 = v5 | 0x10;
      v9 = 0LL;
      if ( Sacl )
        v9 = Sacl;
      *((_QWORD *)SecurityDescriptor + 3) = v9;
      v10 = v8 & 0xFFDF;
      *((_WORD *)SecurityDescriptor + 1) = v10;
      if ( !SaclDefaulted )
        return 0;
      v6 = v10 | 0x20;
    }
    else
    {
      v6 = v5 & 0xFFEF;
    }
    *((_WORD *)SecurityDescriptor + 1) = v6;
    return 0;
  }
  return -1073741703;
}
