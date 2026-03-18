/*
 * XREFs of WakeSomeone @ 0x1C0023FC4
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@W4tagINPUTSERVICE_STATE@@@Z @ 0x1C00051EC (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@W4tagINPUTSERVICE_STATE@@@Z.c)
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C001F240 (EditionHandleAndPostKeyEvent.c)
 *     EditionWakeThreadForInput @ 0x1C0023220 (EditionWakeThreadForInput.c)
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C00D0ADC (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E27B4 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EBE30 (-JournalTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     IsProcessedByInputService @ 0x1C0012034 (IsProcessedByInputService.c)
 *     CancelForegroundActivate @ 0x1C0022E84 (CancelForegroundActivate.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C0024304 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     PtiKbdFromQ @ 0x1C00258C0 (PtiKbdFromQ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall WakeSomeone(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r15d
  int v5; // r14d
  __int64 v8; // rdi
  __int64 v9; // r13
  unsigned int v10; // esi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rdi

  v4 = 0;
  v5 = 0;
  v8 = a2;
  v9 = a1;
  v10 = 1;
  if ( a3 > 0x207 )
  {
    if ( a3 <= 0x20E )
    {
      if ( a3 != 526 )
      {
        if ( a3 == 520 )
          goto LABEL_49;
        if ( a3 == 521 )
          goto LABEL_53;
        if ( a3 != 522 )
        {
          if ( a3 == 524 )
            goto LABEL_49;
          goto LABEL_53;
        }
      }
LABEL_22:
      result = a3 - 522;
      v14 = -5;
      if ( (result & 0xFFFFFFFB) != 0 || (*(_DWORD *)(v9 + 396) & 0x2000000) == 0 )
      {
        result = PtiKbdFromQ(v9);
        v8 = result;
      }
      else
      {
        v20 = *(_QWORD *)(v9 + 112);
        if ( v20 )
          v8 = *(_QWORD *)(v20 + 16);
        else
          v8 = *(_QWORD *)(v9 + 96);
      }
      if ( ((a3 - 522) & v14) == 0 )
      {
        v10 = 4;
        result = ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4);
        if ( (_DWORD)result )
          v10 = 4100;
      }
      goto LABEL_9;
    }
    if ( a3 != 568 )
    {
      if ( a3 != 576 )
      {
        if ( a3 <= 0x244 || a3 > 0x247 && (a3 <= 0x248 || a3 > 0x24A && a3 - 593 > 2) )
          goto LABEL_55;
        v5 = 4096;
      }
      goto LABEL_90;
    }
    v5 = 4096;
    goto LABEL_30;
  }
  if ( a3 >= 0x206 )
  {
LABEL_53:
    if ( a4 )
      v4 = (~*(_DWORD *)(a4 + 100) & 0x100000u) >> 20;
    else
      v4 = 1;
    goto LABEL_55;
  }
  if ( a3 <= 0x106 )
  {
    if ( a3 == 262 )
      goto LABEL_41;
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
            if ( (unsigned __int64)(*(_QWORD *)(a4 + 32) - 16LL) > 2
              || (v19 = *(_BYTE *)(a4 + 32) & 3,
                  LODWORD(a1) = 2 * v19,
                  ((unsigned __int8)(1 << (2 * v19)) & *(_BYTE *)(((unsigned __int64)*(unsigned __int8 *)(a4 + 32) >> 2)
                                                                + v9
                                                                + 236)) == 0) )
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
          CancelForegroundActivate(a1);
          goto LABEL_49;
      }
LABEL_41:
      CancelForegroundActivate(a1);
      goto LABEL_22;
    }
LABEL_30:
    if ( !v8 )
    {
      v15 = *(_QWORD *)(a4 + 16);
      if ( !v15 || (v16 = ValidateHwnd(v15)) == 0 || (v8 = *(_QWORD *)(v16 + 16)) == 0 )
        v8 = PtiKbdFromQ(v9);
    }
    v10 = v5;
    result = 1024LL;
    if ( !v5 )
      v10 = 1024;
    goto LABEL_9;
  }
  switch ( a3 )
  {
    case 0x200u:
      if ( !a2 )
      {
        v11 = *(_QWORD *)(a1 + 112);
        if ( v11 )
          v8 = *(_QWORD *)(v11 + 16);
        else
          v8 = *(_QWORD *)(a1 + 96);
      }
      result = (unsigned int)-ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4);
      v10 = (_DWORD)result != 0 ? 4098 : 2;
      goto LABEL_9;
    case 0x201u:
      goto LABEL_53;
    case 0x11Bu:
LABEL_90:
      result = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( !result )
        return result;
      if ( !v5 )
        v5 = 2048;
      goto LABEL_30;
    case 0x202u:
      goto LABEL_49;
  }
  if ( a3 <= 0x202 )
    goto LABEL_55;
  if ( a3 <= 0x204 )
    goto LABEL_53;
LABEL_49:
  v18 = *(_QWORD *)(v9 + 112);
  if ( v18 && a3 - 512 <= 0xE )
    v8 = *(_QWORD *)(v18 + 16);
  else
    v8 = *(_QWORD *)(v9 + 96);
  result = (unsigned int)-ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4);
  v10 = (_DWORD)result != 0 ? 4100 : 4;
LABEL_9:
  if ( v8 )
  {
    if ( a4 && *(_QWORD *)(a4 + 104) && (IsProcessedByInputService(a4) || (*(_DWORD *)(a4 + 100) & 0x80000) != 0) )
      v8 = v17;
    if ( v10 )
      SetWakeBit(v8, v10);
    *(_QWORD *)(v8 + 1224) |= 0x40000000uLL;
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
      *(_QWORD *)(v8 + 1224) |= 0x100000000uLL;
      return EtwTraceProcessWindowInfo(v8);
    }
  }
  return result;
}
