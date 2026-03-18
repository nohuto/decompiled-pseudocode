/*
 * XREFs of ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C01A1F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionObject::AddRef(CompositionObject *this)
{
  return ObReferenceObjectByPointer(this, 3u, ExCompositionObjectType, 0);
}
