/*
 * XREFs of WakeSomeone @ 0x1C00D435C
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@HH@Z @ 0x1C00030D8 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@HH@Z.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C0037170 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00D21B0 (EditionHandleAndPostKeyEvent.c)
 *     EditionWakeThreadForInput @ 0x1C00D3F20 (EditionWakeThreadForInput.c)
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01CE234 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D66E0 (-JournalTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C00D46A4 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     CancelForegroundActivate @ 0x1C00D50DC (CancelForegroundActivate.c)
 *     IsProcessedByInputService @ 0x1C00D5CC8 (IsProcessedByInputService.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall WakeSomeone(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r15d
  int v5; // r14d
  __int64 v8; // rdi
  int v10; // esi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdi

  v4 = 0;
  v5 = 0;
  v8 = a2;
  v10 = 1;
  if ( a3 <= 0x207 )
  {
    if ( a3 >= 0x206 )
      goto LABEL_53;
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
            goto LABEL_56;
          if ( a3 <= 0x202 )
            goto LABEL_55;
          if ( a3 > 0x204 )
            goto LABEL_56;
          goto LABEL_53;
        }
        goto LABEL_89;
      }
LABEL_53:
      if ( a4 )
        v4 = (~*(_DWORD *)(a4 + 100) & 0x100000u) >> 20;
      else
        v4 = 1;
      goto LABEL_55;
    }
    if ( a3 == 262 )
      goto LABEL_35;
    if ( a3 < 0xFE )
      goto LABEL_55;
    if ( a3 > 0xFF )
    {
      switch ( a3 )
      {
        case 0x101u:
          goto LABEL_22;
        case 0x100u:
        case 0x104u:
          if ( a4 )
          {
            v15 = *(_QWORD *)(a4 + 32);
            if ( (unsigned __int64)(v15 - 16) > 2
              || ((unsigned __int8)(1 << (2 * (v15 & 3))) & *(_BYTE *)(((unsigned __int64)(unsigned __int8)v15 >> 2)
                                                                     + a1
                                                                     + 228)) == 0 )
            {
              v4 = ((*(_DWORD *)(a4 + 100) >> 20) & 1) == 0;
            }
          }
          else
          {
            v4 = 1;
          }
          break;
        case 0x105u:
          goto LABEL_22;
        case 0x102u:
          break;
        default:
LABEL_55:
          CancelForegroundActivate();
          goto LABEL_56;
      }
LABEL_35:
      CancelForegroundActivate();
      goto LABEL_22;
    }
LABEL_36:
    if ( !v8 )
    {
      v16 = *(_QWORD *)(a4 + 16);
      if ( !v16 || (v17 = ValidateHwnd(v16)) == 0 || (v8 = *(_QWORD *)(v17 + 16)) == 0 )
      {
        v20 = *(_QWORD *)(a1 + 120);
        if ( v20 )
          v8 = *(_QWORD *)(v20 + 16);
        else
          v8 = *(_QWORD *)(a1 + 96);
      }
    }
    v10 = v5;
    result = 1024LL;
    if ( !v5 )
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
          goto LABEL_55;
        v5 = 4096;
      }
LABEL_89:
      result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      if ( !result )
        return result;
      if ( !v5 )
        v5 = 2048;
      goto LABEL_36;
    }
    v5 = 4096;
    goto LABEL_36;
  }
  if ( a3 == 526 )
    goto LABEL_22;
  if ( a3 != 520 )
  {
    if ( a3 == 521 )
      goto LABEL_53;
    if ( a3 == 522 )
    {
LABEL_22:
      if ( ((a3 - 522) & 0xFFFFFFFB) != 0 || (*(_DWORD *)(a1 + 388) & 0x2000000) == 0 )
      {
        v14 = *(_QWORD *)(a1 + 120);
        if ( !v14 )
        {
          v8 = *(_QWORD *)(a1 + 96);
          goto LABEL_25;
        }
      }
      else
      {
        v14 = *(_QWORD *)(a1 + 104);
        if ( !v14 )
        {
          v8 = *(_QWORD *)(a1 + 88);
          goto LABEL_25;
        }
      }
      v8 = *(_QWORD *)(v14 + 16);
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
    if ( a3 != 524 )
      goto LABEL_53;
  }
LABEL_56:
  v19 = *(_QWORD *)(a1 + 104);
  if ( v19 && a3 - 512 <= 0xE )
    v8 = *(_QWORD *)(v19 + 16);
  else
    v8 = *(_QWORD *)(a1 + 88);
  result = (unsigned int)-ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4);
  v10 = (_DWORD)result != 0 ? 4100 : 4;
LABEL_9:
  if ( v8 )
  {
    if ( a4
      && *(_QWORD *)(a4 + 104)
      && ((unsigned int)IsProcessedByInputService(a4) || (*(_DWORD *)(a4 + 100) & 0x80000) != 0) )
    {
      v8 = v18;
    }
    if ( v10 )
      SetWakeBit(v8, v10);
    *(_DWORD *)(v8 + 1208) |= 0x20000000u;
    result = EtwTraceProcessWindowInfo(v8);
    if ( a4 )
      *(_QWORD *)(a4 + 104) = v8;
    if ( v4 )
    {
      if ( a4 )
      {
        if ( (*(_DWORD *)(a4 + 100) & 0x100000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v8, 0);
      *(_DWORD *)(v8 + 1208) |= 0x80000000;
      return EtwTraceProcessWindowInfo(v8);
    }
  }
  return result;
}
