/*
 * XREFs of AllocateW32Thread @ 0x1C00F908C
 * Callers:
 *     W32pThreadCallout @ 0x1C00F8FE0 (W32pThreadCallout.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall AllocateW32Thread(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  void *v4; // rax
  void *v5; // rdi

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x6E747355u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v4 = (void *)Win32AllocPoolWithQuota(W32ThreadSize, 1769239381LL);
    v5 = v4;
    if ( v4 )
    {
      memset(v4, 0, W32ThreadSize);
      *(_QWORD *)v5 = a1;
      *v3 = v5;
      PsSetThreadWin32Thread(a1, v3, 0LL);
      ObfReferenceObject(*(PVOID *)v5);
      _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
      return 0LL;
    }
    ExFreePoolWithTag(v3, 0);
  }
  return 3221225495LL;
}
