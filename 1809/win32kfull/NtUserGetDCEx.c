/*
 * XREFs of NtUserGetDCEx @ 0x1C0112460
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 DCEx; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rcx

  EnterSharedCrit(0LL, 1LL);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || a2 == ghrgnGDC || (a3 & 0xFFDAF800) != 0 )
  {
    v19 = 87LL;
    goto LABEL_22;
  }
  if ( !a1 )
  {
    v11 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6) + 456) + 8LL)
                     + 24LL);
    if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15) + 488) & 0x20000000) != 0 )
      v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16) + 424)
                                  + 768LL)
                      + 24LL) & 1;
    else
      v17 = 0;
    if ( !v17 )
      goto LABEL_17;
    v18 = v11 ? *v11 : 0LL;
    if ( ValidateHwnd(v18) )
      goto LABEL_17;
    v19 = 5LL;
LABEL_22:
    DCEx = 0LL;
    UserSetLastError(v19, v6, v7, v8);
    goto LABEL_23;
  }
  v11 = (_QWORD *)ValidateHwnd(a1);
  if ( !v11 )
  {
    DCEx = 0LL;
    goto LABEL_23;
  }
LABEL_17:
  DCEx = 0LL;
  if ( !a2 || (unsigned int)GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v11, a2, a3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
  return DCEx;
}
