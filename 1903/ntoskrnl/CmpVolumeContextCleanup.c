/*
 * XREFs of CmpVolumeContextCleanup @ 0x14082F2D0
 * Callers:
 *     CmpVolumeContextDecrementRefCount @ 0x14063E34C (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeContextCreate @ 0x140786468 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextFree @ 0x14082F304 (CmpVolumeContextFree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PiPagePathSetState @ 0x14078175C (PiPagePathSetState.c)
 */

LONG_PTR __fastcall CmpVolumeContextCleanup(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  if ( *(_BYTE *)(a1 + 64) )
    result = PiPagePathSetState(*(struct _FILE_OBJECT **)(a1 + 48), 0);
  v3 = *(void **)(a1 + 48);
  if ( v3 )
    return ObfDereferenceObject(v3);
  return result;
}
