/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C022F540
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserGetWindowCompositionInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  NTSTATUS v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  ULONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _OWORD v17[4]; // [rsp+50h] [rbp-48h] BYREF

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
  memset(v17, 0, 0x28uLL);
  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 && (unsigned int)GetWindowCompositionInfo(v8, (__int64)v17, v10) )
  {
    *(_OWORD *)a2 = v17[0];
    *(_OWORD *)(a2 + 16) = v17[1];
    *(_QWORD *)(a2 + 32) = *(_QWORD *)&v17[2];
  }
  else
  {
    v7 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9);
  v11 = v7 < 0;
  if ( v7 < 0 )
  {
    v12 = RtlNtStatusToDosError(v7);
    UserSetLastError(v12, v13, v14, v15);
    v11 = v7 < 0;
  }
  LOBYTE(v4) = !v11;
  return v4;
}
