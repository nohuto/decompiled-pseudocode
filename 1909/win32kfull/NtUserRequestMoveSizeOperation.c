/*
 * XREFs of NtUserRequestMoveSizeOperation @ 0x1C02335C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x1C023E5C8 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRequestMoveSizeOperation(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+30h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v9 = v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (((*(_WORD *)(v8 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v18 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v18;
      v19 = v7;
      HMLockObject(v7);
      if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 416LL)) )
      {
        v13 = 5LL;
      }
      else
      {
        if ( a2 <= 8 )
        {
          v6 = (unsigned __int8)CMoveSizeRequest::xxxRequestMoveSizeOperation(v9, a2, a3);
LABEL_9:
          ThreadUnlock1(v15, v14, v16);
          goto LABEL_10;
        }
        v13 = 87LL;
      }
      UserSetLastError(v13, v10, v11, v12);
      goto LABEL_9;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
