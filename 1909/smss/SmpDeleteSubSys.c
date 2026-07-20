/*
 * XREFs of SmpDeleteSubSys @ 0x140013A98
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140003DE0 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x140012B94 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpCompleteSubSysStatusChange @ 0x140002DD4 (SmpCompleteSubSysStatusChange.c)
 *     SmpUnlockKnownSubSysList @ 0x140004334 (SmpUnlockKnownSubSysList.c)
 *     SmpLockKnownSubSysList @ 0x140004760 (SmpLockKnownSubSysList.c)
 *     SmpDereferenceKnownSubSys @ 0x1400047A0 (SmpDereferenceKnownSubSys.c)
 */

void __fastcall SmpDeleteSubSys(char *BaseAddress)
{
  int v2; // edi
  char **v3; // rdx
  PVOID *v4; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (BaseAddress[8] & 4) == 0 )
  {
    v2 = 1;
    SmpLockKnownSubSysList(*((_DWORD *)BaseAddress + 16), 0, (__int64)v5);
    if ( (BaseAddress[8] & 4) != 0 )
    {
      v2 = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)BaseAddress + 2, 4u);
      v3 = (char **)*((_QWORD *)BaseAddress + 9);
      if ( v3[1] != BaseAddress + 72 || (v4 = (PVOID *)*((_QWORD *)BaseAddress + 10), *v4 != BaseAddress + 72) )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = (char *)v4;
    }
    SmpUnlockKnownSubSysList((__int64)v5);
    if ( v2 == 1 )
    {
      SmpCompleteSubSysStatusChange((__int64)BaseAddress);
      SmpDereferenceKnownSubSys(BaseAddress);
    }
  }
}
