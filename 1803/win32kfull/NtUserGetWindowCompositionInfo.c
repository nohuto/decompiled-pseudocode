/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C01F0390
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserGetWindowCompositionInfo(__int64 a1, ULONG64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  _BYTE *v8; // rdx
  NTSTATUS v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // sf
  ULONG v16; // eax
  __int64 v17; // rdx
  _OWORD v19[4]; // [rsp+50h] [rbp-48h] BYREF

  v6 = 0LL;
  if ( PsGetCurrentProcessWow64Process(a1, a2, a3, a4) )
    v7 = 0LL;
  else
    v7 = 3LL;
  if ( (v7 & a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = (_BYTE *)a2;
  if ( a2 >= MmUserProbeAddress )
    v8 = (_BYTE *)MmUserProbeAddress;
  *v8 = *v8;
  v8[39] = v8[39];
  v9 = 0;
  memset(v19, 0, 0x28uLL);
  EnterSharedCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 && (unsigned int)GetWindowCompositionInfo(v10, (__int64)v19) )
  {
    *(_OWORD *)a2 = v19[0];
    *(_OWORD *)(a2 + 16) = v19[1];
    *(_QWORD *)(a2 + 32) = *(_QWORD *)&v19[2];
  }
  else
  {
    v9 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  v15 = v9 < 0;
  if ( v9 < 0 )
  {
    v16 = RtlNtStatusToDosError(v9);
    UserSetLastError(v16, v17);
    v15 = v9 < 0;
  }
  LOBYTE(v6) = !v15;
  return v6;
}
