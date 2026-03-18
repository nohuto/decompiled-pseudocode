/*
 * XREFs of NtUserSetClassLong @ 0x1C015E0B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxSetClassLong @ 0x1C015E198 (xxxSetClassLong.c)
 */

__int64 __fastcall NtUserSetClassLong(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    v19 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v19;
    v20 = v8;
    HMLockObject(v8);
    if ( a2 == -26 && (a3 & 0x10000) != 0 )
      UserSetLastError(13LL, v12, v13, v14);
    else
      v10 = xxxSetClassLong(v11, a2, a3, a4);
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
