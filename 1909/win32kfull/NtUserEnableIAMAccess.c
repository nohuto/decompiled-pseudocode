/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C00EF580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     _EnableIAMThreadAccess @ 0x1C00EF660 (_EnableIAMThreadAccess.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r9
  BOOL v9; // eax
  __int64 v10; // rcx

  EnterCrit(0LL, 1LL);
  v5 = 0;
  v6 = *(_QWORD *)(gptiCurrent + 448LL);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_QWORD *)(v7 + 176);
  if ( *(_QWORD *)(gptiCurrent + 416LL) != v8 )
    goto LABEL_10;
  if ( v8 && *(_QWORD *)(v7 + 168) )
  {
    if ( !*(_QWORD *)(v6 + 288) )
      goto LABEL_10;
    v9 = a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 280LL);
  }
  else
  {
    v9 = 0;
  }
  if ( v9 )
  {
    v5 = EnableIAMThreadAccess(gptiCurrent, a2);
    goto LABEL_8;
  }
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(gptiCurrent, v4, 2, 24, (__int64)&WPP_0005b7b05e953d15cfa73aaf0a7b9adf_Traceguids);
  }
  UserSetLastError(5LL, v4, v6, v8);
LABEL_8:
  UserSessionSwitchLeaveCrit(v10);
  return v5;
}
