/*
 * XREFs of LocalFree_0 @ 0x1800E96E9
 * Callers:
 *     ?OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z @ 0x180228E98 (-OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HLOCAL __stdcall LocalFree_0(HLOCAL hMem)
{
  return LocalFree(hMem);
}
