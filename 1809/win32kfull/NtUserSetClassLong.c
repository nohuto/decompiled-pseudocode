/*
 * XREFs of NtUserSetClassLong @ 0x1C021C3D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSetClassLong @ 0x1C01D53F0 (xxxSetClassLong.c)
 */

__int64 __fastcall NtUserSetClassLong(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = 0;
  if ( v8 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v17;
    v17[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( a2 == -26 && (a3 & 0x10000) != 0 )
      UserSetLastError(13LL, v9, v11, v12);
    else
      v13 = xxxSetClassLong(v8, a2, a3, a4);
    ThreadUnlock1(v15, v14);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
