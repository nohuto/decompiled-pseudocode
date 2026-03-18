/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x1C0234510
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C0021208 (IsShellProcess.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0079528 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C024EB94 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct InteractiveControlManager *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL)) )
    gbValidateHandleForIL = 0;
  if ( a3 )
  {
    v8 = ValidateHwnd(a3);
    if ( !v8 )
      goto LABEL_10;
  }
  else
  {
    v8 = 0LL;
  }
  v14 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v14;
  v15 = v8;
  if ( v8 )
    HMLockObject(v8);
  v9 = InteractiveControlManager::Instance();
  LOBYTE(v6) = (int)InteractiveControlManager::SetDeviceFocus(v9, a1, a2, v8, v14, v15, v16) >= 0;
  ThreadUnlock1(v11, v10, v12);
LABEL_10:
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
