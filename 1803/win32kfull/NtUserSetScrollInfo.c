/*
 * XREFs of NtUserSetScrollInfo @ 0x1C00D91F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSetScrollBar @ 0x1C00D9304 (xxxSetScrollBar.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetScrollInfo(__int64 a1, unsigned int a2, ULONG64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD v16[3]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v17; // [rsp+50h] [rbp-58h]
  __int64 v18; // [rsp+60h] [rbp-48h]
  int v19; // [rsp+68h] [rbp-40h]

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  if ( v6 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v16[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v16;
      v16[1] = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      if ( a2 > 3 )
      {
        UserSetLastError(87LL, v7);
      }
      else
      {
        if ( a3 >= MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v17 = *(_OWORD *)a3;
        v18 = *(_QWORD *)(a3 + 16);
        v19 = *(_DWORD *)(a3 + 24);
        v11 = xxxSetScrollBar((struct tagWND *)v6);
      }
      ThreadUnlock1(v13, v12, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
