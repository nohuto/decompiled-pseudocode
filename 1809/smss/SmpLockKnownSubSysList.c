/*
 * XREFs of SmpLockKnownSubSysList @ 0x14000474C
 * Callers:
 *     SmpReadySubSys @ 0x140002D40 (SmpReadySubSys.c)
 *     SmpWaitForSubSysStartup @ 0x14000462C (SmpWaitForSubSysStartup.c)
 *     SmpWaitForSingleSubSys @ 0x140004824 (SmpWaitForSingleSubSys.c)
 *     SmpDeleteSubSys @ 0x140016738 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x140016930 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpLockKnownSubSysList(char a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  v3 = SmpKnownSubSysTable + 24LL * (a1 & 0x1F);
  if ( a3 )
  {
    *(_QWORD *)(a3 + 8) = v3;
    *(_DWORD *)a3 = a2;
  }
  v4 = v3 + 16;
  if ( a2 == 1 )
    return RtlAcquireSRWLockShared(v4);
  else
    return RtlAcquireSRWLockExclusive(v4);
}
