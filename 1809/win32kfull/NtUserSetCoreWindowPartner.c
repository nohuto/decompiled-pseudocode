/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1C0008A20
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0008B78 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006E0A0 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C022251C (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rbx
  struct tagWND *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v19[6]; // [rsp+38h] [rbp-30h] BYREF
  struct tagWND *v20; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    UserSetLastError(87LL);
    v7 = 0LL;
    goto LABEL_9;
  }
  v6 = ValidateHWNDND(a1, &v20);
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_10;
  v8 = v20;
  v9 = *((_QWORD *)v20 + 2);
  if ( gptiCurrent != v9 || !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v9 + 424)) )
  {
    v17 = 5LL;
    goto LABEL_11;
  }
  LOBYTE(v10) = 1;
  v11 = HMValidateHandleNoSecure(a3, v10);
  if ( !v11 )
    goto LABEL_10;
  if ( !a2 )
  {
    LOBYTE(v7) = (int)CoreWindowProp::RemoveComponent((struct tagWND *)v11, v8) >= 0;
    goto LABEL_9;
  }
  if ( a2 != 2 )
  {
LABEL_10:
    v17 = 87LL;
LABEL_11:
    UserSetLastError(v17);
    goto LABEL_9;
  }
  v18[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v18;
  v18[1] = v8;
  _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
  v19[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v19;
  v19[1] = v11;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  LOBYTE(v7) = (int)CoreWindowProp::xxxSetHost(v20, (struct tagWND *)v11) >= 0;
  ThreadUnlock1();
  ThreadUnlock1();
LABEL_9:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v7;
}
