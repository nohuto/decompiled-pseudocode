/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0103850
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C010398C (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  unsigned int v13; // ebx
  InteractiveControlManager *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v19[4]; // [rsp+30h] [rbp-38h] BYREF

  EnterCrit(0LL, 1LL);
  v7 = 0;
  if ( a3 )
  {
    v9 = ValidateHwnd(a3);
    if ( !v9 )
      goto LABEL_11;
  }
  else
  {
    v9 = 0LL;
  }
  v19[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v19;
  v19[1] = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  if ( a2 && a2 - 744 > 0x11 )
  {
    UserSetLastError(87LL, v6);
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
    LOBYTE(v7) = (int)InteractiveControlManager::AcquireDeviceBackgroundAccess(v14, a1, v13, v12, (struct tagWND *)v9) >= 0;
  }
  ThreadUnlock1(v16, v15, v17);
LABEL_11:
  UserSessionSwitchLeaveCrit(v8, v6, v10, v11);
  return v7;
}
