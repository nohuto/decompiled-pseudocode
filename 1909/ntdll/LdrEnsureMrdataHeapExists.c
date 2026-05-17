/*
 * XREFs of LdrEnsureMrdataHeapExists @ 0x18007C748
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x180065170 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x180065BC0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180065EC0 (RtlAddGrowableFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x18007F730 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x18007FF70 (RtlpAddVectoredHandler.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004AA00 (RtlDestroyHeap.c)
 *     ZwAllocateVirtualMemory @ 0x18009D190 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 */

__int64 LdrEnsureMrdataHeapExists()
{
  __int64 result; // rax
  __int64 Heap; // rax
  _DWORD *v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  char *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)LdrControlFlowGuardEnforced() || LdrpMrdataHeap )
    return 0LL;
  v6 = 0LL;
  v7 = LdrpAllocationGranularity;
  result = ZwAllocateVirtualMemory(-1LL, &v6, 0LL, &v7, 0x2000, 4);
  if ( (int)result >= 0 )
  {
    Heap = RtlCreateHeap(2, v6, 0LL, 0LL, 0LL, 0LL);
    v2 = (_DWORD *)Heap;
    if ( Heap )
    {
      v3 = (_DWORD *)RtlAllocateHeap(Heap, 0, 4LL);
      v4 = (__int64)v3;
      v5 = (__int64)v2;
      if ( v3 )
      {
        *v3 = 0;
        RtlProtectHeap(v2, 1);
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !LdrpMrdataHeap )
        {
          LdrpMrdataHeapUnprotected = v4;
          LdrpMrdataHeap = (__int64)v2;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          LdrProtectMrdata(1);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        LdrProtectMrdata(1);
        RtlProtectHeap(v2, 0);
        RtlFreeHeap((__int64)v2, 0, v4);
        v5 = (__int64)v2;
      }
      RtlDestroyHeap(v5);
    }
    ZwFreeVirtualMemory(-1LL, &v6, &v7, 0x8000LL);
    if ( !LdrpMrdataHeap )
      return 3221225495LL;
    return 0LL;
  }
  return result;
}
