/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0123890
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C01239A0 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123AA0 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned int v12; // edi
  unsigned int v13; // ebx
  InteractiveControlManager *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v18[4]; // [rsp+30h] [rbp-38h] BYREF

  EnterCrit(0LL, 1LL);
  v9 = 0LL;
  if ( a3 )
  {
    v11 = ValidateHwnd(a3);
    if ( !v11 )
      goto LABEL_11;
  }
  else
  {
    v11 = 0LL;
  }
  v18[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v18;
  v18[1] = v11;
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  if ( a2 && a2 - 744 > 0x11 )
  {
    UserSetLastError(87LL, v6, v7, v8);
  }
  else
  {
    v12 = 761;
    v13 = 744;
    if ( a2 )
    {
      v12 = a2;
      v13 = a2;
    }
    v14 = InteractiveControlManager::Instance();
    LOBYTE(v9) = (int)InteractiveControlManager::AcquireDeviceBackgroundAccess(v14, a1, v13, v12, (struct tagWND *)v11) >= 0;
  }
  ThreadUnlock1(v16, v15);
LABEL_11:
  UserSessionSwitchLeaveCrit(v10, v6, v7, v8);
  return v9;
}
