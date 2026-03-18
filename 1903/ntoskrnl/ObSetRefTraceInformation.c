/*
 * XREFs of ObSetRefTraceInformation @ 0x14089F568
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     ObpStartRuntimeStackTrace @ 0x1408A0258 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x1408A0690 (ObpStopRuntimeStackTrace.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObSetRefTraceInformation(_BYTE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  _BYTE *v5; // rcx

  v2 = a2;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return 3221225506LL;
  if ( (unsigned int)v2 < 0x28 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = &a1[v2];
    if ( (unsigned __int64)&a1[v2] > 0x7FFFFFFF0000LL || v5 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( *a1 )
    return ObpStartRuntimeStackTrace(a1);
  else
    return ObpStopRuntimeStackTrace(v5);
}
