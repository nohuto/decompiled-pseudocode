/*
 * XREFs of xxxDispatchMessage @ 0x1C002ADC8
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000C488 (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000D1C0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000D2E0 (xxxSetCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000DB5C (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserDispatchMessage @ 0x1C002AC70 (NtUserDispatchMessage.c)
 *     xxxOldNextWindow @ 0x1C01F5898 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0241498 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0243DB0 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C0247C58 (xxxHelpLoop.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     SfnDWORD @ 0x1C002B420 (SfnDWORD.c)
 *     xxxSimpleDoSyncPaint @ 0x1C002B824 (xxxSimpleDoSyncPaint.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C01136B0 (RtlWCSMessageWParamCharToMB.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ValidateTimerCallback @ 0x1C01E3C20 (ValidateTimerCallback.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C02598C4 (RtlMBMessageWParamCharToWCS.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDispatchMessage(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rbp
  struct _KTHREAD *v14; // r14
  __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  struct _LIST_ENTRY *i; // rcx
  __int64 v18; // r8
  __int64 *v19; // rax
  int v20; // eax
  struct _LIST_ENTRY **p_Blink; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // r12d
  int v25; // r15d
  int v26; // r13d
  __int64 v27; // rcx
  unsigned int *v28; // rax
  unsigned int v29; // r9d
  __int64 v30; // r8
  unsigned int v31; // ebp
  _BOOL8 v32; // rdx
  void *v33; // rax
  char v34; // r9
  __int64 (__fastcall *v35)(int, int, int, int, __int64, __int64, char); // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rbp
  unsigned int v38; // r10d
  __int64 *v39; // r15
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rdi
  struct _KTHREAD *v44; // r15
  __int64 v45; // r15
  unsigned __int64 v46; // rdi
  _QWORD *v47; // r12
  struct _KTHREAD *v48; // rdi
  __int64 v49; // rcx
  __int64 *v50; // rax
  __int64 v52; // [rsp+50h] [rbp-48h] BYREF
  __int64 v53; // [rsp+58h] [rbp-40h]
  __int64 v54; // [rsp+60h] [rbp-38h]
  unsigned int v55; // [rsp+A0h] [rbp+8h]

  v1 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v3 = 0LL;
  v54 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v55 = *(_DWORD *)(a1 + 8);
  if ( !(unsigned int)((__int64 (*)(void))IsThreadCrossSessionAttached)() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  LOBYTE(v5) = *(_BYTE *)(v3 + 1248);
  EtwTraceBeginDispatchMessage(v5, v55);
  v8 = *(_QWORD *)a1;
  v9 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v9 = ValidateHwnd(v8);
    if ( !v9 )
      goto LABEL_13;
  }
  v12 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v12 >= 0x400
    || (v8 = 512LL, (MessageTable[v12] & 0x200) == 0) && ((_DWORD)v12 != 537 || (*(_DWORD *)(a1 + 16) & 0x8000LL) == 0) )
  {
    if ( (_DWORD)v12 != 536 || (*(_DWORD *)(a1 + 16) & 0x8000LL) == 0 )
    {
      v14 = KeGetCurrentThread();
      v15 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v12, 0x8000LL) )
      {
        v19 = (__int64 *)PsGetThreadWin32Thread(v14);
        if ( v19 )
          v15 = *v19;
      }
      v52 = *(_QWORD *)(v15 + 408);
      *(_QWORD *)(v15 + 408) = &v52;
      v53 = v9;
      if ( v9 )
        HMLockObject(v9);
      v20 = *(_DWORD *)(a1 + 8);
      if ( v20 == 275 || v20 == 280 )
      {
        v16 = *(_QWORD *)(a1 + 24);
        if ( v16 )
        {
          if ( v20 == 280 )
          {
            v16 = (unsigned __int64)gtmrListHead;
            v13 = 0LL;
            for ( i = gtmrListHead; i != gtmrListHead; i = i->Flink )
            {
              p_Blink = &i[-5].Blink;
              if ( ((__int64)i[-2].Blink & 2) != 0
                && *(struct _LIST_ENTRY **)(a1 + 16) == p_Blink[12]
                && (struct _LIST_ENTRY *)v9 == p_Blink[11] )
              {
                goto LABEL_30;
              }
            }
            p_Blink = 0LL;
LABEL_30:
            if ( p_Blink )
            {
              if ( p_Blink[4] || (MicrosoftTelemetryAssertTriggeredNoArgsKM(i), p_Blink[4]) )
                ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))p_Blink[4])(
                  v9,
                  280LL,
                  *(unsigned int *)(a1 + 16),
                  (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
            }
            goto LABEL_86;
          }
          i = (struct _LIST_ENTRY *)gptiCurrent;
          if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
          {
            v22 = SfnDWORD(
                    v9,
                    275,
                    *(_QWORD *)(a1 + 16),
                    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                    *(_QWORD *)(a1 + 24),
                    *(_QWORD *)(gpsi + 752LL));
LABEL_38:
            v13 = v22;
            goto LABEL_86;
          }
          goto LABEL_35;
        }
      }
      if ( !v9 )
        goto LABEL_35;
      if ( v20 == 15 )
      {
        v23 = *(_QWORD *)(v9 + 40);
        v24 = *(_DWORD *)(v23 + 28);
        v25 = *(_DWORD *)(v23 + 24);
        v26 = *(_DWORD *)(v23 + 232);
        *(_BYTE *)(v23 + 18) |= 0x40u;
        if ( (unsigned int)IsWindowDesktopComposed(v9) )
        {
          v28 = *(unsigned int **)(v9 + 40);
          v29 = v28[7];
          v30 = v28[6];
          v31 = v28[58];
          if ( v24 != v29 )
            goto LABEL_46;
          if ( v25 == (_DWORD)v30 && v26 == v31 )
            goto LABEL_53;
          if ( v24 == v29 )
          {
            if ( v25 == (_DWORD)v30 )
            {
              if ( ((v26 ^ v31) & 0x2E00300) == 0 )
                goto LABEL_53;
              v32 = 1LL;
            }
            else
            {
              v32 = ((v25 ^ (unsigned int)v30) & 0x4E27A9) != 0;
              v27 = -((v25 ^ (unsigned int)v30) & 0x4E27A9);
            }
          }
          else
          {
LABEL_46:
            v32 = ((v24 ^ v29) & 0xB1CF0000) != 0;
            v27 = -((v24 ^ v29) & 0xB1CF0000);
          }
          if ( v32 )
          {
            v33 = (void *)ReferenceDwmApiPort(v27, v32, v30);
            DwmAsyncChildStyleChange(v33);
          }
        }
      }
LABEL_53:
      v16 = *(_QWORD *)(v9 + 40);
      v34 = *(_BYTE *)(v16 + 18);
      if ( (v34 & 4) != 0 )
      {
        v18 = *(unsigned int *)(a1 + 8);
        if ( (unsigned int)v18 < 0x400 )
          v35 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gapfnScSendMessage[(unsigned __int8)MessageTable[v18]];
        else
          v35 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))SfnDWORD;
        i = (struct _LIST_ENTRY *)SfnINWPARAMCHAR;
        if ( v35 == SfnINWPARAMCHAR && (v34 & 8) != 0 )
        {
          RtlMBMessageWParamCharToWCS((unsigned int)v18, a1 + 16);
          v16 = *(_QWORD *)(v9 + 40);
        }
        v36 = *(_QWORD *)(v16 + 120);
        if ( v36 < 7 )
        {
          v22 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))(&gServerHandlers)[v36])(
                  v9,
                  *(unsigned int *)(a1 + 8),
                  *(_QWORD *)(a1 + 16),
                  *(_QWORD *)(a1 + 24));
          goto LABEL_38;
        }
LABEL_35:
        v13 = 0LL;
LABEL_86:
        ThreadUnlock1(i, v16, v18);
        goto LABEL_87;
      }
      v37 = *(_QWORD *)(v16 + 120);
      v38 = *(_DWORD *)(a1 + 8);
      if ( (v34 & 8) != 0 )
      {
        v39 = (__int64 *)(a1 + 16);
        RtlWCSMessageWParamCharToMB(v38, a1 + 16);
        v38 = *(_DWORD *)(a1 + 8);
        if ( v38 != 576 && v38 != 281 )
        {
          v40 = *v39;
LABEL_66:
          v41 = SfnDWORD(v9, v38, v40, *(_QWORD *)(a1 + 24), v37, *(_QWORD *)(gpsi + 752LL));
          goto LABEL_73;
        }
        v42 = *v39;
      }
      else
      {
        if ( v38 != 576 && v38 != 281 )
        {
          v40 = *(_QWORD *)(a1 + 16);
          goto LABEL_66;
        }
        v42 = *(_QWORD *)(a1 + 16);
      }
      v41 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v38]])(
              v9,
              v38,
              v42,
              *(_QWORD *)(a1 + 24),
              v37,
              *(_QWORD *)(gpsi + 752LL),
              1,
              0LL);
LABEL_73:
      v13 = v41;
      if ( *(_DWORD *)(a1 + 8) == 15 )
      {
        v43 = *(_QWORD *)a1;
        v44 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(i, v16, v18) )
          PsGetThreadWin32Thread(v44);
        v16 = (unsigned __int16)v43;
        i = (struct _LIST_ENTRY *)gpsi;
        if ( (unsigned __int64)(unsigned __int16)v43 < *(_QWORD *)(gpsi + 8LL) )
        {
          v45 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v43 * LODWORD(gSharedInfo[2]);
          v46 = v43 >> 16;
          v47 = (_QWORD *)HMPkheFromPhe(v45);
          if ( ((_WORD)v46 == *(_WORD *)(v45 + 26)
             || (_WORD)v46 == 0xFFFF
             || !(_WORD)v46 && PsGetCurrentProcessWow64Process(i))
            && (*(_BYTE *)(v45 + 25) & 1) == 0
            && *(_BYTE *)(v45 + 24) == 1
            && *v47
            && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 18LL) & 0x40) != 0 )
          {
            SetOrClrWF(0LL, v9, 1025LL, 1LL);
            xxxSimpleDoSyncPaint((struct tagWND *)v9);
          }
        }
      }
      goto LABEL_86;
    }
  }
  UserSetLastError(1159LL, v12, 0x8000LL, v7);
LABEL_13:
  v13 = 0LL;
LABEL_87:
  v48 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v10, v11) )
  {
    v50 = (__int64 *)PsGetThreadWin32Thread(v48);
    if ( v50 )
      v1 = *v50;
  }
  LOBYTE(v49) = *(_BYTE *)(v1 + 1248);
  EtwTraceEndDispatchMessage(v49, v55);
  return v13;
}
