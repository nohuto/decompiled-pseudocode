/*
 * XREFs of GetHmodTableIndex @ 0x1C00B5D9C
 * Callers:
 *     _SetWinEventHook @ 0x1C00B41C4 (_SetWinEventHook.c)
 *     zzzSetWindowsHookEx @ 0x1C00B5454 (zzzSetWindowsHookEx.c)
 *     _RegisterDManipHook @ 0x1C0125A60 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C0130888 (_RegisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00B61D8 (--0-$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetHmodTableIndex(unsigned int *a1)
{
  __int64 v2; // rcx
  ULONG64 v3; // rbx
  ULONG64 v4; // rdx
  _BYTE **v5; // rax
  unsigned __int16 v6; // ax
  int v8; // ebx
  unsigned __int16 near **v9; // rcx
  unsigned __int16 near **v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+58h] [rbp+10h]
  tagObjLock *v15; // [rsp+60h] [rbp+18h] BYREF

  CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(&v15);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v2 = *a1;
  v14 = *a1;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (unsigned __int16)v2 + v3 + 2;
  v5 = (_BYTE **)MmUserProbeAddress;
  if ( v4 < MmUserProbeAddress && (unsigned __int16)v2 <= HIWORD(v14) )
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
    tagObjLock::UnLock(v15);
    return 0xFFFFFFFFLL;
  }
  v8 = 0;
  if ( catomSysTableEntries > 0 )
  {
    v9 = &aatomSysLoaded;
    do
    {
      if ( *(_WORD *)v9 == v6 )
        break;
      ++v8;
      v9 = (unsigned __int16 near **)((char *)v9 + 2);
    }
    while ( v8 < catomSysTableEntries );
  }
  if ( v8 == catomSysTableEntries )
  {
    v8 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v10 = &aatomSysLoaded;
      do
      {
        if ( !*(_WORD *)v10 )
          break;
        ++v8;
        v10 = (unsigned __int16 near **)((char *)v10 + 2);
      }
      while ( v8 < catomSysTableEntries );
    }
    if ( v8 == catomSysTableEntries )
    {
      if ( v8 == 32 )
      {
        UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v6, &aatomSysLoaded);
        UserSetLastError(8LL, v11, v12, v13);
        goto LABEL_13;
      }
      ++catomSysTableEntries;
    }
    *((_WORD *)&aatomSysLoaded + v8) = v6;
    *((_DWORD *)&acatomSysUse + v8) = 0;
    *((_DWORD *)&acatomSysDepends + v8) = 0;
  }
  else
  {
    UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v6, &aatomSysLoaded);
  }
  tagObjLock::UnLock(v15);
  return (unsigned int)v8;
}
