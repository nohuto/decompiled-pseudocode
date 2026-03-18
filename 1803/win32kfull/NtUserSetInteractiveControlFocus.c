/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x1C01F51C0
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C0012718 (IsShellProcess.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C020D224 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  struct InteractiveControlManager *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+28h] [rbp-30h]

  EnterCrit(0LL, 1LL);
  v6 = 0;
  if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL)) )
    gbValidateHandleForIL = 0;
  if ( a3 )
  {
    v9 = ValidateHwnd(a3);
    if ( !v9 )
      goto LABEL_10;
  }
  else
  {
    v9 = 0LL;
  }
  v17 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v17;
  v18 = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  v12 = InteractiveControlManager::Instance();
  LOBYTE(v6) = (int)InteractiveControlManager::SetDeviceFocus(v12, a1, a2, v9, v17, v18) >= 0;
  ThreadUnlock1(v14, v13, v15);
LABEL_10:
  UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
  return v6;
}
