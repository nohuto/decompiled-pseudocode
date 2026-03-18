/*
 * XREFs of NtUserSwitchDesktop @ 0x1C013AE20
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0101AF0 (xxxSwitchDesktopWithFade.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 */

_BOOL8 __fastcall NtUserSwitchDesktop(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  BOOL v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  PVOID v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // ebx
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  memset(v20, 0, 24);
  EnterCrit(0LL, 1LL);
  v8 = 0;
  v9 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 760LL) + 24LL) & 0x40;
  else
    v10 = 0;
  if ( v10 )
    goto LABEL_15;
  LOBYTE(v9) = 1;
  if ( (int)ValidateHdesk(a1, v9, 256LL, &Object) < 0 )
    goto LABEL_11;
  if ( (*(_DWORD *)(*((_QWORD *)Object + 5) + 32LL) & 4) != 0 )
  {
    ObfDereferenceObject(Object);
LABEL_15:
    UserSetLastError(5LL, v9, v6, v7);
    goto LABEL_11;
  }
  PushW32ThreadLock((__int64)Object, v20, UserDereferenceObject);
  v12 = Object;
  if ( Object )
  {
    ObfReferenceObject(Object);
    v12 = Object;
  }
  ObfDereferenceObject(v12);
  v14 = *((_QWORD *)Object + 5);
  if ( a2 )
    v15 = xxxSwitchDesktopWithFade(v14, (__int64)Object, v13, a2, a3);
  else
    v15 = xxxSwitchDesktop(v14, (__int64)Object, 0);
  v18 = v15;
  PopAndFreeW32ThreadLock((__int64)v20, v16, v17);
  v8 = v18 >= 0;
LABEL_11:
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
