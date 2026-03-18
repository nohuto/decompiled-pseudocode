/*
 * XREFs of NtUserSetInternalWindowPos @ 0x1C02346C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     xxxSetInternalWindowPos @ 0x1C01F83B4 (xxxSetInternalWindowPos.c)
 */

__int64 __fastcall NtUserSetInternalWindowPos(__int64 a1, int a2, struct tagRECT *a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagWND *v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+28h] [rbp-60h] BYREF
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  struct tagRECT v23; // [rsp+48h] [rbp-40h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v8;
  v11 = 0;
  if ( v8 )
  {
    v9 = (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v9 & 0xFFFFFFFD) != 0 )
    {
      v20 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v20;
      v21 = v8;
      HMLockObject(v8);
      if ( (a2 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(1004LL, v12, v13, v14);
      }
      else
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (struct tagRECT *)MmUserProbeAddress;
        v23 = *a3;
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (__int64 *)MmUserProbeAddress;
        v19 = *a4;
        v11 = xxxSetInternalWindowPos(v10, a2, &v23, &v19);
      }
      ThreadUnlock1(v16, v15, v17);
    }
  }
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}
