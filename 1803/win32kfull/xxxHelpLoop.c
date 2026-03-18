/*
 * XREFs of xxxHelpLoop @ 0x1C0206688
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     zzzSetCursor @ 0x1C001574C (zzzSetCursor.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxInternalEnumWindow @ 0x1C005A814 (xxxInternalEnumWindow.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C00605D8 (xxxCapture.c)
 *     xxxRedrawTitle @ 0x1C006E8C0 (xxxRedrawTitle.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     GetWindowBorders @ 0x1C00C3220 (GetWindowBorders.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     _GetParent @ 0x1C00D6BB0 (_GetParent.c)
 *     xxxWindowHitTest @ 0x1C00DAA44 (xxxWindowHitTest.c)
 *     xxxTranslateMessage @ 0x1C00F4EDC (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxWaitMessageEx @ 0x1C01AC5FC (xxxWaitMessageEx.c)
 *     xxxSendHelpMessage @ 0x1C0206B18 (xxxSendHelpMessage.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1C022E0DC (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 *     GetContextHelpId @ 0x1C022E134 (GetContextHelpId.c)
 */

void __fastcall xxxHelpLoop(__int64 *a1)
{
  int WindowBorders; // eax
  _DWORD *v3; // r8
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  ULONG_PTR v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULONG_PTR Parent; // rsi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  int ContextHelpId; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _DWORD v30[4]; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v31[6]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v32; // [rsp+78h] [rbp-19h] BYREF
  __int64 v33; // [rsp+80h] [rbp-11h]
  __int64 v34; // [rsp+88h] [rbp-9h]
  _QWORD v35[3]; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v36[3]; // [rsp+A8h] [rbp+17h] BYREF
  _QWORD v37[3]; // [rsp+C0h] [rbp+2Fh] BYREF

  memset(v31, 0, sizeof(v31));
  xxxWindowEvent(0xCu, (__int64)a1, 0, 0, 0);
  zzzSetCursor(*(_QWORD *)&gasyscur[100]);
  xxxCapture(gptiCurrent, a1, 4);
  WindowBorders = GetWindowBorders(*(_DWORD *)(a1[5] + 28), *(_DWORD *)(a1[5] + 24));
  v3 = (_DWORD *)a1[5];
  v4 = v3[24];
  v30[0] = v3[22] + WindowBorders;
  v5 = v3[23] + WindowBorders;
  v30[2] = v4 - WindowBorders;
  v30[1] = v5;
  v30[3] = v3[25] - WindowBorders;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a1 )
        goto LABEL_35;
      if ( (unsigned int)xxxInternalGetMessage((int)v31, 0, 0, 0, 2, 0) )
        break;
      xxxWaitMessageEx(0x3CFFu, 0, 0LL);
    }
    if ( LODWORD(v31[1]) == 161 )
      goto LABEL_35;
    if ( LODWORD(v31[1]) == 513 )
    {
      if ( !PtInRect(v30, *(_QWORD *)((char *)&v31[4] + 4)) )
        goto LABEL_35;
      v9 = xxxWindowHitTest((ULONG_PTR)a1, *(_QWORD *)((char *)&v31[4] + 4), 0LL);
      v10 = ValidateHwnd(v9);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
      v35[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v35;
      v35[1] = v10;
      if ( v10 )
        _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
      if ( (unsigned int)IsHelpParent((struct tagWND *)v10) )
      {
        v33 = 0LL;
        v34 = *(_QWORD *)((char *)&v31[4] + 4);
        v32 = v10;
        xxxInternalEnumWindow(
          (_QWORD *)v10,
          (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc,
          (__int64)&v32,
          1);
        v10 = v33;
      }
      v16 = 0LL;
      if ( (__int64 *)v10 != a1 )
        v16 = v10;
      if ( !v16 && (!*(_DWORD *)(a1[5] + 280) || (v16 = (ULONG_PTR)a1) == 0) )
      {
        ThreadUnlock1(v14, v13, v15);
        goto LABEL_35;
      }
      v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
      v36[0] = *(_QWORD *)(v17 + 408);
      *(_QWORD *)(v17 + 408) = v36;
      v36[1] = v16;
      _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
      zzzSetCursor(*(_QWORD *)&gasyscur[4]);
      xxxReleaseCapture();
      xxxRedrawTitle((unsigned __int64 *)a1, 0);
      SetOrClrWF(0, (__int64)a1, 1408, 1);
      xxxInternalGetMessage((int)v31, 0, 0, 0, 1, 1);
      xxxWindowEvent(0x800Au, (__int64)a1, -2, 4, 0);
      xxxWindowEvent(0xDu, (__int64)a1, 0, 0, 0);
      if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 8) != 0 )
      {
        Parent = GetParent((_QWORD *)v16);
        if ( !Parent )
        {
LABEL_31:
          ThreadUnlock1(v19, v18, v21);
          ThreadUnlock1(v23, v22, v24);
          return;
        }
      }
      else
      {
        Parent = v16;
      }
      v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
      v37[0] = *(_QWORD *)(v25 + 408);
      *(_QWORD *)(v25 + 408) = v37;
      v37[1] = Parent;
      _InterlockedAdd((volatile signed __int32 *)(Parent + 8), 1u);
      ContextHelpId = GetContextHelpId(v16);
      xxxSendHelpMessage(Parent, ContextHelpId);
      ThreadUnlock1(v28, v27, v29);
      goto LABEL_31;
    }
    if ( (unsigned int)(LODWORD(v31[1]) - 516) <= 7 )
    {
      v6 = 137;
      if ( _bittest(&v6, LODWORD(v31[1]) - 516) )
        goto LABEL_35;
    }
    if ( LODWORD(v31[1]) != 512 )
      break;
    if ( PtInRect(v30, *(_QWORD *)((char *)&v31[4] + 4)) )
      v7 = *(_QWORD *)&gasyscur[100];
    else
      v7 = *(_QWORD *)&gasyscur[4];
    zzzSetCursor(v7);
LABEL_15:
    xxxInternalGetMessage((int)v31, 0, 0, 0, 1, 1);
    xxxTranslateMessage((__int64)v31, 0LL);
    xxxDispatchMessage((__int64)v31, v8);
  }
  if ( LODWORD(v31[1]) != 256 || v31[2] != 27LL )
    goto LABEL_15;
  xxxInternalGetMessage((int)v31, 0, 0, 0, 1, 1);
LABEL_35:
  xxxReleaseCapture();
  zzzSetCursor(*(_QWORD *)&gasyscur[4]);
  xxxRedrawTitle((unsigned __int64 *)a1, 0);
  SetOrClrWF(0, (__int64)a1, 1408, 1);
  xxxWindowEvent(0x800Au, (__int64)a1, -2, 4, 0);
  xxxWindowEvent(0xDu, (__int64)a1, 0, 0, 0);
}
