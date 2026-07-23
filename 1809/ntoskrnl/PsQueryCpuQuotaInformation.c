/*
 * XREFs of PsQueryCpuQuotaInformation @ 0x140193EE4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiGetNextSession @ 0x140012754 (MiGetNextSession.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14064FBE0 (MmGetSessionSchedulingGroupByProcess.c)
 *     MmQuitNextSession @ 0x1406D08F0 (MmQuitNextSession.c)
 */

__int64 __fastcall PsQueryCpuQuotaInformation(_DWORD *Address, SIZE_T Length, KPROCESSOR_MODE PreviousMode, _DWORD *a4)
{
  SIZE_T v6; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  _QWORD *i; // rcx
  _QWORD *NextSession; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  unsigned __int16 *SessionSchedulingGroupByProcess; // r12

  v6 = (unsigned int)Length;
  if ( !PsCpuFairShareEnabled )
    return 3221225897LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( (_DWORD)v6 )
  {
    if ( (((_BYTE)v6 - 4) & 7) != 0 || (unsigned int)v6 < 4 )
      return 3221225476LL;
    v9 = (unsigned int)(v6 - 4) >> 3;
    if ( PreviousMode == 1 )
      ProbeForWrite(Address, v6, 4u);
  }
  else
  {
    v9 = 0;
    Address = 0LL;
  }
  v10 = 0LL;
  for ( i = 0LL; ; i = v13 )
  {
    NextSession = MiGetNextSession(i);
    v13 = NextSession;
    if ( !NextSession )
      break;
    SessionSchedulingGroupByProcess = (unsigned __int16 *)MmGetSessionSchedulingGroupByProcess(NextSession);
    if ( SessionSchedulingGroupByProcess )
    {
      if ( (unsigned int)v10 < v9 )
      {
        Address[2 * v10 + 1] = MmGetSessionIdEx(v14);
        Address[2 * v10 + 2] = *SessionSchedulingGroupByProcess;
      }
      v10 = (unsigned int)(v10 + 1);
    }
  }
  if ( Address )
    *Address = v10;
  *a4 = 8 * v10 + 4;
  return v9 < (unsigned int)v10 ? 0xC0000023 : 0;
}
