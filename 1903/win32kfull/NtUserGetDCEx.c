/*
 * XREFs of NtUserGetDCEx @ 0x1C011C0C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  __int64 DCEx; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx

  EnterSharedCrit(0LL, 1LL);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || a2 == ghrgnGDC || (a3 & 0xFFDAF800) != 0 )
  {
    v20 = 87LL;
    goto LABEL_22;
  }
  if ( !a1 )
  {
    v10 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8) + 448)
                                 + 8LL)
                     + 24LL);
    if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14) + 480) & 0x20000000) != 0 )
      v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17)
                                              + 416)
                                  + 760LL)
                      + 24LL) & 1;
    else
      v18 = 0;
    if ( !v18 )
      goto LABEL_17;
    v19 = v10 ? *v10 : 0LL;
    if ( ValidateHwnd(v19) )
      goto LABEL_17;
    v20 = 5LL;
LABEL_22:
    DCEx = 0LL;
    UserSetLastError(v20, v6, v7, v8);
    goto LABEL_23;
  }
  v10 = (_QWORD *)ValidateHwnd(a1);
  if ( !v10 )
  {
    DCEx = 0LL;
    goto LABEL_23;
  }
LABEL_17:
  DCEx = 0LL;
  if ( !a2 || (unsigned int)GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v10, a2, a3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v9);
  return DCEx;
}
