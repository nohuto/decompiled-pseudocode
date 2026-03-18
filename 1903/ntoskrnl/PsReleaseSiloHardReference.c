/*
 * XREFs of PsReleaseSiloHardReference @ 0x140306C00
 * Callers:
 *     IopCloseFileObjectExtension @ 0x14000A28C (IopCloseFileObjectExtension.c)
 *     IopDeleteFileObjectExtension @ 0x1400840D0 (IopDeleteFileObjectExtension.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406861CC (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x140306C74 (PspHardDereferenceSiloWorker.c)
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
