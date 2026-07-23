/*
 * XREFs of RtlpInitializeStackTraceDatabase @ 0x140893188
 * Callers:
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 * Callees:
 *     NtFreeVirtualMemory @ 0x1405F0A50 (NtFreeVirtualMemory.c)
 *     RtlStdInitializeStackDatabase @ 0x140893054 (RtlStdInitializeStackDatabase.c)
 */

__int64 __fastcall RtlpInitializeStackTraceDatabase(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v4; // edx
  ULONG_PTR RegionSize; // [rsp+20h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-10h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp+20h] BYREF

  if ( RtlpStackTraceDatabase )
    return 3221225994LL;
  v4 = RtlStdInitializeStackDatabase(a1, a2, a3, &v7);
  if ( v4 >= 0
    && _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpStackTraceDatabase, (signed __int64)v7, 0LL) )
  {
    BaseAddress = v7;
    RegionSize = v7[23] - (_QWORD)v7;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 3221225994LL;
  }
  return (unsigned int)v4;
}
