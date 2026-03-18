/*
 * XREFs of NtUserGetMouseMovePointsEx @ 0x1C01EF580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _GetMouseMovePointsEx @ 0x1C01A70BC (_GetMouseMovePointsEx.c)
 */

__int64 __fastcall NtUserGetMouseMovePointsEx(int a1, ULONG64 a2, volatile void *a3, unsigned int a4, int a5)
{
  __int64 v5; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  ULONG64 v12; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int MouseMovePoints; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-18h]

  v5 = a4;
  EnterCrit(0LL, 1LL);
  if ( a1 != 24 || (unsigned int)v5 > 0x40 )
  {
    v11 = 87LL;
    goto LABEL_10;
  }
  if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput )
  {
    v11 = 5LL;
LABEL_10:
    UserSetLastError(v11, gptiCurrent);
    MouseMovePoints = -1;
    goto LABEL_11;
  }
  v12 = a2 + 24;
  if ( a2 + 24 < a2 || v12 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v22 = *(_OWORD *)a2;
  v23 = *(_QWORD *)(a2 + 16);
  v20 = v22;
  v21 = v23;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12, gptiCurrent, v9, v10);
  ProbeForWrite(a3, 24 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  MouseMovePoints = GetMouseMovePointsEx((__int16 *)&v20, (__int64)a3, v5, a5);
LABEL_11:
  UserSessionSwitchLeaveCrit(v15, v14, v17, v18);
  return MouseMovePoints;
}
