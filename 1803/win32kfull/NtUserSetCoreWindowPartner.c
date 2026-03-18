/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1C0007FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0007EF4 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0014654 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C01F9E24 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
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
    v7 = 0;
    goto LABEL_11;
  }
  v6 = ValidateHWNDND(a1, &v20);
  v7 = 0;
  if ( !v6 )
    goto LABEL_11;
  v8 = v20;
  v9 = *((_QWORD *)v20 + 2);
  if ( gptiCurrent != v9 || !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v9 + 416)) )
  {
    v17 = 5LL;
    goto LABEL_13;
  }
  LOBYTE(v10) = 1;
  v11 = HMValidateHandleNoSecure(a3, v10);
  if ( !v11 )
    goto LABEL_11;
  if ( !a2 )
  {
    LOBYTE(v7) = (int)CoreWindowProp::RemoveComponent((struct tagWND *)v11, v8) >= 0;
    goto LABEL_9;
  }
  if ( a2 != 2 )
  {
LABEL_11:
    v17 = 87LL;
LABEL_13:
    UserSetLastError(v17);
    goto LABEL_9;
  }
  v18[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v18;
  v18[1] = v8;
  _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
  v19[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v19;
  v19[1] = v11;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  LOBYTE(v7) = (int)CoreWindowProp::xxxSetHost(v20, (struct tagWND *)v11) >= 0;
  ThreadUnlock1();
  ThreadUnlock1();
LABEL_9:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v7;
}
