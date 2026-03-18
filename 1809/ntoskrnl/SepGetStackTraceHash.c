/*
 * XREFs of SepGetStackTraceHash @ 0x1402FE9FC
 * Callers:
 *     SepLogLpacAccessFailure @ 0x1402FEB00 (SepLogLpacAccessFailure.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1400CCBB0 (RtlWalkFrameChain.c)
 *     RtlCaptureStackBackTrace @ 0x1400CCC90 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1401B85D0 (ZwQueryVirtualMemory.c)
 */

ULONG __fastcall SepGetStackTraceHash(ULONG *a1)
{
  ULONG result; // eax
  unsigned int v3; // esi
  unsigned __int16 v4; // bx
  PVOID v5; // rcx
  int v6; // ecx
  ULONG v7; // ecx
  ULONG BackTraceHash; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 MemoryInformation[3]; // [rsp+38h] [rbp-C0h] BYREF
  PVOID BackTrace[16]; // [rsp+50h] [rbp-A8h] BYREF

  BackTraceHash = 0;
  RtlCaptureStackBackTrace(2u, 0x10u, BackTrace, &BackTraceHash);
  result = RtlWalkFrameChain(BackTrace, 0x10u, 1u);
  v3 = result;
  if ( result > 0x10 )
    v3 = 16;
  v4 = 0;
  if ( v3 )
  {
    do
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BackTrace[v4],
             MemoryWorkingSetExList|MemorySectionName,
             MemoryInformation,
             0x18uLL,
             0LL) < 0
        || (v5 = BackTrace[v4], (unsigned __int64)v5 < MemoryInformation[0]) )
      {
        v6 = (int)BackTrace[v4];
      }
      else
      {
        v6 = (_DWORD)v5 - LODWORD(MemoryInformation[0]);
      }
      v7 = BackTraceHash + v6;
      result = ++v4;
      BackTraceHash = v7;
    }
    while ( v4 < v3 );
  }
  else
  {
    v7 = BackTraceHash;
  }
  *a1 = v7;
  return result;
}
