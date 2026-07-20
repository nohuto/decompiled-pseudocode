/*
 * XREFs of SmpUnlockKnownSubSysList @ 0x140004334
 * Callers:
 *     SmpTerminateCSR @ 0x14000105C (SmpTerminateCSR.c)
 *     SmpReadySubSys @ 0x140002D70 (SmpReadySubSys.c)
 *     wmain @ 0x14000320C (wmain.c)
 *     SmpHandleConnectionRequest @ 0x140003DE0 (SmpHandleConnectionRequest.c)
 *     SmpSearchKnownSubSysDatabase @ 0x14000426C (SmpSearchKnownSubSysDatabase.c)
 *     SmpWaitForSingleSubSys @ 0x140004838 (SmpWaitForSingleSubSys.c)
 *     SmpLoadSubSystem @ 0x140012B94 (SmpLoadSubSystem.c)
 *     SmpDeleteSubSys @ 0x140013A98 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x140013C88 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpUnlockKnownSubSysList(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = *(_QWORD *)(a1 + 8) + 16LL;
  if ( v1 )
    return RtlReleaseSRWLockShared(v2);
  else
    return RtlReleaseSRWLockExclusive(v2);
}
