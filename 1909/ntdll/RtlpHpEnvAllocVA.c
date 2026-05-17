/*
 * XREFs of RtlpHpEnvAllocVA @ 0x180047BA0
 * Callers:
 *     RtlpHpAllocVA @ 0x1800479C8 (RtlpHpAllocVA.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18004E798 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18004EA80 (RtlpHpVaMgrAllocAligned.c)
 *     RtlCSparseBitmapStart @ 0x18010BBC0 (RtlCSparseBitmapStart.c)
 * Callees:
 *     NtAllocateVirtualMemoryEx @ 0x18009DD00 (NtAllocateVirtualMemoryEx.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r9d
  __int64 v10; // rax
  _QWORD v11[8]; // [rsp+40h] [rbp-40h] BYREF

  v8 = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v8 & 0x2000) == 0 )
    v8 &= ~0x20000000u;
  if ( (v8 & 0x2000) != 0 )
  {
    v11[2] = a3;
    v11[3] = 1LL;
    v10 = 0LL;
    v11[1] = 0LL;
    v11[4] = v11;
    if ( (v8 & 0x40000) != 0 )
      v10 = 0x100000000LL;
    v11[0] = v10;
    if ( a8 )
    {
      v11[6] = a8;
      v11[5] = 3LL;
    }
  }
  return NtAllocateVirtualMemoryEx(-1LL, a1, a2);
}
