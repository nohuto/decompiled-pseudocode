/*
 * XREFs of RtlMapGenericMask @ 0x140603930
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x14003ABA0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C6118 (ObpAdjustCreatorAccessState.c)
 *     RtlpCopyEffectiveAce @ 0x1405DDD90 (RtlpCopyEffectiveAce.c)
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     AlpcpCheckConnectionSecurity @ 0x140658E90 (AlpcpCheckConnectionSecurity.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406A4254 (CmpVEPerformOpenAccessCheck.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406CA72C (ObCaptureObjectStateForDuplication.c)
 *     IoCheckDesiredAccess @ 0x140855670 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x1409150A0 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1409152F0 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  ACCESS_MASK v2; // eax

  v2 = *AccessMask;
  if ( (*AccessMask & 0x80000000) != 0 )
  {
    v2 |= GenericMapping->GenericRead;
    *AccessMask = v2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v2 |= GenericMapping->GenericWrite;
    *AccessMask = v2;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    v2 |= GenericMapping->GenericExecute;
    *AccessMask = v2;
  }
  if ( (v2 & 0x10000000) != 0 )
    v2 |= GenericMapping->GenericAll;
  *AccessMask = v2 & 0xFFFFFFF;
}
