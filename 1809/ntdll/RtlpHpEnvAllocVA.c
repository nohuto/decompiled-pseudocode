/*
 * XREFs of RtlpHpEnvAllocVA @ 0x180060E80
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x18005D4D0 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpAllocVA @ 0x180060CA0 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1800638AC (RtlpHpVaMgrAllocAligned.c)
 *     RtlCSparseBitmapStart @ 0x18010DFFC (RtlCSparseBitmapStart.c)
 * Callees:
 *     NtAllocateVirtualMemoryEx @ 0x1800A1170 (NtAllocateVirtualMemoryEx.c)
 */

NTSTATUS __fastcall RtlpHpEnvAllocVA(
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        __int64 a3,
        int a4,
        ULONG PageProtection,
        int a6,
        int a7,
        __int64 a8)
{
  ULONG v8; // r9d
  ULONG ExtendedParameterCount; // edx
  MEM_EXTENDED_PARAMETER *ExtendedParameters; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  _QWORD v16[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v17[5]; // [rsp+58h] [rbp-28h] BYREF

  v8 = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v8 & 0x2000) == 0 )
    v8 &= ~0x20000000u;
  ExtendedParameterCount = 0;
  if ( (v8 & 0x2000) != 0 )
  {
    v14 = 0LL;
    v16[2] = a3;
    v17[0] = 1LL;
    v16[1] = 0LL;
    v17[1] = v16;
    ExtendedParameterCount = 1;
    if ( (v8 & 0x40000) != 0 )
      v14 = 0x100000000LL;
    v16[0] = v14;
    v15 = v8 & 0xFFFBFFFF;
    if ( (v8 & 0x40000) == 0 )
      v15 = v8;
    v8 = v15;
    if ( a8 )
    {
      v17[3] = a8;
      v17[2] = 3LL;
      ExtendedParameterCount = 2;
    }
  }
  ExtendedParameters = (MEM_EXTENDED_PARAMETER *)v17;
  if ( !ExtendedParameterCount )
    ExtendedParameters = 0LL;
  return NtAllocateVirtualMemoryEx(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           RegionSize,
           v8,
           PageProtection,
           ExtendedParameters,
           ExtendedParameterCount);
}
