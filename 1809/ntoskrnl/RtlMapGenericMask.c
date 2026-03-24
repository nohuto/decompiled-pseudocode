/*
 * XREFs of RtlMapGenericMask @ 0x14063ED30
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004D710 (SepCreateAccessStateFromSubjectContext.c)
 *     CmpVEPerformOpenAccessCheck @ 0x140596A64 (CmpVEPerformOpenAccessCheck.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C84C8 (ObpAdjustCreatorAccessState.c)
 *     ObDuplicateObject @ 0x1405D0B70 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     AlpcpCheckConnectionSecurity @ 0x140613280 (AlpcpCheckConnectionSecurity.c)
 *     RtlpCopyEffectiveAce @ 0x140630400 (RtlpCopyEffectiveAce.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406A5928 (ObCaptureObjectStateForDuplication.c)
 *     IoCheckDesiredAccess @ 0x14081BF00 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x1408D83E4 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8610 (CMFCreateSecurityDescriptor.c)
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
