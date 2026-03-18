/*
 * XREFs of NtUserGetCursorInfo @ 0x1C006A7E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x1C006A910 (CheckWinstaAttributeAccess.c)
 *     _GetCursorInfo @ 0x1C006A980 (_GetCursorInfo.c)
 */

__int64 __fastcall NtUserGetCursorInfo(ULONG64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  ULONG64 v13; // rcx
  _BYTE *v14; // rdx
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v16 = 0uLL;
  v17 = 0LL;
  v2 = EnterSharedCrit(0LL, 1LL);
  v4 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(2u) && ((v5 = *(_QWORD *)(v2 + 448)) == 0 || v5 == grpdeskRitInput) )
  {
    GetCursorInfo(&v16);
    if ( PsGetCurrentProcessWow64Process(v7, v6, v8, v9) )
      v12 = 0LL;
    else
      v12 = 3LL;
    if ( (v12 & a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = MmUserProbeAddress;
    v14 = (_BYTE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[23] = v14[23];
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v16;
      *(_QWORD *)(a1 + 16) = v17;
      v4 = 1;
    }
    else
    {
      UserSetLastError(87LL, (__int64)v14);
    }
  }
  else
  {
    UserSetLastError(5LL, v3);
  }
  UserSessionSwitchLeaveCrit(v13, v14, v10, v11);
  return v4;
}
