/*
 * XREFs of NtUserPrintWindow @ 0x1C02329A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxPrintWindow @ 0x1C01E97EC (xxxPrintWindow.c)
 */

__int64 __fastcall NtUserPrintWindow(__int64 a1, HDC a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  v9 = (struct tagWND *)v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( (((*(_WORD *)(v7 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v17 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v17;
      v18 = v6;
      HMLockObject(v6);
      if ( (a3 & 3) == a3 )
        v8 = xxxPrintWindow(v9, a2, a3);
      else
        UserSetLastError(87LL, v10, v11, v12);
      ThreadUnlock1(v14, v13, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
