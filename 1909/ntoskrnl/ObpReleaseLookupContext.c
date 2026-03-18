/*
 * XREFs of ObpReleaseLookupContext @ 0x140003F54
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405C6208 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1405C6D50 (ObReferenceObjectByName.c)
 *     ObCloseHandleTableEntry @ 0x1405F65C0 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x14063F4B0 (ObpDeleteNameCheck.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E67F0 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x14075E310 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x140003F90 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
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
