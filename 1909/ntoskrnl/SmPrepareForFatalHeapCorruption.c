/*
 * XREFs of SmPrepareForFatalHeapCorruption @ 0x140326668
 * Callers:
 *     SmHpBufferProtectEx @ 0x140151A20 (SmHpBufferProtectEx.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140124C70 (MmGetPhysicalAddress.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14017AAF0 (KeRegisterBugCheckReasonCallback.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmPrepareForFatalHeapCorruption(
        void *Src,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        LONGLONG *a5)
{
  __int64 v5; // rbp
  __int64 v7; // r14
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // rax
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v9; // rdi
  unsigned int v10; // ebx
  _QWORD *v11; // rcx

  v5 = a4;
  v7 = a3;
  *a5 = MmGetPhysicalAddress(Src).QuadPart / 4096;
  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(
                                                              NonPagedPoolNx,
                                                              0x1060uLL,
                                                              0x50626D73u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->State = 0;
    v11 = (_QWORD *)(((unsigned __int64)&PoolWithTag[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    *v11 = 1LL;
    v11[6] = 0LL;
    v11[5] = *a5;
    v11[1] = Src;
    v11[2] = 4096LL;
    v11[4] = v5;
    v11[3] = v7;
    memmove(v11 + 6, Src, 0x1000uLL);
    if ( KeRegisterBugCheckReasonCallback(
           v9,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmFatalHeapCorruptionDumpCallback,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"nt!store memory compression") )
    {
      v9 = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741670;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
