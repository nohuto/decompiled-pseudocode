/*
 * XREFs of NtUserGetMouseMovePointsEx @ 0x1C022D4A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _GetMouseMovePointsEx @ 0x1C01DCAD4 (_GetMouseMovePointsEx.c)
 */

__int64 __fastcall NtUserGetMouseMovePointsEx(int a1, ULONG64 a2, volatile void *a3, unsigned int a4, int a5)
{
  __int64 v5; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  ULONG64 v12; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rcx
  unsigned int MouseMovePoints; // ebx
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h]
  __int128 v19; // [rsp+50h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-18h]

  v5 = a4;
  v17 = 0uLL;
  v18 = 0LL;
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
    UserSetLastError(v11, gptiCurrent, v9, v10);
    MouseMovePoints = -1;
    goto LABEL_11;
  }
  v12 = a2 + 24;
  if ( a2 + 24 < a2 || v12 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v19 = *(_OWORD *)a2;
  v20 = *(_QWORD *)(a2 + 16);
  v17 = v19;
  v18 = v20;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12);
  ProbeForWrite(a3, 24 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  MouseMovePoints = GetMouseMovePointsEx((__int16 *)&v17, (__int64)a3, (unsigned int)v5, a5);
LABEL_11:
  UserSessionSwitchLeaveCrit(v14);
  return MouseMovePoints;
}
