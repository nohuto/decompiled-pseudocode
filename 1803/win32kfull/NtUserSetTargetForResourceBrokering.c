/*
 * XREFs of NtUserSetTargetForResourceBrokering @ 0x1C0006710
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetTargetForResourceBrokering(int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rcx

  EnterCrit(0LL, 1LL);
  v7 = 0LL;
  v8 = 0LL;
  if ( a1 )
    goto LABEL_16;
  v9 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 416LL) + 812LL);
  LOBYTE(v9) = v9 & 0x30;
  if ( (_BYTE)v9 != 16 )
  {
LABEL_17:
    v14 = 5LL;
    goto LABEL_18;
  }
  if ( !a2 )
    goto LABEL_9;
  v10 = PtiFromThreadId(a2);
  v8 = v10;
  if ( !v10 )
  {
LABEL_16:
    v14 = 87LL;
LABEL_18:
    UserSetLastError(v14);
    goto LABEL_14;
  }
  if ( v10 == gptiCurrent )
  {
LABEL_10:
    v12 = *(_QWORD *)(gptiCurrent + 1472LL);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 1472) = 0LL;
      *(_QWORD *)(gptiCurrent + 1472LL) = 0LL;
    }
    *(_DWORD *)(gptiCurrent + 1200LL) &= ~0x4000000u;
    goto LABEL_13;
  }
  v11 = *(_QWORD *)(v10 + 416);
  if ( (*(_DWORD *)(v11 + 812) & 0x30) != 0x10
    || !(unsigned __int8)PsIsWin32KFilterEnabledForProcess(*(_QWORD *)v11)
    && !(unsigned __int8)PsIsWin32KFilterAuditEnabledForProcess(**(_QWORD **)(v8 + 416)) )
  {
    goto LABEL_17;
  }
LABEL_9:
  if ( !v8 )
    goto LABEL_10;
  *(_DWORD *)(gptiCurrent + 1200LL) |= 0x4000000u;
  *(_QWORD *)(gptiCurrent + 1472LL) = v8;
  *(_DWORD *)(v8 + 1200) &= ~0x4000000u;
  *(_QWORD *)(v8 + 1472) = gptiCurrent;
LABEL_13:
  v7 = 1LL;
LABEL_14:
  UserSessionSwitchLeaveCrit(v9, v4, v5, v6);
  return v7;
}
