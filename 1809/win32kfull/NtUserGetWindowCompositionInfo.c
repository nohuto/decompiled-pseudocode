/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C0217680
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall NtUserGetWindowCompositionInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  NTSTATUS v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // sf
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _OWORD v19[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0LL;
  if ( PsGetCurrentProcessWow64Process(a1) )
    v5 = 0LL;
  else
    v5 = 3LL;
  if ( (v5 & a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (_BYTE *)a2;
  if ( a2 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[39] = v6[39];
  v7 = 0;
  memset(v19, 0, 0x28uLL);
  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 && (unsigned int)GetWindowCompositionInfo(v8, (__int64)v19) )
  {
    *(_OWORD *)a2 = v19[0];
    *(_OWORD *)(a2 + 16) = v19[1];
    *(_QWORD *)(a2 + 32) = *(_QWORD *)&v19[2];
  }
  else
  {
    v7 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  v13 = v7 < 0;
  if ( v7 < 0 )
  {
    v14 = RtlNtStatusToDosError(v7);
    UserSetLastError(v14, v15, v16, v17);
    v13 = v7 < 0;
  }
  LOBYTE(v4) = !v13;
  return v4;
}
