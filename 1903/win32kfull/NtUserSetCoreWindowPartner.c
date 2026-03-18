/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1C0006810
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0006980 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C002DD40 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C023ABF4 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rbx
  struct tagWND *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagWND *v11; // rax
  struct tagWND *v12; // r14
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-30h] BYREF
  struct tagWND *v16; // [rsp+28h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-20h]
  _QWORD v18[3]; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v19; // [rsp+88h] [rbp+38h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    UserSetLastError(87LL);
    v7 = 0LL;
    goto LABEL_9;
  }
  v6 = ValidateHWNDND(a1, &v19);
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_11;
  v8 = v19;
  v9 = *((_QWORD *)v19 + 2);
  if ( gptiCurrent != v9 || !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v9 + 416)) )
  {
    v14 = 5LL;
    goto LABEL_13;
  }
  LOBYTE(v10) = 1;
  v11 = (struct tagWND *)HMValidateHandleNoSecure(a3, v10);
  v12 = v11;
  if ( !v11 )
    goto LABEL_11;
  if ( !a2 )
  {
    LOBYTE(v7) = (int)CoreWindowProp::RemoveComponent(v11, v8) >= 0;
    goto LABEL_9;
  }
  if ( a2 != 2 )
  {
LABEL_11:
    v14 = 87LL;
LABEL_13:
    UserSetLastError(v14);
    goto LABEL_9;
  }
  v18[2] = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v18;
  v18[1] = v8;
  HMLockObject(v8);
  v15 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v15;
  v16 = v12;
  HMLockObject(v12);
  LOBYTE(v7) = (int)CoreWindowProp::xxxSetHost(v8, v12) >= 0;
  ThreadUnlock1();
  ThreadUnlock1();
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v7;
}
