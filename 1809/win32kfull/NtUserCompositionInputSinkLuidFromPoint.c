/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x1C0212630
 * Callers:
 *     <none>
 * Callees:
 *     RequestInputSinkInfoFromPoint @ 0x1C00042E4 (RequestInputSinkInfoFromPoint.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _OWORD *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  ULONG64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 CurrentProcess; // rax
  ULONG64 v20; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v22; // rcx
  int v23; // ebx
  _OWORD *v24; // rdi
  __int64 v25; // rax
  __int128 v27[13]; // [rsp+50h] [rbp-D8h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 1LL);
  memset(v27, 0, 0x70uLL);
  if ( a1 != 6 && a1 )
  {
    v13 = 87LL;
LABEL_4:
    v14 = 0;
    UserSetLastError(v13, v9, v11, v12);
    goto LABEL_25;
  }
  CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v13 = 5LL;
    goto LABEL_4;
  }
  v20 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v20 > MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)((char *)v27 + 4) = *a2;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20);
  ProbeForWrite(a3, 8uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  v23 = LODWORD(v27[0]) | 1;
  LODWORD(v27[0]) |= 1u;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 8u);
    v23 |= 2u;
    LODWORD(v27[0]) = v23;
    *a4 = 0LL;
  }
  v24 = Address;
  if ( Address )
  {
    v25 = PsGetCurrentProcessWow64Process(v22);
    ProbeForWrite(Address, 0x40uLL, v25 != 0 ? 1 : 4);
    LODWORD(v27[0]) = v23 | 4;
    memset(&v27[9], 0, 0x40uLL);
    *Address = v27[9];
    Address[1] = v27[10];
    Address[2] = v27[11];
    Address[3] = v27[12];
  }
  HIDWORD(v27[0]) = a1;
  v14 = RequestInputSinkInfoFromPoint(v27);
  if ( v14 )
  {
    v16 = MmUserProbeAddress;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    *a3 = *(_QWORD *)((char *)&v27[1] + 4);
    v15 = LODWORD(v27[0]);
    if ( (v27[0] & 2) != 0 )
    {
      v16 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      *a4 = *(_QWORD *)&v27[2];
    }
    if ( (v15 & 4) != 0 )
    {
      v16 = MmUserProbeAddress;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v24 = (_OWORD *)MmUserProbeAddress;
      *v24 = *(__int128 *)((char *)&v27[2] + 8);
      v24[1] = *(__int128 *)((char *)&v27[3] + 8);
      v24[2] = *(__int128 *)((char *)&v27[4] + 8);
      v24[3] = *(__int128 *)((char *)&v27[5] + 8);
    }
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v14;
}
