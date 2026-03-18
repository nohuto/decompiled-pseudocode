/*
 * XREFs of xxxDispatchMessage @ 0x1C0024958
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000D010 (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000DD50 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000E3DC (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000E920 (xxxSetCsrssThreadDesktop.c)
 *     NtUserDispatchMessage @ 0x1C0024800 (NtUserDispatchMessage.c)
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0241AB8 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C02444F0 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C0248398 (xxxHelpLoop.c)
 * Callees:
 *     SfnDWORD @ 0x1C0024FB0 (SfnDWORD.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00253B4 (xxxSimpleDoSyncPaint.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C01396B0 (RtlWCSMessageWParamCharToMB.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ValidateTimerCallback @ 0x1C01E3DA0 (ValidateTimerCallback.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025A004 (RtlMBMessageWParamCharToWCS.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDispatchMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rbp
  struct _KTHREAD *v17; // r14
  __int64 v18; // rbp
  unsigned __int64 v19; // rdx
  struct _LIST_ENTRY *i; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  int v23; // eax
  struct _LIST_ENTRY **p_Blink; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // r12d
  int v28; // r15d
  int v29; // r13d
  __int64 v30; // rcx
  unsigned int *v31; // rax
  unsigned int v32; // r9d
  __int64 v33; // r8
  unsigned int v34; // ebp
  _BOOL8 v35; // rdx
  void *v36; // rax
  char v37; // r9
  __int64 (__fastcall *v38)(int, int, int, int, __int64, __int64, char); // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rbp
  unsigned int v41; // r10d
  __int64 *v42; // r15
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // r8
  unsigned __int64 v47; // rdi
  struct _KTHREAD *v48; // r15
  __int64 v49; // r15
  unsigned __int64 v50; // rdi
  _QWORD *v51; // r12
  struct _KTHREAD *v52; // rdi
  __int64 v53; // rcx
  __int64 *v54; // rax
  __int64 v56; // [rsp+50h] [rbp-48h] BYREF
  __int64 v57; // [rsp+58h] [rbp-40h]
  __int64 v58; // [rsp+60h] [rbp-38h]
  unsigned int v59; // [rsp+A0h] [rbp+8h]

  v4 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v6 = 0LL;
  v58 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v59 = *(_DWORD *)(a1 + 8);
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  LOBYTE(v8) = *(_BYTE *)(v6 + 1248);
  EtwTraceBeginDispatchMessage(v8, v59);
  v11 = *(_QWORD *)a1;
  v12 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v12 = ValidateHwnd(v11);
    if ( !v12 )
      goto LABEL_13;
  }
  v15 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v15 >= 0x400
    || (v11 = 512LL, (MessageTable[v15] & 0x200) == 0) && ((_DWORD)v15 != 537 || (*(_DWORD *)(a1 + 16) & 0x8000LL) == 0) )
  {
    if ( (_DWORD)v15 != 536 || (*(_DWORD *)(a1 + 16) & 0x8000LL) == 0 )
    {
      v17 = KeGetCurrentThread();
      v18 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v15, 0x8000LL, v10) )
      {
        v22 = (__int64 *)PsGetThreadWin32Thread(v17);
        if ( v22 )
          v18 = *v22;
      }
      v56 = *(_QWORD *)(v18 + 408);
      *(_QWORD *)(v18 + 408) = &v56;
      v57 = v12;
      if ( v12 )
        HMLockObject(v12);
      v23 = *(_DWORD *)(a1 + 8);
      if ( v23 == 275 || v23 == 280 )
      {
        v19 = *(_QWORD *)(a1 + 24);
        if ( v19 )
        {
          if ( v23 == 280 )
          {
            v19 = (unsigned __int64)gtmrListHead;
            v16 = 0LL;
            for ( i = gtmrListHead; i != gtmrListHead; i = i->Flink )
            {
              p_Blink = &i[-5].Blink;
              if ( ((__int64)i[-2].Blink & 2) != 0
                && *(struct _LIST_ENTRY **)(a1 + 16) == p_Blink[12]
                && (struct _LIST_ENTRY *)v12 == p_Blink[11] )
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
                  v12,
                  280LL,
                  *(unsigned int *)(a1 + 16),
                  (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
            }
            goto LABEL_86;
          }
          i = (struct _LIST_ENTRY *)gptiCurrent;
          if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
          {
            v25 = SfnDWORD(
                    v12,
                    275,
                    *(_QWORD *)(a1 + 16),
                    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                    *(_QWORD *)(a1 + 24),
                    *(_QWORD *)(gpsi + 752LL));
LABEL_38:
            v16 = v25;
            goto LABEL_86;
          }
          goto LABEL_35;
        }
      }
      if ( !v12 )
        goto LABEL_35;
      if ( v23 == 15 )
      {
        v26 = *(_QWORD *)(v12 + 40);
        v27 = *(_DWORD *)(v26 + 28);
        v28 = *(_DWORD *)(v26 + 24);
        v29 = *(_DWORD *)(v26 + 232);
        *(_BYTE *)(v26 + 18) |= 0x40u;
        if ( (unsigned int)IsWindowDesktopComposed(v12) )
        {
          v31 = *(unsigned int **)(v12 + 40);
          v32 = v31[7];
          v33 = v31[6];
          v34 = v31[58];
          if ( v27 != v32 )
            goto LABEL_46;
          if ( v28 == (_DWORD)v33 && v29 == v34 )
            goto LABEL_53;
          if ( v27 == v32 )
          {
            if ( v28 == (_DWORD)v33 )
            {
              if ( ((v29 ^ v34) & 0x2E00300) == 0 )
                goto LABEL_53;
              v35 = 1LL;
            }
            else
            {
              v35 = ((v28 ^ (unsigned int)v33) & 0x4E27A9) != 0;
              v30 = -((v28 ^ (unsigned int)v33) & 0x4E27A9);
            }
          }
          else
          {
LABEL_46:
            v35 = ((v27 ^ v32) & 0xB1CF0000) != 0;
            v30 = -((v27 ^ v32) & 0xB1CF0000);
          }
          if ( v35 )
          {
            v36 = (void *)ReferenceDwmApiPort(v30, v35, v33);
            DwmAsyncChildStyleChange(v36);
          }
        }
      }
LABEL_53:
      v19 = *(_QWORD *)(v12 + 40);
      v37 = *(_BYTE *)(v19 + 18);
      if ( (v37 & 4) != 0 )
      {
        v21 = *(unsigned int *)(a1 + 8);
        if ( (unsigned int)v21 < 0x400 )
          v38 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gapfnScSendMessage[(unsigned __int8)MessageTable[v21]];
        else
          v38 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))SfnDWORD;
        i = (struct _LIST_ENTRY *)SfnINWPARAMCHAR;
        if ( v38 == SfnINWPARAMCHAR && (v37 & 8) != 0 )
        {
          RtlMBMessageWParamCharToWCS((unsigned int)v21, a1 + 16);
          v19 = *(_QWORD *)(v12 + 40);
        }
        v39 = *(_QWORD *)(v19 + 120);
        if ( v39 < 7 )
        {
          v25 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))(&gServerHandlers)[v39])(
                  v12,
                  *(unsigned int *)(a1 + 8),
                  *(_QWORD *)(a1 + 16),
                  *(_QWORD *)(a1 + 24));
          goto LABEL_38;
        }
LABEL_35:
        v16 = 0LL;
LABEL_86:
        ThreadUnlock1(i, v19, v21);
        goto LABEL_87;
      }
      v40 = *(_QWORD *)(v19 + 120);
      v41 = *(_DWORD *)(a1 + 8);
      if ( (v37 & 8) != 0 )
      {
        v42 = (__int64 *)(a1 + 16);
        RtlWCSMessageWParamCharToMB(v41, a1 + 16);
        v41 = *(_DWORD *)(a1 + 8);
        if ( v41 != 576 && v41 != 281 )
        {
          v43 = *v42;
LABEL_66:
          v44 = SfnDWORD(v12, v41, v43, *(_QWORD *)(a1 + 24), v40, *(_QWORD *)(gpsi + 752LL));
          goto LABEL_73;
        }
        v46 = *v42;
      }
      else
      {
        if ( v41 != 576 && v41 != 281 )
        {
          v43 = *(_QWORD *)(a1 + 16);
          goto LABEL_66;
        }
        v46 = *(_QWORD *)(a1 + 16);
      }
      v44 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v41]])(
              v12,
              v41,
              v46,
              *(_QWORD *)(a1 + 24),
              v40,
              *(_QWORD *)(gpsi + 752LL),
              1,
              0LL);
LABEL_73:
      v16 = v44;
      if ( *(_DWORD *)(a1 + 8) == 15 )
      {
        v47 = *(_QWORD *)a1;
        v48 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(i, v19, v21, v45) )
          PsGetThreadWin32Thread(v48);
        v19 = (unsigned __int16)v47;
        i = (struct _LIST_ENTRY *)gpsi;
        if ( (unsigned __int64)(unsigned __int16)v47 < *(_QWORD *)(gpsi + 8LL) )
        {
          v49 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v47 * *((_DWORD *)&gSharedInfo + 4);
          v50 = v47 >> 16;
          v51 = (_QWORD *)HMPkheFromPhe(v49);
          if ( ((_WORD)v50 == *(_WORD *)(v49 + 26)
             || (_WORD)v50 == 0xFFFF
             || !(_WORD)v50 && PsGetCurrentProcessWow64Process(i))
            && (*(_BYTE *)(v49 + 25) & 1) == 0
            && *(_BYTE *)(v49 + 24) == 1
            && *v51
            && (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 18LL) & 0x40) != 0 )
          {
            SetOrClrWF(0LL, v12, 1025LL, 1LL);
            xxxSimpleDoSyncPaint((struct tagWND *)v12);
          }
        }
      }
      goto LABEL_86;
    }
  }
  UserSetLastError(1159LL);
LABEL_13:
  v16 = 0LL;
LABEL_87:
  v52 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v13, v14, v10) )
  {
    v54 = (__int64 *)PsGetThreadWin32Thread(v52);
    if ( v54 )
      v4 = *v54;
  }
  LOBYTE(v53) = *(_BYTE *)(v4 + 1248);
  EtwTraceEndDispatchMessage(v53, v59);
  return v16;
}
