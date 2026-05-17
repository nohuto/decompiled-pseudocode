/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x18005C818
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x18006F2B0 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F5E0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F8F0 (RtlAddGrowableFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x180083730 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084200 (RtlpAddVectoredHandler.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 */

__int64 LdrEnsureMrdataHeapExists()
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)LdrControlFlowGuardEnforced() || LdrpMrdataHeap )
    return 0LL;
  v10 = 0LL;
  v11 = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory(-1LL, &v10, 0LL, &v11, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = RtlCreateHeap(2LL, v10, 0LL, 0LL, 0LL, 0LL);
    v2 = Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap(Heap, 0, 4LL);
      v5 = (unsigned __int64)v3;
      v6 = v2;
      if ( v3 )
      {
        LOBYTE(v4) = 1;
        *v3 = 0;
        RtlProtectHeap(v2, v4);
        LdrProtectMrdata(0LL);
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v7, v8, v9);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v5;
          LdrpMrdataHeap = v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1LL);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1LL);
        RtlProtectHeap(v2, 0LL);
        RtlFreeHeap(v2, 0, v5);
        v6 = v2;
      }
      RtlDestroyHeap(v6);
    }
    ZwFreeVirtualMemory(-1LL, &v10, &v11, 0x8000LL);
    if ( !LdrpMrdataHeap )
      return 3221225495LL;
    return 0LL;
  }
  return result;
}
