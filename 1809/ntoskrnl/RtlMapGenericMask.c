/*
 * XREFs of RtlMapGenericMask @ 0x14063FD50
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004D710 (SepCreateAccessStateFromSubjectContext.c)
 *     CmpVEPerformOpenAccessCheck @ 0x140597A64 (CmpVEPerformOpenAccessCheck.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C94C8 (ObpAdjustCreatorAccessState.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     AlpcpCheckConnectionSecurity @ 0x140614280 (AlpcpCheckConnectionSecurity.c)
 *     RtlpCopyEffectiveAce @ 0x140631420 (RtlpCopyEffectiveAce.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406A6BC8 (ObCaptureObjectStateForDuplication.c)
 *     IoCheckDesiredAccess @ 0x14081D100 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x1408D96A4 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D98D0 (CMFCreateSecurityDescriptor.c)
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
  {
    v2 |= GenericMapping->GenericAll;
    *AccessMask = v2;
  }
  *AccessMask = v2 & 0xFFFFFFF;
}
