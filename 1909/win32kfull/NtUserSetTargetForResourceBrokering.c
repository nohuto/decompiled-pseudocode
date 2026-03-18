/*
 * XREFs of NtUserSetTargetForResourceBrokering @ 0x1C000A0D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetTargetForResourceBrokering(int a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  v5 = 0LL;
  if ( a1 )
    goto LABEL_18;
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 812LL) & 0x30) == 0x10 )
  {
    if ( !a2 )
      goto LABEL_12;
    v8 = PtiFromThreadId(a2);
    v5 = v8;
    if ( v8 )
    {
      if ( v8 == gptiCurrent )
        goto LABEL_13;
      v9 = *(_QWORD *)(v8 + 416);
      if ( (*(_DWORD *)(v9 + 812) & 0x30) != 0x10
        || !(unsigned __int8)PsIsWin32KFilterEnabledForProcess(*(_QWORD *)v9)
        && !(unsigned __int8)PsIsWin32KFilterAuditEnabledForProcess(**(_QWORD **)(v5 + 416)) )
      {
        goto LABEL_3;
      }
LABEL_12:
      if ( v5 )
      {
        *(_DWORD *)(gptiCurrent + 1224LL) |= 0x4000000u;
        *(_QWORD *)(gptiCurrent + 1488LL) = v5;
        *(_DWORD *)(v5 + 1224) &= ~0x4000000u;
        *(_QWORD *)(v5 + 1488) = gptiCurrent;
LABEL_16:
        v4 = 1LL;
        goto LABEL_5;
      }
LABEL_13:
      v10 = *(_QWORD *)(gptiCurrent + 1488LL);
      if ( v10 )
      {
        *(_QWORD *)(v10 + 1488) = 0LL;
        *(_QWORD *)(gptiCurrent + 1488LL) = 0LL;
      }
      *(_DWORD *)(gptiCurrent + 1224LL) &= ~0x4000000u;
      goto LABEL_16;
    }
LABEL_18:
    v6 = 87LL;
    goto LABEL_4;
  }
LABEL_3:
  v6 = 5LL;
LABEL_4:
  UserSetLastError(v6);
LABEL_5:
  UserSessionSwitchLeaveCrit();
  return v4;
}
