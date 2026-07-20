/*
 * XREFs of SmpWaitForSingleSubSys @ 0x140004838
 * Callers:
 *     SmpSbCreateSession @ 0x140002BE0 (SmpSbCreateSession.c)
 *     wmain @ 0x14000320C (wmain.c)
 *     SmpLoadSubSystem @ 0x140012B94 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpUnlockKnownSubSysList @ 0x140004334 (SmpUnlockKnownSubSysList.c)
 *     SmpLockKnownSubSysList @ 0x140004760 (SmpLockKnownSubSysList.c)
 *     SmpCheckSubSysStatus @ 0x140004874 (SmpCheckSubSysStatus.c)
 *     SmpWaitForStatusChange @ 0x140013C88 (SmpWaitForStatusChange.c)
 */

__int64 __fastcall SmpWaitForSingleSubSys(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( (unsigned int)SmpCheckSubSysStatus(a1) )
    goto LABEL_2;
  SmpLockKnownSubSysList(*(_DWORD *)(v3 + 64), 1, (__int64)v6);
  if ( !(unsigned int)SmpCheckSubSysStatus(a1) )
    v2 = SmpWaitForStatusChange(v5, (*(_DWORD *)(a1 + 8) & 1) == 0, v6);
  SmpUnlockKnownSubSysList((__int64)v6);
  if ( v2 >= 0 )
  {
LABEL_2:
    if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v2;
}
