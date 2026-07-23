/*
 * XREFs of NtQueryTimerResolution @ 0x1406CBE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryTimerResolution(PULONG MinimumResolution, PULONG MaximumResolution, PULONG ActualResolution)
{
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MinimumResolution < 0x7FFFFFFF0000LL )
      v6 = (__int64)MinimumResolution;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MaximumResolution < 0x7FFFFFFF0000LL )
      v7 = (__int64)MaximumResolution;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    if ( (unsigned __int64)ActualResolution < 0x7FFFFFFF0000LL )
      v5 = (__int64)ActualResolution;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    *MinimumResolution = KeMaximumIncrement;
    *MaximumResolution = KeMinimumIncrement;
    *ActualResolution = KeTimeIncrement;
  }
  else
  {
    *MinimumResolution = KeMaximumIncrement;
    *MaximumResolution = KeMinimumIncrement;
    *ActualResolution = KeTimeIncrement;
  }
  return 0;
}
