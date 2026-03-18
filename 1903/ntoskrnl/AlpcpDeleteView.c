/*
 * XREFs of AlpcpDeleteView @ 0x14064BCD8
 * Callers:
 *     NtAlpcCreateSectionView @ 0x1406492C0 (NtAlpcCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14064A968 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14064ACD4 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcDeleteSectionView @ 0x1406D2030 (NtAlpcDeleteSectionView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x14064BD0C (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
  return 1;
}
