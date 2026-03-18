/*
 * XREFs of MmProbeAndLockProcessPages @ 0x140660A20
 * Callers:
 *     CcAsyncReadPrefetch @ 0x140091B00 (CcAsyncReadPrefetch.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1400CBF50 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
