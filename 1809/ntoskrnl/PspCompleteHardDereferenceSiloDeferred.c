/*
 * XREFs of PspCompleteHardDereferenceSiloDeferred @ 0x140886C80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PspStorageEmptyArrayNonReadonly @ 0x1402EC018 (PspStorageEmptyArrayNonReadonly.c)
 */

LONG_PTR __fastcall PspCompleteHardDereferenceSiloDeferred(_QWORD *Object)
{
  __int64 v1; // rbx
  ULONG_PTR v3; // rcx

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
