/*
 * XREFs of WakeSomeone @ 0x1C001C69C
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00051D8 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionWakeThreadForInput @ 0x1C0019AA0 (EditionWakeThreadForInput.c)
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCapture @ 0x1C00605D8 (xxxCapture.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F3360 (EditionHandleAndPostKeyEvent.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C012519C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B3E70 (-JournalTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C001E480 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IsProcessedByInputService @ 0x1C0057DCC (IsProcessedByInputService.c)
 *     CancelForegroundActivate @ 0x1C00FE904 (CancelForegroundActivate.c)
 */

__int64 __fastcall WakeSomeone(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v4; // ebp
  int v5; // r12d
  __int64 v8; // rdi
  unsigned int v10; // esi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi

  v4 = 0;
  v5 = 0;
  v8 = a2;
  v10 = 1;
  if ( a3 <= 0x207 )
  {
    if ( a3 >= 0x206 )
      goto LABEL_50;
    if ( a3 > 0x106 )
    {
      if ( a3 == 512 )
      {
        if ( !a2 )
        {
          v11 = *(_QWORD *)(a1 + 104);
          if ( v11 )
            v8 = *(_QWORD *)(v11 + 16);
          else
            v8 = *(_QWORD *)(a1 + 88);
        }
        result = (unsigned int)-ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4);
        v10 = (_DWORD)result != 0 ? 4098 : 2;
        goto LABEL_9;
      }
      if ( a3 != 513 )
      {
        if ( a3 != 283 )
        {
          if ( a3 == 514 )
            goto LABEL_52;
          if ( a3 <= 0x202 )
            goto LABEL_51;
          if ( a3 > 0x204 )
            goto LABEL_52;
          goto LABEL_50;
        }
        goto LABEL_83;
      }
LABEL_50:
      v5 = 1;
      goto LABEL_51;
    }
    if ( a3 == 262 )
      goto LABEL_35;
    if ( a3 < 0xFE )
    {
LABEL_51:
      CancelForegroundActivate();
      goto LABEL_52;
    }
    if ( a3 > 0xFF )
    {
      switch ( a3 )
      {
        case 0x101u:
          goto LABEL_22;
        case 0x100u:
          goto LABEL_57;
        case 0x102u:
LABEL_35:
          CancelForegroundActivate();
          goto LABEL_22;
        case 0x104u:
LABEL_57:
          if ( !a4
            || (v15 = *(_QWORD *)(a4 + 32), (unsigned __int64)(v15 - 16) > 2)
            || ((unsigned __int8)(1 << (2 * (v15 & 3))) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)v15 >> 2)
                                                                   + a1
                                                                   + 228)) == 0 )
          {
            v5 = 1;
          }
          goto LABEL_35;
      }
      if ( a3 != 261 )
        goto LABEL_51;
LABEL_22:
      if ( ((a3 - 522) & 0xFFFFFFFB) != 0 || (*(_DWORD *)(a1 + 388) & 0x2000000) == 0 )
      {
        v13 = *(_QWORD *)(a1 + 120);
        if ( !v13 )
        {
          v8 = *(_QWORD *)(a1 + 96);
          goto LABEL_25;
        }
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 104);
        if ( !v13 )
        {
          v8 = *(_QWORD *)(a1 + 88);
          goto LABEL_25;
        }
      }
      v8 = *(_QWORD *)(v13 + 16);
LABEL_25:
      result = a3 - 522;
      if ( (result & 0xFFFFFFFB) == 0 )
      {
        v10 = 4;
        result = ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4);
        if ( (_DWORD)result )
          v10 = 4100;
      }
      goto LABEL_9;
    }
LABEL_37:
    if ( !v8 )
    {
      v16 = *(_QWORD *)(a4 + 16);
      if ( !v16 || (v17 = ValidateHwnd(v16)) == 0 || (v8 = *(_QWORD *)(v17 + 16)) == 0 )
      {
        v19 = *(_QWORD *)(a1 + 120);
        if ( v19 )
          v8 = *(_QWORD *)(v19 + 16);
        else
          v8 = *(_QWORD *)(a1 + 96);
      }
    }
    v10 = v4;
    result = 1024LL;
    if ( !v4 )
      v10 = 1024;
    goto LABEL_9;
  }
  if ( a3 > 0x20E )
  {
    if ( a3 != 568 )
    {
      if ( a3 != 576 )
      {
        if ( a3 <= 0x244 || a3 > 0x247 && (a3 <= 0x248 || a3 > 0x24A && a3 - 593 > 2) )
          goto LABEL_51;
        v4 = 4096;
      }
LABEL_83:
      result = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( !result )
        return result;
      if ( !v4 )
        v4 = 2048;
      goto LABEL_37;
    }
    v4 = 4096;
    goto LABEL_37;
  }
  if ( a3 == 526 )
    goto LABEL_22;
  if ( a3 != 520 )
  {
    if ( a3 == 521 )
      goto LABEL_50;
    if ( a3 == 522 )
      goto LABEL_22;
    if ( a3 != 524 )
      goto LABEL_50;
  }
LABEL_52:
  v18 = *(_QWORD *)(a1 + 104);
  if ( v18 && a3 - 512 <= 0xE )
    v8 = *(_QWORD *)(v18 + 16);
  else
    v8 = *(_QWORD *)(a1 + 88);
  result = (unsigned int)-ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4);
  v10 = (_DWORD)result != 0 ? 4100 : 4;
LABEL_9:
  if ( v8 )
  {
    if ( a4
      && *(_QWORD *)(a4 + 104)
      && ((unsigned int)IsProcessedByInputService(a4) || (*(_DWORD *)(a4 + 100) & 0x40000) != 0) )
    {
      v8 = v14;
    }
    if ( v10 )
      SetWakeBit(v8, v10);
    *(_DWORD *)(v8 + 1200) |= 0x20000000u;
    result = EtwTraceProcessWindowInfo(v8);
    if ( a4 )
      *(_QWORD *)(a4 + 104) = v8;
    if ( v5 )
    {
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v8, 0);
      *(_DWORD *)(v8 + 1200) |= 0x80000000;
      return EtwTraceProcessWindowInfo(v8);
    }
  }
  return result;
}
