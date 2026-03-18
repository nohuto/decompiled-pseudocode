/*
 * XREFs of LocalAlloc_0 @ 0x1800E8FA1
 * Callers:
 *     ConstructVmSharedMemorySectionHostPath @ 0x18025E2D8 (ConstructVmSharedMemorySectionHostPath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HLOCAL __stdcall LocalAlloc_0(UINT uFlags, SIZE_T uBytes)
{
  return LocalAlloc(uFlags, uBytes);
}
