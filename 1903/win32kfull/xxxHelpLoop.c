/*
 * XREFs of xxxHelpLoop @ 0x1C0248398
 * Callers:
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C00136B0 (xxxTranslateMessage.c)
 *     xxxRedrawTitle @ 0x1C0017BF0 (xxxRedrawTitle.c)
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     xxxDispatchMessage @ 0x1C0024958 (xxxDispatchMessage.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002E7F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetWindowBorders @ 0x1C00905B4 (GetWindowBorders.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     _GetParent @ 0x1C00F5E44 (_GetParent.c)
 *     xxxWindowHitTest @ 0x1C011EBCC (xxxWindowHitTest.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxInternalEnumWindow @ 0x1C01D5FEC (xxxInternalEnumWindow.c)
 *     xxxWaitMessageEx @ 0x1C01E4460 (xxxWaitMessageEx.c)
 *     xxxSendHelpMessage @ 0x1C024888C (xxxSendHelpMessage.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1C025CE9C (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 *     GetContextHelpId @ 0x1C025CEF8 (GetContextHelpId.c)
 */

void __fastcall xxxHelpLoop(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int WindowBorders; // eax
  _DWORD *v6; // r8
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagCURSOR *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  struct tagWND *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct tagWND *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  ULONG_PTR Parent; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  int ContextHelpId; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  _DWORD v49[4]; // [rsp+38h] [rbp-59h] BYREF
  struct tagWND *v50; // [rsp+48h] [rbp-49h] BYREF
  struct tagWND *v51; // [rsp+50h] [rbp-41h]
  __int64 v52; // [rsp+58h] [rbp-39h]
  _QWORD v53[6]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v54; // [rsp+90h] [rbp-1h] BYREF
  struct tagWND *v55; // [rsp+98h] [rbp+7h]
  __int64 v56; // [rsp+A0h] [rbp+Fh]
  __int64 v57; // [rsp+A8h] [rbp+17h] BYREF
  struct tagWND *v58; // [rsp+B0h] [rbp+1Fh]
  __int64 v59; // [rsp+B8h] [rbp+27h]
  __int64 v60; // [rsp+C0h] [rbp+2Fh] BYREF
  ULONG_PTR v61; // [rsp+C8h] [rbp+37h]
  __int64 v62; // [rsp+D0h] [rbp+3Fh]

  memset(v53, 0, sizeof(v53));
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  xxxWindowEvent(0xCu, a1, 0LL, 0LL, 0);
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 6632LL), v2, v3, v4);
  xxxCapture(gptiCurrent, a1, 4);
  WindowBorders = GetWindowBorders(
                    *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                    *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL));
  v6 = (_DWORD *)*((_QWORD *)a1 + 5);
  v7 = v6[24] - WindowBorders;
  v49[0] = WindowBorders + v6[22];
  v8 = v6[23];
  v49[2] = v7;
  v9 = v6[25] - WindowBorders;
  v49[1] = WindowBorders + v8;
  v49[3] = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) != a1 )
        goto LABEL_35;
      if ( (unsigned int)xxxInternalGetMessage((int)v53, 0, 0, 0, 2, 0) )
        break;
      xxxWaitMessageEx(0x3CFFu, 0, 0LL);
    }
    if ( LODWORD(v53[1]) == 161 )
      goto LABEL_35;
    if ( LODWORD(v53[1]) == 513 )
    {
      if ( !PtInRect(v49, *(_QWORD *)((char *)&v53[4] + 4)) )
        goto LABEL_35;
      v18 = xxxWindowHitTest((ULONG_PTR)a1, *(_QWORD *)((char *)&v53[4] + 4), 0LL);
      v19 = (struct tagWND *)ValidateHwnd(v18);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22);
      v54 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v54;
      v55 = v19;
      if ( v19 )
        HMLockObject(v19);
      if ( (unsigned int)IsHelpParent(v19) )
      {
        v51 = 0LL;
        v52 = *(_QWORD *)((char *)&v53[4] + 4);
        v50 = v19;
        xxxInternalEnumWindow(v19, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v50);
        v19 = v51;
      }
      v28 = 0LL;
      if ( v19 != a1 )
        v28 = v19;
      if ( !v28 && (!*(_DWORD *)(*((_QWORD *)a1 + 5) + 280LL) || (v28 = a1) == 0LL) )
      {
        ThreadUnlock1(v25, v24, v26);
        goto LABEL_35;
      }
      v60 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v26, v27);
      v57 = *(_QWORD *)(v29 + 408);
      *(_QWORD *)(v29 + 408) = &v57;
      v58 = v28;
      HMLockObject(v28);
      zzzSetCursor((struct tagCURSOR *)gasyscur[1], v30, v31, v32);
      xxxReleaseCapture();
      xxxRedrawTitle(a1, 0x1000u);
      SetOrClrWF(0, (__int64)a1, 0x580u, 1);
      xxxInternalGetMessage((int)v53, 0, 0, 0, 1, 1);
      xxxWindowEvent(0x800Au, a1, 4294967294LL, 4LL, 0);
      xxxWindowEvent(0xDu, a1, 0LL, 0LL, 0);
      if ( (*(_BYTE *)(*((_QWORD *)v28 + 5) + 31LL) & 8) != 0 )
      {
        Parent = GetParent(v28);
        if ( !Parent )
        {
LABEL_31:
          ThreadUnlock1(v36, v33, v34);
          ThreadUnlock1(v39, v38, v40);
          return;
        }
      }
      else
      {
        Parent = (ULONG_PTR)v28;
      }
      v41 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35);
      v60 = *(_QWORD *)(v41 + 408);
      *(_QWORD *)(v41 + 408) = &v60;
      v61 = Parent;
      HMLockObject(Parent);
      ContextHelpId = GetContextHelpId(v28);
      xxxSendHelpMessage(Parent, ContextHelpId);
      ThreadUnlock1(v44, v43, v45);
      goto LABEL_31;
    }
    if ( (unsigned int)(LODWORD(v53[1]) - 516) <= 7 )
    {
      v10 = 137;
      if ( _bittest(&v10, LODWORD(v53[1]) - 516) )
        goto LABEL_35;
    }
    if ( LODWORD(v53[1]) != 512 )
      break;
    if ( PtInRect(v49, *(_QWORD *)((char *)&v53[4] + 4)) )
      v14 = *(struct tagCURSOR **)(gasyscur[0] + 6632LL);
    else
      v14 = (struct tagCURSOR *)gasyscur[1];
    zzzSetCursor(v14, v11, v12, v13);
LABEL_15:
    xxxInternalGetMessage((int)v53, 0, 0, 0, 1, 1);
    xxxTranslateMessage((__int64)v53, 0);
    xxxDispatchMessage((__int64)v53, v15, v16, v17);
  }
  if ( LODWORD(v53[1]) != 256 || v53[2] != 27LL )
    goto LABEL_15;
  xxxInternalGetMessage((int)v53, 0, 0, 0, 1, 1);
LABEL_35:
  xxxReleaseCapture();
  zzzSetCursor((struct tagCURSOR *)gasyscur[1], v46, v47, v48);
  xxxRedrawTitle(a1, 0x1000u);
  SetOrClrWF(0, (__int64)a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, a1, 4294967294LL, 4LL, 0);
  xxxWindowEvent(0xDu, a1, 0LL, 0LL, 0);
}
