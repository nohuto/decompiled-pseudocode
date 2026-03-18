/*
 * XREFs of PsReleaseSiloHardReference @ 0x1402E9520
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140092150 (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x140121970 (IopCloseFileObjectExtension.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1405F9484 (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x1402E9594 (PspHardDereferenceSiloWorker.c)
 */

LONG_PTR __fastcall PsReleaseSiloHardReference(PVOID Object)
{
  LONG_PTR result; // rax

  if ( Object )
  {
    PspHardDereferenceSiloWorker();
    return ObfDereferenceObjectWithTag(Object, 0x486C6953u);
  }
  return result;
}
