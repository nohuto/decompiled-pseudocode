/*
 * XREFs of AlpcpDereferenceView @ 0x14084AB74
 * Callers:
 *     AlpcpLocateSectionView @ 0x140618A28 (AlpcpLocateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x14061DCE4 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x140619C70 (AlpcpDereferenceBlobEx.c)
 */

unsigned __int64 __fastcall AlpcpDereferenceView(ULONG_PTR a1)
{
  return AlpcpDereferenceBlobEx(a1, 1);
}
