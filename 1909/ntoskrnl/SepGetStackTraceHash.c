/*
 * XREFs of SepGetStackTraceHash @ 0x14031C75C
 * Callers:
 *     SepLogLpacAccessFailure @ 0x14031C864 (SepLogLpacAccessFailure.c)
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017560 (RtlCaptureStackBackTrace.c)
 *     RtlWalkFrameChain @ 0x140017620 (RtlWalkFrameChain.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1401C10B0 (ZwQueryVirtualMemory.c)
 */

ULONG __fastcall SepGetStackTraceHash(ULONG *a1)
{
  ULONG result; // eax
  unsigned int v3; // esi
  unsigned __int16 v4; // di
  int v5; // ecx
  ULONG v6; // ecx
  ULONG BackTraceHash; // [rsp+30h] [rbp-79h] BYREF
  _QWORD MemoryInformation[3]; // [rsp+38h] [rbp-71h] BYREF
  PVOID BackTrace[16]; // [rsp+50h] [rbp-59h] BYREF

  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  BackTraceHash = 0;
  RtlCaptureStackBackTrace(2u, 0x10u, BackTrace, &BackTraceHash);
  result = RtlWalkFrameChain(BackTrace, 0x10u, 1u);
  v3 = result;
  v4 = 0;
  if ( result > 0x10 )
    v3 = 16;
  if ( v3 )
  {
    do
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BackTrace[v4],
             MemoryImageInformation,
             MemoryInformation,
             0x18uLL,
             0LL) < 0
        || (unsigned __int64)BackTrace[v4] < MemoryInformation[0] )
      {
        v5 = (int)BackTrace[v4];
      }
      else
      {
        v5 = LODWORD(BackTrace[v4]) - LODWORD(MemoryInformation[0]);
      }
      v6 = BackTraceHash + v5;
      result = ++v4;
      BackTraceHash = v6;
    }
    while ( v4 < v3 );
  }
  else
  {
    v6 = BackTraceHash;
  }
  *a1 = v6;
  return result;
}
