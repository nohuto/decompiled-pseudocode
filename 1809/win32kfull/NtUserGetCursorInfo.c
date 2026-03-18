/*
 * XREFs of NtUserGetCursorInfo @ 0x1C00A5470
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C00A55A8 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C00A56F0 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall NtUserGetCursorInfo(ULONG64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  ULONG64 v12; // rcx
  _BYTE *v13; // rdx
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]

  v15 = 0uLL;
  v16 = 0LL;
  v2 = EnterSharedCrit(0LL, 1LL);
  v6 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(2u) && ((v7 = *(_QWORD *)(v2 + 456)) == 0 || v7 == grpdeskRitInput) )
  {
    _GetCursorInfo((struct tagCURSORINFO *)&v15);
    if ( PsGetCurrentProcessWow64Process(v8) )
      v11 = 0LL;
    else
      v11 = 3LL;
    if ( (v11 & a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = MmUserProbeAddress;
    v13 = (_BYTE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = (_BYTE *)MmUserProbeAddress;
    *v13 = *v13;
    v13[23] = v13[23];
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v15;
      *(_QWORD *)(a1 + 16) = v16;
      v6 = 1;
    }
    else
    {
      UserSetLastError(87LL, (__int64)v13, v9, v10);
    }
  }
  else
  {
    UserSetLastError(5LL, v3, v4, v5);
  }
  UserSessionSwitchLeaveCrit(v12, v13, v9, v10);
  return v6;
}
