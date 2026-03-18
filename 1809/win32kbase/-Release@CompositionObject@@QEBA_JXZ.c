/*
 * XREFs of ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0013110
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C01663E0 (NtDCompositionDuplicateHandleToProcess.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall CompositionObject::Release(CompositionObject *this)
{
  return ObfDereferenceObject(this);
}
