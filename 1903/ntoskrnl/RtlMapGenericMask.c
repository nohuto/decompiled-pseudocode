/*
 * XREFs of RtlMapGenericMask @ 0x140601F00
 * Callers:
 *     SepCreateAccessStateFromSubjectContext @ 0x14003AE60 (SepCreateAccessStateFromSubjectContext.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C5C18 (ObpAdjustCreatorAccessState.c)
 *     RtlpCopyEffectiveAce @ 0x1405DD5F0 (RtlpCopyEffectiveAce.c)
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     AlpcpCheckConnectionSecurity @ 0x140645340 (AlpcpCheckConnectionSecurity.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406AD8A4 (CmpVEPerformOpenAccessCheck.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406CB8FC (ObCaptureObjectStateForDuplication.c)
 *     IoCheckDesiredAccess @ 0x140855F70 (IoCheckDesiredAccess.c)
 *     CMFCheckAccess @ 0x140915640 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x140915890 (CMFCreateSecurityDescriptor.c)
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
