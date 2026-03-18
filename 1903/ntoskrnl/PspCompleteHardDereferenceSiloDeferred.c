/*
 * XREFs of PspCompleteHardDereferenceSiloDeferred @ 0x1408C5030
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PspStorageEmptyArrayNonReadonly @ 0x14030A4AC (PspStorageEmptyArrayNonReadonly.c)
 */

LONG_PTR __fastcall PspCompleteHardDereferenceSiloDeferred(_QWORD *Object)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = Object[161];
  if ( v1 )
  {
    PspStorageEmptyArrayNonReadonly(Object[161], 0x20u);
    v3 = *(_QWORD *)(v1 + 512);
    if ( v3 )
      PspStorageEmptyArrayNonReadonly(v3, 0x100u);
  }
  return ObfDereferenceObject(Object);
}
