/*
 * XREFs of ?AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ @ 0x1800B1440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEnumerableObjectCollection::AddRef(__int64 a1)
{
  return CRefCountedObject<ViewEventDispatcher::PerApplicationData>::AddRef(a1 - 16);
}
