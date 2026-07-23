/*
 * XREFs of MmProbeAndLockProcessPages @ 0x1405D4FB0
 * Callers:
 *     CcAsyncReadPrefetch @ 0x1400DFB4C (CcAsyncReadPrefetch.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __stdcall MmProbeAndLockProcessPages(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  int v6; // ebx
  LOCK_OPERATION v7; // edi
  _BYTE v8[48]; // [rsp+28h] [rbp-60h] BYREF

  v6 = 0;
  v7 = Operation != IoReadAccess;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    v6 = 1;
    KiStackAttachProcess(Process, 0LL, (__int64)v8);
  }
  MmProbeAndLockPages(MemoryDescriptorList, AccessMode, v7);
  if ( v6 )
    KiUnstackDetachProcess((__int64)v8, 0LL);
}
