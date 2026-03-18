/*
 * XREFs of NtUserGetDesktopID @ 0x1C00FB080
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDesktopID(int a1, _QWORD *a2)
{
  int v4; // ebx
  _QWORD ***v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  int v14; // edi
  _QWORD *v16; // rax

  v4 = 0;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL, v9);
    goto LABEL_10;
  }
  v13 = a1 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 2 )
        v5 = (_QWORD ***)grpdeskLogon;
      goto LABEL_6;
    }
    v16 = (_QWORD *)grpdeskIODefault;
  }
  else
  {
    v16 = (_QWORD *)grpdeskRitInput;
  }
  v5 = (_QWORD ***)*v16;
LABEL_6:
  if ( v5 )
  {
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = **v5[1];
    v4 = 1;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v4;
}
