/*
 * XREFs of PspCreateSilo @ 0x140886FC0
 * Callers:
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     PspUnlockJob @ 0x1405FE0C0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405FE100 (PspLockJobExclusive.c)
 *     PspAllocStorage @ 0x1407595A8 (PspAllocStorage.c)
 *     PspJobHasChildren @ 0x140889DD8 (PspJobHasChildren.c)
 *     PspFreeStorage @ 0x14088F358 (PspFreeStorage.c)
 */

__int64 __fastcall PspCreateSilo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v2; // rdi
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v6; // rcx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v7 = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  if ( !*(_QWORD *)(a1 + 1288) )
  {
    result = PspAllocStorage(&v7);
    if ( (int)result < 0 )
      return result;
    v2 = (void *)v7;
  }
  PspLockJobExclusive(a1, (__int64)CurrentThread);
  if ( (unsigned __int8)PspJobHasChildren(a1) )
  {
    v5 = -1073740529;
  }
  else if ( (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0 )
  {
    v5 = -1073740536;
  }
  else if ( (*(_DWORD *)(a1 + 256) & 0x402000) != 0 )
  {
    v6 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1288), (signed __int64)v2, 0LL) != 0);
    v7 &= v6;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1304), 0x40000000u);
    v2 = (void *)v7;
    v5 = 0;
  }
  else
  {
    v5 = -1073741811;
  }
  PspUnlockJob(a1, (__int64)CurrentThread);
  if ( v2 )
    PspFreeStorage(v2);
  return v5;
}
