/*
 * XREFs of NtUserNotifyIMEStatus @ 0x1C00F6420
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxNotifyIMEStatus @ 0x1C00F64D0 (xxxNotifyIMEStatus.c)
 */

__int64 __fastcall NtUserNotifyIMEStatus(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v6;
  if ( v6 )
  {
    v16[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v16;
    v16[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    if ( (*gpsi & 4) != 0 )
    {
      xxxNotifyIMEStatus(v6, a2, a3);
      v10 = 1;
    }
    else
    {
      UserSetLastError(120LL, v7);
    }
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v11);
  return v10;
}
