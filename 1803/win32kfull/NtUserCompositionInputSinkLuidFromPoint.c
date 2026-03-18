/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x1C01EC400
 * Callers:
 *     <none>
 * Callees:
 *     RequestInputSinkInfoFromPoint @ 0x1C0005670 (RequestInputSinkInfoFromPoint.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _OWORD *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  ULONG64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 CurrentProcess; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG64 v20; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ebx
  _OWORD *v27; // rdi
  __int64 v28; // rax
  __int128 v30[13]; // [rsp+50h] [rbp-D8h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 1LL);
  memset(v30, 0, 0x70uLL);
  if ( a1 != 6 && a1 )
  {
    v11 = 87LL;
LABEL_4:
    v12 = 0;
    UserSetLastError(v11, v9);
    goto LABEL_25;
  }
  CurrentProcess = PsGetCurrentProcess(v10, v9);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v11 = 5LL;
    goto LABEL_4;
  }
  v20 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v20 > MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)((char *)v30 + 4) = *a2;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20, v9, v18, v19);
  ProbeForWrite(a3, 8uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  v26 = LODWORD(v30[0]) | 1;
  LODWORD(v30[0]) |= 1u;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 8u);
    v26 |= 2u;
    LODWORD(v30[0]) = v26;
    *a4 = 0LL;
  }
  v27 = Address;
  if ( Address )
  {
    v28 = PsGetCurrentProcessWow64Process(v23, v22, v24, v25);
    ProbeForWrite(Address, 0x40uLL, v28 != 0 ? 1 : 4);
    LODWORD(v30[0]) = v26 | 4;
    memset(&v30[9], 0, 0x40uLL);
    *Address = v30[9];
    Address[1] = v30[10];
    Address[2] = v30[11];
    Address[3] = v30[12];
  }
  HIDWORD(v30[0]) = a1;
  v12 = RequestInputSinkInfoFromPoint(v30);
  if ( v12 )
  {
    v14 = MmUserProbeAddress;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    *a3 = *(_QWORD *)((char *)&v30[1] + 4);
    v13 = LODWORD(v30[0]);
    if ( (v30[0] & 2) != 0 )
    {
      v14 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      *a4 = *(_QWORD *)&v30[2];
    }
    if ( (v13 & 4) != 0 )
    {
      v14 = MmUserProbeAddress;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v27 = (_OWORD *)MmUserProbeAddress;
      *v27 = *(__int128 *)((char *)&v30[2] + 8);
      v27[1] = *(__int128 *)((char *)&v30[3] + 8);
      v27[2] = *(__int128 *)((char *)&v30[4] + 8);
      v27[3] = *(__int128 *)((char *)&v30[5] + 8);
    }
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v12;
}
