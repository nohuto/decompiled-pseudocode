/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x1C01ECB10
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C010A808 (IsImmersiveBandOrShellManaged.c)
 *     xxxDisableImmersiveOwner @ 0x1C01BF6EC (xxxDisableImmersiveOwner.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v2;
  if ( v2 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v14;
    v14[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v2)
      && (unsigned int)IsTopLevelWindow(v8)
      && !(unsigned int)IsWindowBeingDestroyed(v8)
      && (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 31LL) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL))
       || *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL)) )
    {
      v7 = xxxDisableImmersiveOwner((struct tagWND *)v8);
    }
    else
    {
      UserSetLastError(5LL, v9);
    }
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
