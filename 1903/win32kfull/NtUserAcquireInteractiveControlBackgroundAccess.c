/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C00D8BA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C00D8CC8 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct tagWND *v11; // rbp
  unsigned int v12; // edi
  unsigned int v13; // ebx
  InteractiveControlManager *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  struct tagWND *v20; // [rsp+38h] [rbp-30h]
  __int64 v21; // [rsp+40h] [rbp-28h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = 0LL;
  if ( a3 )
  {
    v11 = (struct tagWND *)ValidateHwnd(a3);
    if ( !v11 )
      goto LABEL_11;
  }
  else
  {
    v11 = 0LL;
  }
  v19 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v19;
  v20 = v11;
  if ( v11 )
    HMLockObject(v11);
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
    LOBYTE(v9) = (int)InteractiveControlManager::AcquireDeviceBackgroundAccess(v14, a1, v13, v12, v11) >= 0;
  }
  ThreadUnlock1(v16, v15, v17);
LABEL_11:
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
