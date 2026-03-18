/*
 * XREFs of NtUserGetDCEx @ 0x1C00F8490
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 DCEx; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rcx

  EnterSharedCrit(0LL, 1LL);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || a2 == ghrgnGDC || (a3 & 0xFFDAF800) != 0 )
  {
    v17 = 87LL;
    goto LABEL_22;
  }
  if ( !a1 )
  {
    v9 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6) + 448) + 8LL)
                    + 24LL);
    if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 480) & 0x20000000) != 0 )
      v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14) + 416)
                                  + 760LL)
                      + 24LL) & 1;
    else
      v15 = 0;
    if ( !v15 )
      goto LABEL_17;
    v16 = v9 ? *v9 : 0LL;
    if ( ValidateHwnd(v16) )
      goto LABEL_17;
    v17 = 5LL;
LABEL_22:
    DCEx = 0LL;
    UserSetLastError(v17, v6);
    goto LABEL_23;
  }
  v9 = (_QWORD *)ValidateHwnd(a1);
  if ( !v9 )
  {
    DCEx = 0LL;
    goto LABEL_23;
  }
LABEL_17:
  DCEx = 0LL;
  if ( !a2 || (unsigned int)GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v9, a2, a3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
  return DCEx;
}
