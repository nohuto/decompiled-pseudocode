/*
 * XREFs of RtlCreateMemoryZone @ 0x18007EF80
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x18007EDB0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpInitializeStackTraceLog @ 0x1801054DC (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlCreateMemoryZone(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  _QWORD *v5; // rdx
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  if ( a3 || !a2 )
    return 3221225485LL;
  v8 = 0LL;
  v7 = (a2 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  result = ZwAllocateVirtualMemory(-1LL, &v8, 0LL, &v7, 12288, 4);
  if ( (int)result >= 0 )
  {
    v5 = v8;
    v8[4] = 0LL;
    v5[1] = v7;
    v5[2] = v5 + 7;
    v5[3] = (char *)v5 + v7;
    _InterlockedOr(v6, 0);
    v5[6] = v5;
    result = 0LL;
    *a1 = v5;
  }
  return result;
}
