/*
 * XREFs of MmProbeAndLockProcessPages @ 0x14064CCC0
 * Callers:
 *     CcAsyncReadPrefetch @ 0x1400A26FC (CcAsyncReadPrefetch.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __stdcall MmProbeAndLockProcessPages(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  int v8; // edi
  _BYTE v9[48]; // [rsp+28h] [rbp-70h] BYREF

  memset(v9, 0, sizeof(v9));
  v8 = 0;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    v8 = 1;
    KiStackAttachProcess(Process, 0, (__int64)v9);
  }
  MmProbeAndLockPages(MemoryDescriptorList, AccessMode, (LOCK_OPERATION)(Operation != IoReadAccess));
  if ( v8 )
    KiUnstackDetachProcess((struct _KTHREAD *)v9, 0);
}
