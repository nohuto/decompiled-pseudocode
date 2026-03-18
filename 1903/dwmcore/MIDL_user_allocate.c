/*
 * XREFs of MIDL_user_allocate @ 0x18015B390
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800677D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__stdcall MIDL_user_allocate(size_t size)
{
  return DefaultHeap::Alloc(size);
}
