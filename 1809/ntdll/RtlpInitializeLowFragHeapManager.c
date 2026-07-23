/*
 * XREFs of RtlpInitializeLowFragHeapManager @ 0x18010A3CC
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800F1FC4 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x18000E97C (RtlpHeapGenerateRandomValue64.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x1800A09C0 (NtQuerySystemInformation.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void *RtlpInitializeLowFragHeapManager()
{
  unsigned int v0; // ebx
  char v1; // cl
  unsigned int v2; // eax
  void *result; // rax
  _BYTE SystemInformation[56]; // [rsp+20h] [rbp-58h] BYREF
  char v5; // [rsp+58h] [rbp-20h]

  v0 = 1;
  RtlpLFHKey = RtlpHeapGenerateRandomValue64();
  if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( (unsigned int)v5 > 1 )
    {
      do
        ++v1;
      while ( (unsigned int)v5 >> v1 > 1 );
    }
    v2 = -(1 << v1) & ((1LL << v1) + v5 - 1);
    if ( v2 > 0x40 )
      v2 = 64;
    v0 = v2;
  }
  RtlpAffinityState[0] = v0;
  result = memset(&RtlpDefaultHeapDebuggingOptions, 0, 0x30uLL);
  if ( (RtlpDisableHeapLookaside & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = (void *)(((unsigned int)RtlpDisableHeapLookaside >> 4) & 3);
    dword_180163C2C = ((unsigned int)RtlpDisableHeapLookaside >> 4) & 3;
  }
  return result;
}
