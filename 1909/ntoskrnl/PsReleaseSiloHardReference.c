/*
 * XREFs of PsReleaseSiloHardReference @ 0x1403066B0
 * Callers:
 *     IopCloseFileObjectExtension @ 0x14000A31C (IopCloseFileObjectExtension.c)
 *     IopDeleteFileObjectExtension @ 0x1400844D0 (IopDeleteFileObjectExtension.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14064C13C (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x140306724 (PspHardDereferenceSiloWorker.c)
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
