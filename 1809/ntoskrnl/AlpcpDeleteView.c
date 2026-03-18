/*
 * XREFs of AlpcpDeleteView @ 0x140618AC0
 * Callers:
 *     NtAlpcCreateSectionView @ 0x140616470 (NtAlpcCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140617818 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140617B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcDeleteSectionView @ 0x1406AE3D0 (NtAlpcDeleteSectionView.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x140618BF4 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140618C70 (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
