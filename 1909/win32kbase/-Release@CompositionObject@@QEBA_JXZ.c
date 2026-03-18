/*
 * XREFs of ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0092BB0
 * Callers:
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C005D02C (RIMAllocateHidDesc.c)
 *     HMRemoveHandleForObject @ 0x1C0073480 (HMRemoveHandleForObject.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AA02C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     NtUserRemoveInjectionDevice @ 0x1C01190C0 (NtUserRemoveInjectionDevice.c)
 *     RIMGetSourceProcessId @ 0x1C0136EF0 (RIMGetSourceProcessId.c)
 *     RIMVirtCreateDev @ 0x1C014B864 (RIMVirtCreateDev.c)
 *     rimInputApc @ 0x1C0150BC0 (rimInputApc.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall CompositionObject::Release(CompositionObject *this)
{
  return ObfDereferenceObject(this);
}
