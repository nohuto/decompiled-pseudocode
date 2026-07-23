/*
 * XREFs of SmPrepareForFatalHeapCorruption @ 0x1403093BC
 * Callers:
 *     SmHpBufferProtectEx @ 0x14014A370 (SmHpBufferProtectEx.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140173360 (KeRegisterBugCheckReasonCallback.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmPrepareForFatalHeapCorruption(
        void *Src,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        LONGLONG *a5)
{
  __int64 v5; // rbp
  __int64 v7; // r15
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // rax
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v9; // rdi
  unsigned int v10; // ebx
  _QWORD *v11; // rbx

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
    memset(v11, 0, 0x38uLL);
    v11[5] = *a5;
    *(_DWORD *)v11 = 1;
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
