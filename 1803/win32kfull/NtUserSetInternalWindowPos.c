/*
 * XREFs of NtUserSetInternalWindowPos @ 0x1C01F5340
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxSetInternalWindowPos @ 0x1C01BF838 (xxxSetInternalWindowPos.c)
 */

__int64 __fastcall NtUserSetInternalWindowPos(__int64 a1, int a2, struct tagRECT *a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v19[3]; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v20; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = 0;
  if ( v8 )
  {
    v10 = (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v19[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v19;
      v19[1] = v8;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      if ( (a2 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(1004LL, v9);
      }
      else
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (struct tagRECT *)MmUserProbeAddress;
        v20 = *a3;
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (__int64 *)MmUserProbeAddress;
        v18 = *a4;
        v13 = xxxSetInternalWindowPos((struct tagWND *)v8, a2, &v20, &v18);
      }
      ThreadUnlock1(v15, v14, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
