/*
 * XREFs of AlpcpDereferenceView @ 0x140849914
 * Callers:
 *     AlpcpLocateSectionView @ 0x140617A28 (AlpcpLocateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x14061CCE4 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x140618C70 (AlpcpDereferenceBlobEx.c)
 */

unsigned __int64 __fastcall AlpcpDereferenceView(ULONG_PTR a1)
{
  return AlpcpDereferenceBlobEx(a1, 1);
}
