/*
 * XREFs of MiFlushHyperSpace @ 0x14017E888
 * Callers:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttributeBatch @ 0x140098620 (MiChangePageAttributeBatch.c)
 *     MiAllocateHyperSpace @ 0x14011ABC4 (MiAllocateHyperSpace.c)
 *     MiFlushCacheForAttributeChange @ 0x14015B7C0 (MiFlushCacheForAttributeChange.c)
 * Callees:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void MiFlushHyperSpace()
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 HyperPte; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v5[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v5, 0, 0xB8uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  HyperPte = (unsigned __int64)CurrentPrcb->HyperPte;
  v5[3] = 0LL;
  HyperPte &= 0xFFFFFFFFFFFFF000uLL;
  LODWORD(v5[1]) = 20;
  BYTE4(v5[0]) = 1;
  MiInsertTbFlushEntry((__int64)v5, HyperPte, 64LL, 0);
  MiFlushTbList((int *)v5, v2, v3, v4);
  CurrentPrcb->HyperPte = (void *)HyperPte;
}
