/*
 * XREFs of NtUserSetScrollInfo @ 0x1C002DAA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxSetScrollBar @ 0x1C002DBFC (xxxSetScrollBar.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetScrollInfo(__int64 a1, unsigned int a2, ULONG64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+40h] [rbp-68h]
  __int128 v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+60h] [rbp-48h]
  int v22; // [rsp+68h] [rbp-40h]

  v20 = 0uLL;
  v21 = 0LL;
  v22 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v6;
  v9 = 0;
  if ( v6 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      v17 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v17;
      v18 = v6;
      HMLockObject(v6);
      if ( a2 > 3 )
      {
        UserSetLastError(87LL, v10, v11, v12);
      }
      else
      {
        if ( a3 >= MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v20 = *(_OWORD *)a3;
        v21 = *(_QWORD *)(a3 + 16);
        v22 = *(_DWORD *)(a3 + 24);
        v9 = xxxSetScrollBar(v8);
      }
      ThreadUnlock1(v14, v13, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
