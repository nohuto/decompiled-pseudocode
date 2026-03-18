/*
 * XREFs of LocalFree_0 @ 0x1800E8839
 * Callers:
 *     ?OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z @ 0x18022A5A8 (-OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HLOCAL __stdcall LocalFree_0(HLOCAL hMem)
{
  return LocalFree(hMem);
}
