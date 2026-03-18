/*
 * XREFs of NtUserRequestMoveSizeOperation @ 0x1C021BAC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x1C0226F38 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRequestMoveSizeOperation(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v20[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v12 = v7;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 40);
    v8 = (*(_WORD *)(v9 + 42) & 0x2FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v20[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v20;
      v20[1] = v7;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 424LL)) )
      {
        v16 = 5LL;
      }
      else
      {
        if ( a2 <= 8 )
        {
          v6 = (unsigned __int8)CMoveSizeRequest::xxxRequestMoveSizeOperation(v12, a2, a3);
LABEL_9:
          ThreadUnlock1(v18, v17);
          goto LABEL_10;
        }
        v16 = 87LL;
      }
      UserSetLastError(v16, v13, v14, v15);
      goto LABEL_9;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
