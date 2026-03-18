/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1C022ABA0
 * Callers:
 *     <none>
 * Callees:
 *     IsImmersiveBandOrShellManaged @ 0x1C00115A0 (IsImmersiveBandOrShellManaged.c)
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     xxxDisableImmersiveOwner @ 0x1C01F8494 (xxxDisableImmersiveOwner.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    v14 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v14;
    v15 = v2;
    HMLockObject(v2);
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v5, v6)
      && (unsigned int)IsTopLevelWindow(v5)
      && !(unsigned int)IsWindowBeingDestroyed(v5)
      && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL))
       || *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*(_QWORD *)(v5 + 16) + 416LL)) )
    {
      v4 = xxxDisableImmersiveOwner((struct tagWND *)v5, v7, v8);
    }
    else
    {
      UserSetLastError(5LL, v7, v8, v9);
    }
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
