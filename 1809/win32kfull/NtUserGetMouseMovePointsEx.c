/*
 * XREFs of NtUserGetMouseMovePointsEx @ 0x1C0215C30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _GetMouseMovePointsEx @ 0x1C01C9160 (_GetMouseMovePointsEx.c)
 */

__int64 __fastcall NtUserGetMouseMovePointsEx(int a1, ULONG64 a2, volatile void *a3, unsigned int a4, int a5)
{
  __int64 v5; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  ULONG64 v12; // rcx
  __int64 v13; // xmm0_8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int MouseMovePoints; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v21; // [rsp+38h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-10h]

  v5 = a4;
  EnterCrit(0LL, 1LL);
  if ( a1 != 24 || (unsigned int)v5 > 0x40 )
  {
    v11 = 87LL;
    goto LABEL_10;
  }
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
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
  v13 = *(_QWORD *)(a2 + 16);
  v21 = *(_OWORD *)a2;
  v22 = v13;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12);
  ProbeForWrite(a3, 24 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  MouseMovePoints = GetMouseMovePointsEx((__int16 *)&v21, (__int64)a3, v5, a5);
LABEL_11:
  UserSessionSwitchLeaveCrit(v16, v15, v18, v19);
  return MouseMovePoints;
}
