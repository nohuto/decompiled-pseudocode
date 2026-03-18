/*
 * XREFs of NtUserSetScrollInfo @ 0x1C00783D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSetScrollBar @ 0x1C00784FC (xxxSetScrollBar.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
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
  _QWORD v15[3]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v16; // [rsp+50h] [rbp-58h]
  __int64 v17; // [rsp+60h] [rbp-48h]
  int v18; // [rsp+68h] [rbp-40h]

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  if ( v6 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v15[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v15;
      v15[1] = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      if ( a2 > 3 )
      {
        UserSetLastError(87LL, v7, v9, v10);
      }
      else
      {
        if ( a3 >= MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v16 = *(_OWORD *)a3;
        v17 = *(_QWORD *)(a3 + 16);
        v18 = *(_DWORD *)(a3 + 24);
        v11 = xxxSetScrollBar((struct tagWND *)v6);
      }
      ThreadUnlock1(v13, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
