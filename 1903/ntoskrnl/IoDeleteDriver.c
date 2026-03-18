/*
 * XREFs of IoDeleteDriver @ 0x140856480
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x1407644D4 (EtwTiLogDriverObjectUnLoad.c)
 */

LONG_PTR __fastcall IoDeleteDriver(__int16 *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 28);
  return ObfDereferenceObject(Object);
}
