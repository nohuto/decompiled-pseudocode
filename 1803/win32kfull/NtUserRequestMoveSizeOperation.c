/*
 * XREFs of NtUserRequestMoveSizeOperation @ 0x1C01F4300
 * Callers:
 *     <none>
 * Callees:
 *     IsHungWindow @ 0x1C001E340 (IsHungWindow.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PtInsideWindowFrameBounds @ 0x1C01BF640 (PtInsideWindowFrameBounds.c)
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@KUtagPOINT@@@Z @ 0x1C01FE388 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@KUtagPOINT@.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRequestMoveSizeOperation(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  _WORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v12 = v7;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 40);
    v8 = (*(_WORD *)(v9 + 42) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v19[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v19;
      v19[1] = v7;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 416LL)) )
      {
LABEL_4:
        v14 = 5LL;
LABEL_17:
        UserSetLastError(v14, (__int64)v13);
        goto LABEL_18;
      }
      if ( a2 > 8
        || !(unsigned int)IsTopLevelWindow(v12)
        || *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL) == *(_QWORD *)(gptiCurrent + 424LL)
        || (unsigned int)IsHungWindow(v12)
        || (v13 = *(_WORD **)(*(_QWORD *)(v12 + 112) + 8LL), *v13 == *(_WORD *)(gpsi + 900LL)) )
      {
        v14 = 87LL;
        goto LABEL_17;
      }
      v15 = *(_QWORD *)(gptiCurrent + 760LL);
      v20 = v15;
      if ( a3 != 1 )
      {
        if ( !CTouchProcessor::GetPointerMessagePoint(gpTouchProcessor, a3, (struct tagPOINT *)&v20) )
          goto LABEL_4;
        v15 = v20;
      }
      if ( PtInsideWindowFrameBounds(v15, v12)
        && (unsigned __int8)CMoveSizeRequest::xxxRequestMoveSizeOperation(v12, a2, a3, v20) )
      {
        v6 = 1;
LABEL_18:
        ThreadUnlock1(v16, v13, v17);
        goto LABEL_19;
      }
      goto LABEL_4;
    }
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
