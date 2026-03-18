/*
 * XREFs of KeFlushIoBuffers @ 0x14011D370
 * Callers:
 *     ViMapDoubleBuffer @ 0x14096C9A8 (ViMapDoubleBuffer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     KeInvalidateAllCaches @ 0x14013B4F0 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiFlushRangeAllCaches @ 0x1402AA680 (KiFlushRangeAllCaches.c)
 *     EtwTraceCpuCacheFlush @ 0x14032D2AC (EtwTraceCpuCacheFlush.c)
 */

char __fastcall KeFlushIoBuffers(ULONG_PTR BugCheckParameter4, char a2, char a3)
{
  __int64 v6; // r9
  PVOID v7; // rax
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // r12
  char v10; // si
  void *v11; // rbx
  LARGE_INTEGER v13[4]; // [rsp+30h] [rbp-58h] BYREF

  memset(v13, 0, sizeof(v13));
  LOBYTE(v7) = KiSystemFullyCoherent;
  if ( !KiSystemFullyCoherent )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = *(unsigned int *)(BugCheckParameter4 + 40);
    if ( a3 || a2 )
    {
      v10 = 1;
      if ( (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0 )
      {
        v11 = *(void **)(BugCheckParameter4 + 24);
      }
      else
      {
        v7 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter4, 0, MmCached, 0LL, 0, 0x40000020u);
        v11 = v7;
      }
      if ( !v11 && CurrentIrql == 15 )
        KeBugCheckEx(0x55u, 0x86uLL, 0xBADuLL, 0LL, 0LL);
      if ( (xmmword_140572410 & 0x4000000) != 0 )
        LOBYTE(v7) = EtwGetKernelTraceTimestamp(v13, 0x84000000);
      else
        v10 = 0;
      if ( v11 )
      {
        LOBYTE(v7) = KiFlushRangeAllCaches(BugCheckParameter4, v11, v9, a3);
      }
      else if ( a3 )
      {
        LOBYTE(v7) = KeInvalidateAllCaches();
      }
      if ( v10 )
      {
        LOBYTE(v6) = a2 == 0;
        LOBYTE(v7) = EtwTraceCpuCacheFlush(v13, v11, v9, v6);
      }
    }
  }
  return (char)v7;
}
