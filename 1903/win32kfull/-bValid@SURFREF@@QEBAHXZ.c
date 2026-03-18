/*
 * XREFs of ?bValid@SURFREF@@QEBAHXZ @ 0x1C026AE74
 * Callers:
 *     GreDereferenceObject @ 0x1C00455D4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C004567C (GreReferenceObject.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFREF::bValid(SURFREF *this)
{
  return *(_QWORD *)this != 0LL;
}
