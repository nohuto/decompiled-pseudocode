/*
 * XREFs of GetHmodTableIndex @ 0x1C00D8520
 * Callers:
 *     _RegisterUserApiHook @ 0x1C00D6CA4 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00D6F44 (_RegisterDManipHook.c)
 *     _SetWinEventHook @ 0x1C00D77D0 (_SetWinEventHook.c)
 *     zzzSetWindowsHookEx @ 0x1C00D7FBC (zzzSetWindowsHookEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00D88F8 (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetHmodTableIndex(unsigned int *a1)
{
  __int64 v2; // rcx
  ULONG64 v3; // rbx
  ULONG64 v4; // rdx
  _BYTE **v5; // rax
  unsigned __int16 v6; // ax
  __int64 v7; // r9
  int v9; // ebx
  unsigned __int16 near **v10; // rcx
  unsigned __int16 near **v11; // rcx
  __int64 v12; // rdx
  int v13; // [rsp+58h] [rbp+10h]
  tagObjLock *v14; // [rsp+60h] [rbp+18h] BYREF

  CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v14);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v2 = *a1;
  v13 = *a1;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (unsigned __int16)v2 + v3 + 2;
  v5 = (_BYTE **)MmUserProbeAddress;
  if ( v4 < MmUserProbeAddress && (unsigned __int16)v2 <= HIWORD(v13) )
  {
    if ( (v2 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
      v5 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v4 > v3 )
      goto LABEL_12;
  }
  if ( (v2 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v5 = 0;
LABEL_12:
  v6 = UserAddAtomToAtomTableEx(UserLibmgmtAtomTableHandle, v3, 0LL, 2LL);
  if ( !v6 )
  {
LABEL_13:
    tagObjLock::UnLock(v14);
    return 0xFFFFFFFFLL;
  }
  v9 = 0;
  if ( catomSysTableEntries > 0 )
  {
    v10 = &aatomSysLoaded;
    do
    {
      if ( *(_WORD *)v10 == v6 )
        break;
      ++v9;
      v10 = (unsigned __int16 near **)((char *)v10 + 2);
    }
    while ( v9 < catomSysTableEntries );
  }
  if ( v9 == catomSysTableEntries )
  {
    v9 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v11 = &aatomSysLoaded;
      do
      {
        if ( !*(_WORD *)v11 )
          break;
        ++v9;
        v11 = (unsigned __int16 near **)((char *)v11 + 2);
      }
      while ( v9 < catomSysTableEntries );
    }
    if ( v9 == catomSysTableEntries )
    {
      if ( v9 == 32 )
      {
        UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v6, &aatomSysLoaded, v7);
        UserSetLastError(8LL, v12);
        goto LABEL_13;
      }
      ++catomSysTableEntries;
    }
    *((_WORD *)&aatomSysLoaded + v9) = v6;
    *((_DWORD *)&acatomSysUse + v9) = 0;
    *((_DWORD *)&acatomSysDepends + v9) = 0;
  }
  else
  {
    UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v6, &aatomSysLoaded, v7);
  }
  tagObjLock::UnLock(v14);
  return (unsigned int)v9;
}
