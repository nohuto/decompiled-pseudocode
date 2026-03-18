/*
 * XREFs of NtUserSwitchDesktop @ 0x1C0080F50
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     xxxSwitchDesktopWithFade @ 0x1C012732C (xxxSwitchDesktopWithFade.c)
 */

_BOOL8 __fastcall NtUserSwitchDesktop(__int64 a1, int a2, unsigned int a3)
{
  BOOL v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  PVOID v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // eax
  int v15; // ebx
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  memset(v17, 0, 24);
  EnterCrit(0LL, 1LL);
  v6 = 0;
  v7 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL) + 24LL) & 0x40;
  else
    v8 = 0;
  if ( v8 )
    goto LABEL_15;
  LOBYTE(v7) = 1;
  if ( (int)ValidateHdesk(a1, v7, 256LL, &Object) < 0 )
    goto LABEL_11;
  if ( (*(_DWORD *)(*((_QWORD *)Object + 5) + 32LL) & 4) != 0 )
  {
    ObfDereferenceObject(Object);
LABEL_15:
    UserSetLastError(5LL);
    goto LABEL_11;
  }
  PushW32ThreadLock((__int64)Object, v17, UserDereferenceObject, v10);
  v11 = Object;
  if ( Object )
  {
    ObfReferenceObject(Object);
    v11 = Object;
  }
  ObfDereferenceObject(v11);
  v13 = *((_QWORD *)Object + 5);
  if ( a2 )
    v14 = xxxSwitchDesktopWithFade(v13, (_DWORD)Object, v12, a2, a3);
  else
    v14 = xxxSwitchDesktop(v13, Object, 0LL, a3);
  v15 = v14;
  PopAndFreeW32ThreadLock(v17);
  v6 = v15 >= 0;
LABEL_11:
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
