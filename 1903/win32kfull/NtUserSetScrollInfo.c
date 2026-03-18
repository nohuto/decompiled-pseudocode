/*
 * XREFs of NtUserSetScrollInfo @ 0x1C0027630
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetScrollBar @ 0x1C002778C (xxxSetScrollBar.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetScrollInfo(__int64 a1, unsigned int a2, ULONG64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+30h] [rbp-78h] BYREF
  __int64 v15; // [rsp+38h] [rbp-70h]
  __int64 v16; // [rsp+40h] [rbp-68h]
  __int128 v17; // [rsp+50h] [rbp-58h]
  __int64 v18; // [rsp+60h] [rbp-48h]
  int v19; // [rsp+68h] [rbp-40h]

  v17 = 0uLL;
  v18 = 0LL;
  v19 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v6;
  v9 = 0;
  if ( v6 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      v14 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v14;
      v15 = v6;
      HMLockObject(v6);
      if ( a2 > 3 )
      {
        UserSetLastError(87LL);
      }
      else
      {
        if ( a3 >= MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v17 = *(_OWORD *)a3;
        v18 = *(_QWORD *)(a3 + 16);
        v19 = *(_DWORD *)(a3 + 24);
        v9 = xxxSetScrollBar(v8);
      }
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
