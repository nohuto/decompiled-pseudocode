/*
 * XREFs of NtUserGetCursorInfo @ 0x1C0088D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C0088EC8 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C0089140 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCursorInfo(ULONG64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  ULONG64 v7; // rcx
  _BYTE *v8; // rdx
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v10 = 0uLL;
  v11 = 0LL;
  v2 = EnterSharedCrit(0LL, 1LL);
  v3 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(2u) && ((v4 = *(_QWORD *)(v2 + 448)) == 0 || v4 == grpdeskRitInput) )
  {
    _GetCursorInfo((struct tagCURSORINFO *)&v10);
    if ( PsGetCurrentProcessWow64Process(v5) )
      v6 = 0LL;
    else
      v6 = 3LL;
    if ( (v6 & a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = MmUserProbeAddress;
    v8 = (_BYTE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[23] = v8[23];
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v10;
      *(_QWORD *)(a1 + 16) = v11;
      v3 = 1;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v3;
}
