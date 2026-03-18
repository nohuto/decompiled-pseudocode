/*
 * XREFs of NtUserAcquireIAMKey @ 0x1C0119760
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall NtUserAcquireIAMKey(_QWORD *Address)
{
  int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rcx
  int v11; // r9d

  EnterCrit(0LL, 1LL);
  v5 = *(_QWORD *)(gptiCurrent + 448LL);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v6 + 176);
  v8 = 0;
  if ( !v7 || !*(_QWORD *)(v6 + 168) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 20;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
  if ( *(_QWORD *)(gptiCurrent + 416LL) != v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v11 = 21;
LABEL_16:
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(v2, v6, 2, v11, (__int64)&WPP_0005b7b05e953d15cfa73aaf0a7b9adf_Traceguids);
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v5 + 288) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v11 = 22;
    goto LABEL_16;
  }
  if ( !*(_DWORD *)(v5 + 272) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 23;
      goto LABEL_16;
    }
LABEL_17:
    UserSetLastError(5LL, v6, v3, v4);
    goto LABEL_7;
  }
  ProbeForWrite(Address, 8uLL, 4u);
  *Address = *(_QWORD *)(v5 + 280);
  *(_QWORD *)(v5 + 288) = gptiCurrent;
  *(_DWORD *)(v5 + 272) = 0;
  v8 = 1;
LABEL_7:
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
