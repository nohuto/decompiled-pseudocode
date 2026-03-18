/*
 * XREFs of NtQueryPerformanceCounter @ 0x1406C6E40
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryPerformanceCounter(PLARGE_INTEGER Counter, PLARGE_INTEGER Frequency)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+18h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)Counter & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = 0x7FFFFFFF0000LL;
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Counter < 0x7FFFFFFF0000LL )
      v5 = (__int64)Counter;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 7) = *(_BYTE *)(v5 + 7);
    if ( Frequency )
    {
      if ( ((unsigned __int8)Frequency & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Frequency < 0x7FFFFFFF0000LL )
        v4 = (__int64)Frequency;
      *(_BYTE *)v4 = *(_BYTE *)v4;
      *(_BYTE *)(v4 + 7) = *(_BYTE *)(v4 + 7);
    }
    *Counter = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( Frequency )
      *Frequency = PerformanceFrequency;
  }
  else
  {
    *Counter = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( Frequency )
      *Frequency = PerformanceFrequency;
  }
  return 0;
}
