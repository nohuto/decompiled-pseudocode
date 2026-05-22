/*
 * XREFs of ?Release@RegistryWatcher@@UEAAKXZ @ 0x180029410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall RegistryWatcher::Release(RegistryWatcher *this)
{
  return RefCountedObject::Release(this);
}
