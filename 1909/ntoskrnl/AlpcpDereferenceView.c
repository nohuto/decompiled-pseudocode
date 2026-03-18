/*
 * XREFs of AlpcpDereferenceView @ 0x140884514
 * Callers:
 *     AlpcpLocateSectionView @ 0x14065E810 (AlpcpLocateSectionView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x14065EDF0 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpDereferenceView(ULONG_PTR a1)
{
  AlpcpDereferenceBlobEx(a1, 1);
}
