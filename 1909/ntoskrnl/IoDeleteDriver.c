/*
 * XREFs of IoDeleteDriver @ 0x140855B80
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140768FD4 (EtwTiLogDriverObjectUnLoad.c)
 */

LONG_PTR __fastcall IoDeleteDriver(__int16 *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 28);
  return ObfDereferenceObject(Object);
}
