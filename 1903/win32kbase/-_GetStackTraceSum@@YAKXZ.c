/*
 * XREFs of ?_GetStackTraceSum@@YAKXZ @ 0x1C0113414
 * Callers:
 *     ?_IsStackThrottled@@YAHXZ @ 0x1C0113514 (-_IsStackThrottled@@YAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 _GetStackTraceSum(void)
{
  unsigned int v0; // ebx
  ULONG v1; // ebp
  unsigned __int16 v2; // si
  int v3; // eax
  _QWORD MemoryInformation[4]; // [rsp+30h] [rbp-C8h] BYREF
  PVOID Callers[16]; // [rsp+50h] [rbp-A8h] BYREF

  memset(MemoryInformation, 0, 24);
  v0 = 0;
  v1 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  v2 = 0;
  if ( v1 > 0x10 )
    v1 = 16;
  if ( v1 )
  {
    do
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             Callers[v2],
             MemoryWorkingSetExList|MemorySectionName,
             MemoryInformation,
             0x18uLL,
             0LL) < 0
        || (unsigned __int64)Callers[v2] < MemoryInformation[0] )
      {
        v3 = (int)Callers[v2];
      }
      else
      {
        v3 = LODWORD(Callers[v2]) - LODWORD(MemoryInformation[0]);
      }
      ++v2;
      v0 += v3;
    }
    while ( v2 < v1 );
  }
  return v0;
}
