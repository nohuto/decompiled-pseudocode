/*
 * XREFs of RtlpInitializeLowFragHeapManager @ 0x180107870
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800EEF74 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x180049F80 (RtlpHeapGenerateRandomValue64.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009D550 (NtQuerySystemInformation.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

void *__fastcall RtlpInitializeLowFragHeapManager(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v4; // cl
  unsigned int v5; // eax
  void *result; // rax
  _BYTE SystemInformation[56]; // [rsp+20h] [rbp-58h] BYREF
  char v8; // [rsp+58h] [rbp-20h]

  v3 = 1;
  RtlpLFHKey = RtlpHeapGenerateRandomValue64(a1, a2, a3);
  if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
  {
    v4 = 0;
    if ( (unsigned int)v8 > 1 )
    {
      do
        ++v4;
      while ( (unsigned int)v8 >> v4 > 1 );
    }
    v5 = -(1 << v4) & ((1LL << v4) + v8 - 1);
    if ( v5 > 0x40 )
      v5 = 64;
    v3 = v5;
  }
  RtlpAffinityState[0] = v3;
  result = memset(&RtlpDefaultHeapDebuggingOptions, 0, 0x30uLL);
  if ( (RtlpDisableHeapLookaside & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = (void *)(((unsigned int)RtlpDisableHeapLookaside >> 4) & 3);
    dword_180163CCC = ((unsigned int)RtlpDisableHeapLookaside >> 4) & 3;
  }
  return result;
}
