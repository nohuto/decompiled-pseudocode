/*
 * XREFs of NtUserGetDesktopID @ 0x1C00F9E30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDesktopID(int a1, _QWORD *a2)
{
  int v4; // ebx
  _QWORD ***v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  int v16; // edi
  _QWORD *v18; // rax

  v4 = 0;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL, v11, v13, v14);
    goto LABEL_10;
  }
  v15 = a1 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 2 )
        v5 = (_QWORD ***)grpdeskLogon;
      goto LABEL_6;
    }
    v18 = (_QWORD *)grpdeskIODefault;
  }
  else
  {
    v18 = (_QWORD *)grpdeskRitInput;
  }
  v5 = (_QWORD ***)*v18;
LABEL_6:
  if ( v5 )
  {
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = **v5[1];
    v4 = 1;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v12);
  return v4;
}
