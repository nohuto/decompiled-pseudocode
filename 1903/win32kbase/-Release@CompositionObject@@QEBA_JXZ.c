/*
 * XREFs of ?Release@CompositionObject@@QEBA_JXZ @ 0x1C00942F0
 * Callers:
 *     RIMCreateDev @ 0x1C006BB70 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C00AE4FC (RIMAllocateHidDesc.c)
 *     NtUserRemoveInjectionDevice @ 0x1C011BA30 (NtUserRemoveInjectionDevice.c)
 *     RIMGetSourceProcessId @ 0x1C0139560 (RIMGetSourceProcessId.c)
 *     RIMVirtCreateDev @ 0x1C014DED4 (RIMVirtCreateDev.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall CompositionObject::Release(CompositionObject *this)
{
  return ObfDereferenceObject(this);
}
