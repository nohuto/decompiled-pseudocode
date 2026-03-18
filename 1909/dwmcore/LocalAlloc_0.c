/*
 * XREFs of LocalAlloc_0 @ 0x1800E9DC6
 * Callers:
 *     ConstructVmSharedMemorySectionHostPath @ 0x18025CA18 (ConstructVmSharedMemorySectionHostPath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HLOCAL __stdcall LocalAlloc_0(UINT uFlags, SIZE_T uBytes)
{
  return LocalAlloc(uFlags, uBytes);
}
