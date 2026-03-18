/*
 * XREFs of xxxHelpLoop @ 0x1C022F7F8
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C006B3D8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     GetWindowBorders @ 0x1C00A8414 (GetWindowBorders.c)
 *     xxxRedrawTitle @ 0x1C00B3850 (xxxRedrawTitle.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     xxxWindowHitTest @ 0x1C00DEE34 (xxxWindowHitTest.c)
 *     _GetParent @ 0x1C00F1134 (_GetParent.c)
 *     xxxTranslateMessage @ 0x1C0110150 (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     xxxInternalEnumWindow @ 0x1C01C1F34 (xxxInternalEnumWindow.c)
 *     xxxWaitMessageEx @ 0x1C01CF7DC (xxxWaitMessageEx.c)
 *     xxxSendHelpMessage @ 0x1C022FC9C (xxxSendHelpMessage.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1C024404C (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 *     GetContextHelpId @ 0x1C02440A4 (GetContextHelpId.c)
 */

void __fastcall xxxHelpLoop(__int64 *a1)
{
  int WindowBorders; // eax
  _DWORD *v3; // r8
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  struct tagCURSOR *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  ULONG_PTR v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULONG_PTR Parent; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int ContextHelpId; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD v27[4]; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v28[6]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v29; // [rsp+78h] [rbp-19h] BYREF
  __int64 v30; // [rsp+80h] [rbp-11h]
  __int64 v31; // [rsp+88h] [rbp-9h]
  _QWORD v32[3]; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v33[3]; // [rsp+A8h] [rbp+17h] BYREF
  _QWORD v34[3]; // [rsp+C0h] [rbp+2Fh] BYREF

  memset(v28, 0, sizeof(v28));
  xxxWindowEvent(0xCu, (__int64)a1, 0, 0, 0);
  zzzSetCursor(*(struct tagCURSOR **)(*(_QWORD *)gasyscur + 6632LL));
  xxxCapture(gptiCurrent, a1, 4);
  WindowBorders = GetWindowBorders(*(_DWORD *)(a1[5] + 28), *(_DWORD *)(a1[5] + 24));
  v3 = (_DWORD *)a1[5];
  v4 = v3[24] - WindowBorders;
  v27[0] = WindowBorders + v3[22];
  v5 = v3[23];
  v27[2] = v4;
  v6 = v3[25] - WindowBorders;
  v27[1] = WindowBorders + v5;
  v27[3] = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
        goto LABEL_35;
      if ( (unsigned int)xxxInternalGetMessage((__int64)v28, 0LL, 0, 0, 2, 0) )
        break;
      xxxWaitMessageEx(0x3CFFu, 0, 0LL);
    }
    if ( LODWORD(v28[1]) == 161 )
      goto LABEL_35;
    if ( LODWORD(v28[1]) == 513 )
    {
      if ( !PtInRect(v27, *(_QWORD *)((char *)&v28[4] + 4)) )
        goto LABEL_35;
      v10 = xxxWindowHitTest((ULONG_PTR)a1);
      v11 = ValidateHwnd(v10);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
      v32[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v32;
      v32[1] = v11;
      if ( v11 )
        _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
      if ( (unsigned int)IsHelpParent((struct tagWND *)v11) )
      {
        v30 = 0LL;
        v31 = *(_QWORD *)((char *)&v28[4] + 4);
        v29 = v11;
        xxxInternalEnumWindow(
          (struct tagWND *)v11,
          (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc,
          (__int64)&v29,
          1);
        v11 = v30;
      }
      v16 = 0LL;
      if ( (__int64 *)v11 != a1 )
        v16 = v11;
      if ( !v16 && (!*(_DWORD *)(a1[5] + 280) || (v16 = (ULONG_PTR)a1) == 0) )
      {
        ThreadUnlock1(v15, v14);
        goto LABEL_35;
      }
      v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
      v33[0] = *(_QWORD *)(v17 + 416);
      *(_QWORD *)(v17 + 416) = v33;
      v33[1] = v16;
      _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
      zzzSetCursor(*(struct tagCURSOR **)&gasyscur[4]);
      xxxReleaseCapture();
      xxxRedrawTitle((unsigned __int64 *)a1, 4096);
      SetOrClrWF(0, (__int64)a1, 0x580u, 1);
      xxxInternalGetMessage((__int64)v28, 0LL, 0, 0, 1, 1u);
      xxxWindowEvent(0x800Au, (__int64)a1, -2, 4, 0);
      xxxWindowEvent(0xDu, (__int64)a1, 0, 0, 0);
      if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 8) != 0 )
      {
        Parent = GetParent((_QWORD *)v16);
        if ( !Parent )
        {
LABEL_31:
          ThreadUnlock1(v19, v18);
          ThreadUnlock1(v22, v21);
          return;
        }
      }
      else
      {
        Parent = v16;
      }
      v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
      v34[0] = *(_QWORD *)(v23 + 416);
      *(_QWORD *)(v23 + 416) = v34;
      v34[1] = Parent;
      _InterlockedAdd((volatile signed __int32 *)(Parent + 8), 1u);
      ContextHelpId = GetContextHelpId(v16);
      xxxSendHelpMessage(Parent, ContextHelpId);
      ThreadUnlock1(v26, v25);
      goto LABEL_31;
    }
    if ( (unsigned int)(LODWORD(v28[1]) - 516) <= 7 )
    {
      v7 = 137;
      if ( _bittest(&v7, LODWORD(v28[1]) - 516) )
        goto LABEL_35;
    }
    if ( LODWORD(v28[1]) != 512 )
      break;
    if ( PtInRect(v27, *(_QWORD *)((char *)&v28[4] + 4)) )
      v8 = *(struct tagCURSOR **)(*(_QWORD *)gasyscur + 6632LL);
    else
      v8 = *(struct tagCURSOR **)&gasyscur[4];
    zzzSetCursor(v8);
LABEL_15:
    xxxInternalGetMessage((__int64)v28, 0LL, 0, 0, 1, 1u);
    xxxTranslateMessage((__int64)v28, 0LL);
    xxxDispatchMessage((__int64)v28, v9);
  }
  if ( LODWORD(v28[1]) != 256 || v28[2] != 27LL )
    goto LABEL_15;
  xxxInternalGetMessage((__int64)v28, 0LL, 0, 0, 1, 1u);
LABEL_35:
  xxxReleaseCapture();
  zzzSetCursor(*(struct tagCURSOR **)&gasyscur[4]);
  xxxRedrawTitle((unsigned __int64 *)a1, 4096);
  SetOrClrWF(0, (__int64)a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, (__int64)a1, -2, 4, 0);
  xxxWindowEvent(0xDu, (__int64)a1, 0, 0, 0);
}
