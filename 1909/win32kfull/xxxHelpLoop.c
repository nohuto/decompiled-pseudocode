/*
 * XREFs of xxxHelpLoop @ 0x1C0247C58
 * Callers:
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     xxxRedrawTitle @ 0x1C0017A40 (xxxRedrawTitle.c)
 *     xxxReleaseCapture @ 0x1C001D160 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023F14 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _GetParent @ 0x1C00D5F34 (_GetParent.c)
 *     xxxWindowHitTest @ 0x1C00F98A0 (xxxWindowHitTest.c)
 *     GetWindowBorders @ 0x1C012DDEC (GetWindowBorders.c)
 *     xxxTranslateMessage @ 0x1C0134F10 (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     xxxInternalEnumWindow @ 0x1C01D5E5C (xxxInternalEnumWindow.c)
 *     xxxWaitMessageEx @ 0x1C01E42E0 (xxxWaitMessageEx.c)
 *     xxxSendHelpMessage @ 0x1C024814C (xxxSendHelpMessage.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1C025C76C (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 *     GetContextHelpId @ 0x1C025C7C8 (GetContextHelpId.c)
 */

void __fastcall xxxHelpLoop(ULONG_PTR a1)
{
  __int64 v2; // r8
  int WindowBorders; // eax
  _DWORD *v4; // r8
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  struct tagCURSOR *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  struct tagWND *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  ULONG_PTR Parent; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int ContextHelpId; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _DWORD v33[4]; // [rsp+38h] [rbp-59h] BYREF
  struct tagWND *v34; // [rsp+48h] [rbp-49h] BYREF
  struct tagWND *v35; // [rsp+50h] [rbp-41h]
  __int64 v36; // [rsp+58h] [rbp-39h]
  _QWORD v37[6]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v38; // [rsp+90h] [rbp-1h] BYREF
  struct tagWND *v39; // [rsp+98h] [rbp+7h]
  __int64 v40; // [rsp+A0h] [rbp+Fh]
  __int64 v41; // [rsp+A8h] [rbp+17h] BYREF
  _QWORD *v42; // [rsp+B0h] [rbp+1Fh]
  __int64 v43; // [rsp+B8h] [rbp+27h]
  __int64 v44; // [rsp+C0h] [rbp+2Fh] BYREF
  ULONG_PTR v45; // [rsp+C8h] [rbp+37h]
  __int64 v46; // [rsp+D0h] [rbp+3Fh]

  memset(v37, 0, sizeof(v37));
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  xxxWindowEvent(0xCu, (struct tagWND *)a1, 0LL, 0, 0);
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 6632LL));
  xxxCapture(gptiCurrent, (struct tagWND *)a1, 4);
  WindowBorders = GetWindowBorders(
                    *(unsigned int *)(*(_QWORD *)(a1 + 40) + 28LL),
                    *(unsigned int *)(*(_QWORD *)(a1 + 40) + 24LL),
                    v2);
  v4 = *(_DWORD **)(a1 + 40);
  v5 = v4[24] - WindowBorders;
  v33[0] = WindowBorders + v4[22];
  v6 = v4[23];
  v33[2] = v5;
  v7 = v4[25] - WindowBorders;
  v33[1] = WindowBorders + v6;
  v33[3] = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) != a1 )
        goto LABEL_35;
      if ( (unsigned int)xxxInternalGetMessage((int)v37, 0, 0, 0, 2, 0) )
        break;
      xxxWaitMessageEx(0x3CFFu, 0, 0LL);
    }
    if ( LODWORD(v37[1]) == 161 )
      goto LABEL_35;
    if ( LODWORD(v37[1]) == 513 )
    {
      if ( !PtInRect(v33, *(_QWORD *)((char *)&v37[4] + 4)) )
        goto LABEL_35;
      v11 = xxxWindowHitTest(a1, *(_QWORD *)((char *)&v37[4] + 4), 0LL);
      v12 = (struct tagWND *)ValidateHwnd(v11);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
      v38 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v38;
      v39 = v12;
      if ( v12 )
        HMLockObject(v12);
      if ( (unsigned int)IsHelpParent(v12) )
      {
        v35 = 0LL;
        v36 = *(_QWORD *)((char *)&v37[4] + 4);
        v34 = v12;
        xxxInternalEnumWindow(v12, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v34);
        v12 = v35;
      }
      v19 = 0LL;
      if ( v12 != (struct tagWND *)a1 )
        v19 = v12;
      if ( !v19 && (!*(_DWORD *)(*(_QWORD *)(a1 + 40) + 280LL) || (v19 = (_QWORD *)a1) == 0LL) )
      {
        ThreadUnlock1(v17, v16, v18);
        goto LABEL_35;
      }
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v18);
      v41 = *(_QWORD *)(v20 + 408);
      *(_QWORD *)(v20 + 408) = &v41;
      v42 = v19;
      HMLockObject(v19);
      zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
      xxxReleaseCapture();
      xxxRedrawTitle((struct tagWND *)a1, 0x1000u);
      SetOrClrWF(0, a1, 0x580u, 1);
      xxxInternalGetMessage((int)v37, 0, 0, 0, 1, 1);
      xxxWindowEvent(0x800Au, (struct tagWND *)a1, 4294967294LL, 4, 0);
      xxxWindowEvent(0xDu, (struct tagWND *)a1, 0LL, 0, 0);
      if ( (*(_BYTE *)(v19[5] + 31LL) & 8) != 0 )
      {
        Parent = GetParent(v19);
        if ( !Parent )
        {
LABEL_31:
          ThreadUnlock1(v23, v21, v22);
          ThreadUnlock1(v26, v25, v27);
          return;
        }
      }
      else
      {
        Parent = (ULONG_PTR)v19;
      }
      v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22);
      v44 = *(_QWORD *)(v28 + 408);
      *(_QWORD *)(v28 + 408) = &v44;
      v45 = Parent;
      HMLockObject(Parent);
      ContextHelpId = GetContextHelpId(v19);
      xxxSendHelpMessage(Parent, ContextHelpId);
      ThreadUnlock1(v31, v30, v32);
      goto LABEL_31;
    }
    if ( (unsigned int)(LODWORD(v37[1]) - 516) <= 7 )
    {
      v8 = 137;
      if ( _bittest(&v8, LODWORD(v37[1]) - 516) )
        goto LABEL_35;
    }
    if ( LODWORD(v37[1]) != 512 )
      break;
    if ( PtInRect(v33, *(_QWORD *)((char *)&v37[4] + 4)) )
      v9 = *(struct tagCURSOR **)(gasyscur[0] + 6632LL);
    else
      v9 = (struct tagCURSOR *)gasyscur[1];
    zzzSetCursor(v9);
LABEL_15:
    xxxInternalGetMessage((int)v37, 0, 0, 0, 1, 1);
    xxxTranslateMessage((__int64)v37, 0LL, v10);
    xxxDispatchMessage((__int64)v37);
  }
  if ( LODWORD(v37[1]) != 256 || v37[2] != 27LL )
    goto LABEL_15;
  xxxInternalGetMessage((int)v37, 0, 0, 0, 1, 1);
LABEL_35:
  xxxReleaseCapture();
  zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
  xxxRedrawTitle((struct tagWND *)a1, 0x1000u);
  SetOrClrWF(0, a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, (struct tagWND *)a1, 4294967294LL, 4, 0);
  xxxWindowEvent(0xDu, (struct tagWND *)a1, 0LL, 0, 0);
}
