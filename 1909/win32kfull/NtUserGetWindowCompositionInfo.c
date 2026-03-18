/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C022EF20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserGetWindowCompositionInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  NTSTATUS v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // sf
  ULONG v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD v16[4]; // [rsp+50h] [rbp-48h] BYREF

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
  memset(v16, 0, 0x28uLL);
  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 && (unsigned int)GetWindowCompositionInfo(v8, (__int64)v16) )
  {
    *(_OWORD *)a2 = v16[0];
    *(_OWORD *)(a2 + 16) = v16[1];
    *(_QWORD *)(a2 + 32) = *(_QWORD *)&v16[2];
  }
  else
  {
    v7 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9);
  v10 = v7 < 0;
  if ( v7 < 0 )
  {
    v11 = RtlNtStatusToDosError(v7);
    UserSetLastError(v11, v12, v13, v14);
    v10 = v7 < 0;
  }
  LOBYTE(v4) = !v10;
  return v4;
}
