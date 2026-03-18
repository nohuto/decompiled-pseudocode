/*
 * XREFs of CmpVolumeContextCleanup @ 0x14082F140
 * Callers:
 *     CmpVolumeContextDecrementRefCount @ 0x1406B9F5C (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeContextCreate @ 0x1407887C8 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextFree @ 0x14082F174 (CmpVolumeContextFree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PiPagePathSetState @ 0x140783ABC (PiPagePathSetState.c)
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
