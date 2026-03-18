/*
 * XREFs of NtUserNotifyIMEStatus @ 0x1C00F4880
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxNotifyIMEStatus @ 0x1C00F4968 (xxxNotifyIMEStatus.c)
 */

__int64 __fastcall NtUserNotifyIMEStatus(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
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
  v8 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    v17 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v17;
    v18 = v6;
    HMLockObject(v6);
    if ( (*gpsi & 4) != 0 )
    {
      xxxNotifyIMEStatus(v9, a2, a3);
      v8 = 1LL;
    }
    else
    {
      UserSetLastError(120LL, v10, v11, v12);
    }
    ThreadUnlock1(v14, v13, v15);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
