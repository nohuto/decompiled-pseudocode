/*
 * XREFs of AlpcpViewSearchCallbackFunction @ 0x1406CC50C
 * Callers:
 *     AlpcpEnumerateResourcesPort @ 0x14065E8CC (AlpcpEnumerateResourcesPort.c)
 * Callees:
 *     AlpcpReferenceBlob @ 0x14065F5C0 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpViewSearchCallbackFunction(ULONG_PTR a1, _QWORD *a2)
{
  if ( *(_QWORD *)(a1 + 40) != *a2 )
    return 0LL;
  if ( !AlpcpReferenceBlob(a1) )
    return 3221226029LL;
  a2[1] = a1;
  return 3221225473LL;
}
