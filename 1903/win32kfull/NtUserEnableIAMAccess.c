/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C0089690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     _EnableIAMThreadAccess @ 0x1C0089770 (_EnableIAMThreadAccess.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 a1, unsigned int a2)
{
  int v4; // edx
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
    WPP_RECORDER_SF_(gptiCurrent, v4, 2, 24, (__int64)&WPP_65a49924c3ca3249f60c4eca543eb56c_Traceguids);
  }
  UserSetLastError(5LL);
LABEL_8:
  UserSessionSwitchLeaveCrit(v10);
  return v5;
}
