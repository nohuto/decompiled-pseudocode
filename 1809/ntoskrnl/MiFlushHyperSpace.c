/*
 * XREFs of MiFlushHyperSpace @ 0x140176054
 * Callers:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     MiAllocateHyperSpace @ 0x1400B39C0 (MiAllocateHyperSpace.c)
 *     MiFlushCacheForAttributeChange @ 0x140138FC8 (MiFlushCacheForAttributeChange.c)
 * Callees:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void MiFlushHyperSpace()
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v6; // [rsp+24h] [rbp-D4h]
  __int64 v7; // [rsp+28h] [rbp-D0h]
  __int64 v8; // [rsp+30h] [rbp-C8h]
  __int64 v9; // [rsp+38h] [rbp-C0h]

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v7 = 20LL;
  v5 = 0;
  v6 = 1;
  v8 = 0LL;
  v9 = 0LL;
  MiInsertTbFlushEntry((__int64)&v5, v1, 64LL, 0);
  MiFlushTbList(&v5, v2, v3, v4);
  CurrentPrcb->HyperPte = (void *)v1;
}
