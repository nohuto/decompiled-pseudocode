/*
 * XREFs of xxxDispatchMessage @ 0x1C0023E5C
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000B108 (xxxDCETrackCaptionButton.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000DCE0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000E570 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000E7C0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserDispatchMessage @ 0x1C0023C90 (NtUserDispatchMessage.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C02005C8 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0202AE0 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 * Callees:
 *     ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C00244F0 (--1CEtwTraceDispatchMessage@@QEAA@XZ.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0026490 (xxxSimpleDoSyncPaint.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     SfnDWORD @ 0x1C0043660 (SfnDWORD.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     ValidateTimerCallback @ 0x1C00DDE28 (ValidateTimerCallback.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C010E578 (RtlWCSMessageWParamCharToMB.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C022B318 (RtlMBMessageWParamCharToWCS.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDispatchMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  struct _KTHREAD *v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 (__fastcall *i)(int, int, int, int, __int64, __int64, char); // rcx
  __int64 v15; // r8
  __int64 *v16; // rax
  BOOL v17; // r15d
  int v18; // eax
  __int64 v19; // r14
  char *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r12d
  int v24; // r14d
  int v25; // r13d
  unsigned int *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned int v29; // ebp
  _BOOL8 v30; // rcx
  void *v31; // rax
  char v32; // r9
  __int64 (__fastcall *v33)(int, int, int, int, __int64, __int64, char); // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rbp
  unsigned int v36; // r10d
  __int64 *v37; // r14
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // rdi
  struct _KTHREAD *v42; // rbp
  unsigned __int64 v43; // rdi
  __int64 v44; // rbp
  __int64 v45; // r12
  int v46; // r12d
  int v47; // ebp
  int v48; // r13d
  __int64 v49; // r8
  unsigned int *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // edi
  void *v54; // rax
  _QWORD v56[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v57; // [rsp+A0h] [rbp+8h] BYREF

  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v57 = *(_DWORD *)(a1 + 8);
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  LOBYTE(v6) = *(_BYTE *)(v4 + 1216);
  EtwTraceBeginDispatchMessage(v6, v57);
  v8 = *(_QWORD *)a1;
  v9 = 0LL;
  if ( !*(_QWORD *)a1 || (v9 = ValidateHwnd(v8)) != 0 )
  {
    v10 = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)v10 < 0x400
      && ((v8 = 512LL, (MessageTable[v10] & 0x200) != 0) || (_DWORD)v10 == 537 && (*(_DWORD *)(a1 + 16) & 0x8000LL) != 0)
      || (_DWORD)v10 == 536 && (*(_DWORD *)(a1 + 16) & 0x8000LL) != 0 )
    {
      UserSetLastError(1159LL);
      goto LABEL_97;
    }
    v11 = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v10) )
    {
      v16 = (__int64 *)PsGetThreadWin32Thread(v11);
      if ( v16 )
        v12 = *v16;
    }
    v17 = 1;
    v56[0] = *(_QWORD *)(v12 + 408);
    *(_QWORD *)(v12 + 408) = v56;
    v56[1] = v9;
    if ( v9 )
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    v18 = *(_DWORD *)(a1 + 8);
    if ( v18 == 275 || v18 == 280 )
    {
      v13 = *(_QWORD *)(a1 + 24);
      if ( v13 )
      {
        if ( v18 == 280 )
        {
          v13 = gtmrListHead;
          v19 = 0LL;
          for ( i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gtmrListHead;
                i != (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gtmrListHead;
                i = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, char))i )
          {
            v20 = (char *)i - 72;
            if ( (*((_DWORD *)i - 6) & 2) != 0
              && *(_QWORD *)(a1 + 16) == *((_QWORD *)v20 + 12)
              && v9 == *((_QWORD *)v20 + 11) )
            {
              goto LABEL_29;
            }
          }
          v20 = 0LL;
LABEL_29:
          if ( v20 )
          {
            if ( *((_QWORD *)v20 + 4) || (MicrosoftTelemetryAssertTriggeredNoArgsKM(i), *((_QWORD *)v20 + 4)) )
              (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))v20 + 4))(
                v9,
                280LL,
                *(unsigned int *)(a1 + 16),
                (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
          }
          goto LABEL_96;
        }
        i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gptiCurrent;
        if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
        {
          v21 = SfnDWORD(
                  v9,
                  275,
                  *(_QWORD *)(a1 + 16),
                  (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                  *(_QWORD *)(a1 + 24),
                  *(_QWORD *)(gpsi + 752LL));
LABEL_37:
          v19 = v21;
          goto LABEL_96;
        }
        goto LABEL_34;
      }
    }
    if ( !v9 )
      goto LABEL_34;
    if ( v18 == 15 )
    {
      v22 = *(_QWORD *)(v9 + 40);
      v23 = *(_DWORD *)(v22 + 28);
      v24 = *(_DWORD *)(v22 + 24);
      v25 = *(_DWORD *)(v22 + 232);
      *(_BYTE *)(v22 + 18) |= 0x40u;
      if ( (unsigned int)IsWindowDesktopComposed(v9) )
      {
        v26 = *(unsigned int **)(v9 + 40);
        v27 = v26[7];
        v28 = v26[6];
        v29 = v26[58];
        if ( v23 != (_DWORD)v27 )
          goto LABEL_45;
        if ( v24 == (_DWORD)v28 && v25 == v29 )
          goto LABEL_52;
        if ( v23 == (_DWORD)v27 )
        {
          if ( v24 == (_DWORD)v28 )
          {
            if ( ((v29 ^ v25) & 0x2E00300) == 0 )
              goto LABEL_52;
            v30 = 1LL;
          }
          else
          {
            v30 = (((unsigned int)v28 ^ v24) & 0x4E27A9) != 0;
          }
        }
        else
        {
LABEL_45:
          v30 = (((unsigned int)v27 ^ v23) & 0xB9CF0000) != 0;
        }
        if ( v30 )
        {
          v31 = (void *)ReferenceDwmApiPort(v30, v28, v27);
          DwmAsyncChildStyleChange(v31);
        }
      }
    }
LABEL_52:
    v13 = *(_QWORD *)(v9 + 40);
    v32 = *(_BYTE *)(v13 + 18);
    if ( (v32 & 4) != 0 )
    {
      v15 = *(unsigned int *)(a1 + 8);
      if ( (unsigned int)v15 < 0x400 )
        v33 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gapfnScSendMessage[(unsigned __int8)MessageTable[v15]];
      else
        v33 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))SfnDWORD;
      i = SfnINWPARAMCHAR;
      if ( v33 == SfnINWPARAMCHAR && (v32 & 8) != 0 )
      {
        RtlMBMessageWParamCharToWCS((unsigned int)v15, a1 + 16);
        v13 = *(_QWORD *)(v9 + 40);
      }
      v34 = *(_QWORD *)(v13 + 120);
      if ( v34 < 7 )
      {
        v21 = (*(&gServerHandlers + v34))(
                (struct tagWND *)v9,
                *(_DWORD *)(a1 + 8),
                *(HWND *)(a1 + 16),
                *(_QWORD *)(a1 + 24));
        goto LABEL_37;
      }
LABEL_34:
      v19 = 0LL;
LABEL_96:
      ThreadUnlock1(i, v13, v15);
      v2 = v19;
      goto LABEL_97;
    }
    v35 = *(_QWORD *)(v13 + 120);
    v36 = *(_DWORD *)(a1 + 8);
    if ( (v32 & 8) != 0 )
    {
      v37 = (__int64 *)(a1 + 16);
      RtlWCSMessageWParamCharToMB(v36, a1 + 16);
      v36 = *(_DWORD *)(a1 + 8);
      if ( v36 != 576 && v36 != 281 )
      {
        v38 = *v37;
LABEL_65:
        v39 = SfnDWORD(v9, v36, v38, *(_QWORD *)(a1 + 24), v35, *(_QWORD *)(gpsi + 752LL));
LABEL_72:
        v19 = v39;
        if ( *(_DWORD *)(a1 + 8) != 15 )
          goto LABEL_96;
        v41 = *(_QWORD *)a1;
        v42 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(i, v13) )
          PsGetThreadWin32Thread(v42);
        v15 = (unsigned __int16)v41;
        i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gpsi;
        if ( (unsigned __int64)(unsigned __int16)v41 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_96;
        v43 = v41 >> 16;
        v13 = gSharedInfo[1];
        v44 = v13 + (unsigned int)(v15 * LODWORD(gSharedInfo[2]));
        v45 = 3 * ((__int64)(unsigned int)(v15 * LODWORD(gSharedInfo[2])) >> 5);
        if ( (_WORD)v43 != *(_WORD *)(v44 + 26)
          && (_WORD)v43 != 0xFFFF
          && ((_WORD)v43 || !PsGetCurrentProcessWow64Process()) )
        {
          goto LABEL_96;
        }
        if ( (*(_BYTE *)(v44 + 25) & 1) != 0 )
          goto LABEL_96;
        if ( *(_BYTE *)(v44 + 24) != 1 )
          goto LABEL_96;
        if ( !*(_QWORD *)(gpKernelHandleTable + 8 * v45) )
          goto LABEL_96;
        i = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, char))(v9 + 40);
        if ( (*((_BYTE *)i + 18) & 0x40) == 0 )
          goto LABEL_96;
        v46 = *((_DWORD *)i + 7);
        v47 = *((_DWORD *)i + 6);
        v48 = *((_DWORD *)i + 58);
        *((_BYTE *)i + 20) &= ~1u;
        if ( !(unsigned int)IsWindowDesktopComposed(v9) )
          goto LABEL_95;
        v50 = *(unsigned int **)(v9 + 40);
        v51 = v50[7];
        v52 = v50[6];
        v53 = v50[58];
        if ( v46 != (_DWORD)v51 )
          goto LABEL_89;
        if ( v47 != (_DWORD)v52 || v48 != v53 )
        {
          if ( v46 != (_DWORD)v51 )
          {
LABEL_89:
            v17 = (((unsigned int)v51 ^ v46) & 0xB9CF0000) != 0;
            goto LABEL_93;
          }
          if ( v47 != (_DWORD)v52 )
          {
            v17 = (((unsigned int)v52 ^ v47) & 0x4E27A9) != 0;
            goto LABEL_93;
          }
          if ( ((v53 ^ v48) & 0x2E00300) != 0 )
          {
LABEL_93:
            if ( v17 )
            {
              v54 = (void *)ReferenceDwmApiPort(v52, v51, v49);
              DwmAsyncChildStyleChange(v54);
            }
          }
        }
LABEL_95:
        xxxSimpleDoSyncPaint((struct tagWND *)v9);
        goto LABEL_96;
      }
      v40 = *v37;
    }
    else
    {
      if ( v36 != 576 && v36 != 281 )
      {
        v38 = *(_QWORD *)(a1 + 16);
        goto LABEL_65;
      }
      v40 = *(_QWORD *)(a1 + 16);
    }
    v39 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v36]])(
            v9,
            v36,
            v40,
            *(_QWORD *)(a1 + 24),
            v35,
            *(_QWORD *)(gpsi + 752LL),
            1,
            0LL);
    goto LABEL_72;
  }
LABEL_97:
  CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage((CEtwTraceDispatchMessage *)&v57);
  return v2;
}
