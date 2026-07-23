/*
 * XREFs of CmpVolumeContextCleanup @ 0x1407F7714
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x1405A5298 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1405B0C04 (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeContextCreate @ 0x140760870 (CmpVolumeContextCreate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PiPagePathSetState @ 0x14075D3CC (PiPagePathSetState.c)
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
