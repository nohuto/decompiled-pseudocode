/*
 * XREFs of ObpReleaseLookupContext @ 0x140003EC4
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405C5D08 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1405C6850 (ObReferenceObjectByName.c)
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x14063C400 (ObpDeleteNameCheck.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E5900 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140759A80 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x140003F00 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall ObpReleaseLookupContext(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  if ( *(_BYTE *)(a1 + 30) )
    result = ObpUnlockDirectory(*(_QWORD *)a1, a1);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    result = ObfDereferenceObject(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
