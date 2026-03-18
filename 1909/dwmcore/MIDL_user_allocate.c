/*
 * XREFs of MIDL_user_allocate @ 0x180159CB0
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__stdcall MIDL_user_allocate(size_t size)
{
  return DefaultHeap::Alloc(size);
}
