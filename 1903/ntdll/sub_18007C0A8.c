/*
 * XREFs of sub_18007C0A8 @ 0x18007C0A8
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x1800650D0 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x180065A00 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180065C10 (RtlAddGrowableFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x18007F090 (RtlSetProtectedPolicy.c)
 *     sub_18007F8D0 @ 0x18007F8D0 (sub_18007F8D0.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

__int64 sub_18007C0A8()
{
  __int64 result; // rax
  __int64 Heap; // rax
  _DWORD *v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  char *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)LdrControlFlowGuardEnforced() || qword_18017A278 )
    return 0LL;
  v6 = 0LL;
  v7 = qword_180165008;
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
        sub_180035F18(0);
        RtlAcquireSRWLockExclusive(&qword_180165010);
        if ( !qword_18017A278 )
        {
          qword_18017A288 = v4;
          qword_18017A278 = (__int64)v2;
          RtlReleaseSRWLockExclusive(&qword_180165010);
          sub_180035F18(1);
          return 0LL;
        }
        RtlReleaseSRWLockExclusive(&qword_180165010);
        sub_180035F18(1);
        RtlProtectHeap(v2, 0);
        RtlFreeHeap((__int64)v2, 0, v4);
        v5 = (__int64)v2;
      }
      RtlDestroyHeap(v5);
    }
    ZwFreeVirtualMemory(-1LL, &v6, &v7, 0x8000LL);
    if ( !qword_18017A278 )
      return 3221225495LL;
    return 0LL;
  }
  return result;
}
