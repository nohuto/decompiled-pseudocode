/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x1406804D0
 * Callers:
 *     SepInitProcessAuditSd @ 0x14018AED0 (SepInitProcessAuditSd.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14031CB6C (SepBuildCapeSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140680270 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x140681660 (IopCreateSecurityDescriptorPerType.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406F8374 (LocalConvertStringSDToSD_Rev1.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D930 (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14082DFC0 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepInitSystemDacls @ 0x140A00740 (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x140A01540 (SeMakeSystemToken.c)
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 *     ExpKeyedEventInitialization @ 0x140A1DD44 (ExpKeyedEventInitialization.c)
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
