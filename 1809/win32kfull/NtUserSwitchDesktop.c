/*
 * XREFs of NtUserSwitchDesktop @ 0x1C0094ED0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0094FF8 (xxxSwitchDesktopWithFade.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 */

_BOOL8 __fastcall NtUserSwitchDesktop(__int64 a1, int a2, unsigned int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  BOOL v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID v15; // rcx
  int v16; // r8d
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // ebx
  _BYTE v22[40]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = 0;
  v9 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL);
    v10 = *(_DWORD *)(v9 + 24) & 0x40;
  }
  else
  {
    v10 = 0;
  }
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
  PushW32ThreadLock(Object, v22, UserDereferenceObject);
  v15 = Object;
  if ( Object )
  {
    ObfReferenceObject(Object);
    v15 = Object;
  }
  ObfDereferenceObject(v15);
  v17 = *((_QWORD *)Object + 5);
  if ( a2 )
    v18 = xxxSwitchDesktopWithFade(v17, (_DWORD)Object, v16, a2, a3);
  else
    v18 = xxxSwitchDesktop(v17, Object, 0LL, a3);
  v20 = v18;
  PopAndFreeW32ThreadLock((__int64)v22, v19);
  v8 = v20 >= 0;
LABEL_11:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v8;
}
