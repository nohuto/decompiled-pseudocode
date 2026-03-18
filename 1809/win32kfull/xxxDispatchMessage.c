/*
 * XREFs of xxxDispatchMessage @ 0x1C002DDC0
 * Callers:
 *     NtUserDispatchMessage @ 0x1C002DCB0 (NtUserDispatchMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAAFC (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00BB8C0 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC348 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00BC5C0 (xxxSetCsrssThreadDesktop.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022900C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C022B4B4 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     SfnDWORD @ 0x1C002D8C0 (SfnDWORD.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0030150 (xxxSimpleDoSyncPaint.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ValidateTimerCallback @ 0x1C00F85E4 (ValidateTimerCallback.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C01303C4 (RtlWCSMessageWParamCharToMB.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0241274 (RtlMBMessageWParamCharToWCS.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDispatchMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r14
  struct _KTHREAD *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rax
  int v17; // eax
  int v18; // r13d
  __int64 v19; // rax
  int v20; // r15d
  int v21; // r14d
  int v22; // r12d
  unsigned int *v23; // rax
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // r15d
  int v28; // r12d
  bool v29; // zf
  int v30; // r14d
  void *v31; // rax
  char v32; // r9
  __int64 v33; // r8
  __int64 (__fastcall *v34)(volatile signed __int32 *, __int64, __int64, __int64, __int64, __int64); // rax
  unsigned __int64 v35; // rax
  __int64 v36; // r14
  unsigned int v37; // r10d
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  struct _KTHREAD *v40; // rdi
  int v41; // r8d
  unsigned __int64 v42; // rbx
  __int64 v43; // rdi
  _QWORD *v44; // r15
  int v45; // r15d
  int v46; // edi
  int v47; // r12d
  unsigned int *v48; // rax
  int v49; // ebx
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r15d
  bool v53; // zf
  int v54; // edi
  void *v55; // rax
  struct _KTHREAD *v56; // rbx
  __int64 *v57; // rax
  _QWORD v59[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v60; // [rsp+A0h] [rbp+8h]

  v2 = 0LL;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v60 = *(_DWORD *)(a1 + 8);
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  EtwTraceBeginDispatchMessage(*(unsigned __int8 *)(v3 + 1224), v60);
  v7 = *(_QWORD *)a1;
  v8 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v8 = ValidateHwnd(v7);
    if ( !v8 )
      goto LABEL_13;
  }
  v10 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v10 >= 0x400
    || (v7 = 512LL, (MessageTable[v10] & 0x200) == 0) && ((_DWORD)v10 != 537 || (*(_DWORD *)(a1 + 16) & 0x8000LL) == 0) )
  {
    if ( (_DWORD)v10 != 536 || (*(_DWORD *)(a1 + 16) & 0x8000LL) == 0 )
    {
      v12 = KeGetCurrentThread();
      v13 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v10) )
      {
        v16 = (__int64 *)PsGetThreadWin32Thread(v12);
        if ( v16 )
          v13 = *v16;
      }
      v59[0] = *(_QWORD *)(v13 + 416);
      *(_QWORD *)(v13 + 416) = v59;
      v59[1] = v8;
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v17 = *(_DWORD *)(a1 + 8);
      if ( v17 == 275 || v17 == 280 )
      {
        v14 = *(_QWORD *)(a1 + 24);
        if ( v14 )
        {
          if ( v17 == 280 )
          {
            v15 = gtmrListHead;
            v11 = 0LL;
          }
          else
          {
            v15 = gptiCurrent;
            if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
            {
              v11 = 0LL;
            }
            else if ( (unsigned int)ValidateTimerCallback() )
            {
              v11 = SfnDWORD(
                      (volatile signed __int32 *)v8,
                      275LL,
                      *(_QWORD *)(a1 + 16),
                      (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24),
                      *(_QWORD *)(a1 + 24),
                      *(_QWORD *)(gpsi + 752LL));
            }
            else
            {
              v11 = 0LL;
            }
          }
          goto LABEL_91;
        }
      }
      if ( !v8 )
      {
        v11 = 0LL;
LABEL_91:
        ThreadUnlock1(v15, v14);
        goto LABEL_92;
      }
      v18 = -268435456;
      if ( v17 != 15 )
        goto LABEL_47;
      v19 = *(_QWORD *)(v8 + 40);
      v20 = *(_DWORD *)(v19 + 28);
      v21 = *(_DWORD *)(v19 + 24);
      v22 = *(_DWORD *)(v19 + 232);
      *(_BYTE *)(v19 + 18) |= 0x40u;
      if ( !(unsigned int)IsWindowDesktopComposed(v8) )
        goto LABEL_47;
      v23 = *(unsigned int **)(v8 + 40);
      v24 = v23[7];
      v25 = v23[6];
      v26 = v23[58];
      if ( v20 != v24 )
        goto LABEL_37;
      if ( v21 == (_DWORD)v25 && v22 == (_DWORD)v26 )
        goto LABEL_47;
      if ( v20 == v24 )
      {
        if ( v21 == (_DWORD)v25 )
        {
          if ( (((unsigned int)v26 ^ v22) & 0x2E00300) == 0 )
          {
LABEL_47:
            v15 = *(_QWORD *)(v8 + 40);
            v32 = *(_BYTE *)(v15 + 18);
            if ( (v32 & 4) != 0 )
            {
              v33 = *(unsigned int *)(a1 + 8);
              if ( (unsigned int)v33 < 0x400 )
                v34 = (__int64 (__fastcall *)(volatile signed __int32 *, __int64, __int64, __int64, __int64, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[v33]];
              else
                v34 = SfnDWORD;
              v14 = (__int64)SfnINWPARAMCHAR;
              if ( (char *)v34 == (char *)SfnINWPARAMCHAR && (v32 & 8) != 0 )
              {
                RtlMBMessageWParamCharToWCS((unsigned int)v33, a1 + 16);
                v15 = *(_QWORD *)(v8 + 40);
              }
              v35 = *(_QWORD *)(v15 + 120);
              if ( v35 < 7 )
                v11 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*(&gServerHandlers + v35))(
                        v8,
                        *(unsigned int *)(a1 + 8),
                        *(_QWORD *)(a1 + 16),
                        *(_QWORD *)(a1 + 24));
              else
                v11 = 0LL;
              goto LABEL_91;
            }
            v36 = *(_QWORD *)(v15 + 120);
            v37 = *(_DWORD *)(a1 + 8);
            if ( (v32 & 8) != 0 )
            {
              RtlWCSMessageWParamCharToMB(v37, a1 + 16);
              v37 = *(_DWORD *)(a1 + 8);
            }
            if ( v37 == 576 || v37 == 281 )
              v38 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v37]])(
                      v8,
                      v37,
                      *(_QWORD *)(a1 + 16),
                      *(_QWORD *)(a1 + 24),
                      v36,
                      *(_QWORD *)(gpsi + 752LL),
                      1,
                      0LL);
            else
              v38 = SfnDWORD(
                      (volatile signed __int32 *)v8,
                      v37,
                      *(_QWORD *)(a1 + 16),
                      *(_QWORD *)(a1 + 24),
                      v36,
                      *(_QWORD *)(gpsi + 752LL));
            v11 = v38;
            if ( *(_DWORD *)(a1 + 8) != 15 )
              goto LABEL_91;
            v39 = *(_QWORD *)a1;
            v40 = KeGetCurrentThread();
            if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14) )
              PsGetThreadWin32Thread(v40);
            v41 = (unsigned __int16)v39;
            v15 = gpsi;
            if ( (unsigned __int64)(unsigned __int16)v39 >= *(_QWORD *)(gpsi + 8LL) )
              goto LABEL_91;
            v42 = v39 >> 16;
            v43 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v41 * *((_DWORD *)&gSharedInfo + 4));
            v14 = 3 * ((__int64)(unsigned int)(v41 * *((_DWORD *)&gSharedInfo + 4)) >> 5);
            v15 = gpKernelHandleTable;
            v44 = (_QWORD *)(gpKernelHandleTable
                           + 24 * ((__int64)(unsigned int)(v41 * *((_DWORD *)&gSharedInfo + 4)) >> 5));
            if ( (_WORD)v42 != *(_WORD *)(v43 + 26)
              && (_WORD)v42 != 0xFFFF
              && ((_WORD)v42 || !PsGetCurrentProcessWow64Process(gpKernelHandleTable)) )
            {
              goto LABEL_91;
            }
            if ( (*(_BYTE *)(v43 + 25) & 1) != 0 )
              goto LABEL_91;
            if ( *(_BYTE *)(v43 + 24) != 1 )
              goto LABEL_91;
            if ( !*v44 )
              goto LABEL_91;
            v15 = *(_QWORD *)(v8 + 40);
            if ( (*(_BYTE *)(v15 + 18) & 0x40) == 0 )
              goto LABEL_91;
            v45 = *(_DWORD *)(v15 + 28);
            v46 = *(_DWORD *)(v15 + 24);
            v47 = *(_DWORD *)(v15 + 232);
            *(_BYTE *)(v15 + 20) &= ~1u;
            if ( !(unsigned int)IsWindowDesktopComposed(v8) )
              goto LABEL_90;
            v48 = *(unsigned int **)(v8 + 40);
            v49 = v48[7];
            v50 = v48[6];
            v51 = v48[58];
            if ( v45 != v49 )
              goto LABEL_80;
            if ( v46 == (_DWORD)v50 && v47 == (_DWORD)v51 )
              goto LABEL_90;
            if ( v45 == v49 )
            {
              if ( v46 == (_DWORD)v50 )
              {
                if ( (((unsigned int)v51 ^ v47) & 0x2E00300) == 0 )
                {
LABEL_90:
                  xxxSimpleDoSyncPaint((struct tagWND *)v8);
                  goto LABEL_91;
                }
                v49 = v48[58];
LABEL_89:
                v55 = (void *)ReferenceDwmApiPort(v51, v50);
                DwmAsyncChildStyleChange(v55, *(_QWORD *)v8, v18, v49);
                goto LABEL_90;
              }
              v54 = (v50 ^ v46) & 0x4E27A9;
              v49 = v48[6];
              v51 = v54 != 0;
              v18 = v54 != 0 ? 0xFFFFFFEC : 0;
              v53 = v54 == 0;
            }
            else
            {
LABEL_80:
              v52 = (v49 ^ v45) & 0xB9CF0000;
              v51 = v52 != 0;
              v18 = v52 != 0 ? 0xFFFFFFF0 : 0;
              v53 = v52 == 0;
            }
            if ( v53 )
              v49 = 0;
            if ( !(_DWORD)v51 )
              goto LABEL_90;
            goto LABEL_89;
          }
          v28 = -268435456;
          v24 = v23[58];
LABEL_46:
          v31 = (void *)ReferenceDwmApiPort(v25, v26);
          DwmAsyncChildStyleChange(v31, *(_QWORD *)v8, v28, v24);
          goto LABEL_47;
        }
        v30 = (v25 ^ v21) & 0x4E27A9;
        v24 = v23[6];
        v26 = v30 != 0;
        v28 = v30 != 0 ? 0xFFFFFFEC : 0;
        v29 = v30 == 0;
      }
      else
      {
LABEL_37:
        v27 = (v24 ^ v20) & 0xB9CF0000;
        v26 = v27 != 0;
        v28 = v27 != 0 ? 0xFFFFFFF0 : 0;
        v29 = v27 == 0;
      }
      if ( v29 )
        v24 = 0;
      if ( !(_DWORD)v26 )
        goto LABEL_47;
      goto LABEL_46;
    }
  }
  UserSetLastError(1159LL);
LABEL_13:
  v11 = 0LL;
LABEL_92:
  v56 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v9) )
  {
    v57 = (__int64 *)PsGetThreadWin32Thread(v56);
    if ( v57 )
      v2 = *v57;
  }
  EtwTraceEndDispatchMessage(*(unsigned __int8 *)(v2 + 1224), v60);
  return v11;
}
