/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C010BBD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _EnableIAMThreadAccess @ 0x1C010BC84 (_EnableIAMThreadAccess.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r9
  BOOL v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  EnterCrit(0LL, 1LL);
  v5 = 0;
  v6 = *(_QWORD *)(gptiCurrent + 456LL);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_QWORD *)(v7 + 176);
  if ( *(_QWORD *)(gptiCurrent + 424LL) != v8 )
    goto LABEL_10;
  if ( v8 && *(_QWORD *)(v7 + 168) )
  {
    if ( !*(_QWORD *)(v6 + 288) )
    {
LABEL_10:
      UserSetLastError(5LL, v4, v6, v8);
      goto LABEL_8;
    }
    v9 = a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 280LL);
  }
  else
  {
    v9 = 0;
  }
  if ( !v9 )
    goto LABEL_10;
  v5 = EnableIAMThreadAccess(gptiCurrent, a2);
LABEL_8:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v5;
}
