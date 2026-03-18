/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C0060914
 * Callers:
 *     xxxSetInformationThread @ 0x1C000E040 (xxxSetInformationThread.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C006357C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00636E0 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxBroadcastMessage @ 0x1C01115F4 (xxxBroadcastMessage.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01A4EC0 (EditionxxxBroadcastSPIChange.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C0060F68 (xxxSendMessageCallback.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C00612AC (GetPrimaryMonitorRectForWindow.c)
 *     _PostTransformableMessageIL @ 0x1C0061A1C (_PostTransformableMessageIL.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C006357C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C010F414 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        __int64 a1,
        __int64 a2,
        HWND a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  unsigned int v10; // ebx
  int v12; // ebp
  __int64 v13; // rcx
  struct tagBWL *v14; // rsi
  unsigned __int64 *v15; // r13
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r8
  __int16 v22; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r15
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v29; // xmm0
  __int64 v30; // rdx
  struct _LARGE_STRING *v31; // r9
  _WORD *v33; // rcx
  unsigned __int16 v34; // ax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+50h] [rbp-88h]
  struct tagBWL *v38; // [rsp+58h] [rbp-80h]
  _BYTE v39[8]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v40; // [rsp+68h] [rbp-70h]
  _BYTE v41[16]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v42[3]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v43[3]; // [rsp+98h] [rbp-40h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+E0h] [rbp+8h]

  v10 = a2;
  if ( (unsigned int)(a2 - 1024) <= 0xBBFF )
  {
    v37 = 1LL;
    UserSetLastError(87LL, a2);
  }
  else
  {
    v37 = 0LL;
  }
  v12 = a7;
  if ( !a7 && (v10 == 26 || v10 == 21 || v10 == 29 || v10 == 295 || v10 == 794 || v10 - 804 <= 1) )
    v12 = 1;
  if ( a1 )
    goto LABEL_5;
  if ( v10 >= 0x1A )
  {
    if ( v10 <= 0x1B )
    {
      if ( a4 )
      {
        if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)v39, a4) )
          return 0LL;
        PushW32ThreadLock(v40, v43, (__int64)Win32FreePool);
        a4 = (struct _LARGE_STRING *)v39;
      }
      xxxSystemBroadcastMessage(v10, (unsigned __int64)a3, (__int64)a4, a5, a6, v12, a8);
      if ( a4 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v43);
      return 1LL;
    }
    if ( v10 != 30 )
    {
      if ( v10 == 42 )
      {
        xxxSystemBroadcastMessage(0x2Au, (unsigned __int64)a3, (__int64)a4, a5, a6, v12, a8);
      }
      else
      {
        if ( v10 - 712 > 1 )
          goto LABEL_49;
        xxxSystemBroadcastMessage(v10, (unsigned __int64)a3, (__int64)a4, a5, a6, v12, a8);
      }
      return 1LL;
    }
    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) == 0 )
      return 0LL;
  }
LABEL_49:
  a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  if ( !a1 )
  {
    UserSetLastError(5LL, a2);
    return 0LL;
  }
LABEL_5:
  v38 = BuildHwndList(*(_QWORD **)(a1 + 88), 2, 0LL);
  v14 = v38;
  if ( !v38 )
    return 0LL;
  v15 = (unsigned __int64 *)((char *)v38 + 32);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  v17 = *((_QWORD *)v38 + 4);
  v18 = CurrentProcessWin32Process;
  if ( v17 == 1 )
    goto LABEL_26;
  do
  {
    LOBYTE(v16) = 1;
    v19 = HMValidateHandleNoSecure(v17, v16);
    v20 = v19;
    if ( v19 )
    {
      v21 = *(_QWORD *)(v19 + 40);
      if ( (*(_WORD *)(v21 + 42) & 0x3FFF) != 0x29C )
      {
        v22 = **(_WORD **)(*(_QWORD *)(v19 + 112) + 8LL);
        v16 = gpsi;
        if ( *(_WORD *)(gpsi + 908LL) != v22
          && gaOleMainThreadWndClass != v22
          && (!v37 || (*(_BYTE *)(v21 + 21) & 2) == 0)
          && (v10 - 784 > 1
           || (*(_BYTE *)(v21 + 31) & 0x10) != 0
           || (*(_DWORD *)(*(_QWORD *)(v20 + 16) + 480LL) & 0x800) != 0)
          && (a8 != 1 || *(_DWORD *)(v21 + 236) == 1)
          && (a8 != 2 || *(_DWORD *)(v21 + 236) != 1 || (*(_BYTE *)(v21 + 234) & 0x20) != 0) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi);
          v42[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v42;
          v25 = 1LL;
          v42[1] = v20;
          _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
          v26 = 0LL;
          if ( !a5 )
          {
            xxxSendTransformableMessageTimeout((__int64 *)v20, v10, a3, (__int64)a4, 0, 0, 0LL, v12, 1);
            goto LABEL_23;
          }
          if ( a5 != 1 )
          {
            if ( a5 == 2 )
            {
              if ( !*(_QWORD *)(v20 + 96) )
                PostTransformableMessageIL((struct tagWND *)v20, v10, (unsigned __int64)a3, (__int64)a4, v12);
              goto LABEL_23;
            }
            if ( a5 == 3 )
            {
              xxxSendMessageCallback(
                (struct tagWND *)v20,
                v10,
                (unsigned __int64)a3,
                (__int64)a4,
                *(_QWORD *)a6,
                *((_QWORD *)a6 + 1),
                *((_DWORD *)a6 + 4),
                v12,
                1);
              goto LABEL_23;
            }
            if ( a5 != 4 )
            {
              if ( a5 == 5 )
              {
                v36 = *(_QWORD *)(v20 + 16);
                if ( *(_QWORD *)(v36 + 416) != v18 || (*(_DWORD *)(v36 + 480) & 8) != 0 )
                {
                  xxxSendNotifyMessage(v20, v10, a3, a4, v12);
                }
                else
                {
                  _InterlockedAdd(&glSendMessage, 1u);
                  xxxSendTransformableMessageTimeout((__int64 *)v20, v10, a3, (__int64)a4, 0, 0, 0LL, 1, 1);
                }
                goto LABEL_23;
              }
              if ( a5 != 6 )
                goto LABEL_23;
            }
            v35 = xxxSendTransformableMessageTimeout(
                    (__int64 *)v20,
                    v10,
                    a3,
                    (__int64)a4,
                    *(_DWORD *)a6,
                    *((_DWORD *)a6 + 1),
                    *((__int64 **)a6 + 1),
                    v12,
                    1);
            v26 = 0LL;
            if ( v35 || a5 != 6 )
            {
LABEL_23:
              ThreadUnlock1(v25, v26, v24);
              goto LABEL_24;
            }
          }
          v27 = 0LL;
          if ( v10 < 0x1A )
            goto LABEL_27;
          if ( v10 <= 0x1B )
          {
            if ( a4 )
            {
              v33 = (_WORD *)*((_QWORD *)a4 + 1);
              if ( *v33 )
              {
                v34 = UserAddAtomEx(v33, 0LL, 2LL);
                v27 = v34;
                if ( !v34 )
                  goto LABEL_22;
              }
              else
              {
                v27 = -1LL;
              }
            }
            if ( !(unsigned int)PostEventMessageEx(
                                  *(struct tagTHREADINFO **)(v20 + 16),
                                  *(_QWORD *)(*(_QWORD *)(v20 + 16) + 424LL),
                                  9u,
                                  v20,
                                  v10,
                                  (__int64)a3,
                                  v27,
                                  0LL)
              && (unsigned __int64)(v27 + 1) > 1 )
            {
              UserDeleteAtom((unsigned __int16)v27);
            }
            goto LABEL_22;
          }
          if ( v10 == 126 )
          {
            PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(v41, v20);
            v29 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
            v30 = 126LL;
            v31 = (struct _LARGE_STRING *)((unsigned __int16)(v29.m128i_i16[0]
                                                            - PrimaryMonitorRectForWindow->m128i_i64[0]) | ((unsigned __int16)(v29.m128i_i16[2] - HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0])) << 16));
          }
          else
          {
LABEL_27:
            v31 = a4;
            v30 = v10;
          }
          xxxSendNotifyMessage(v20, v30, a3, v31, v12);
LABEL_22:
          v18 = CurrentProcessWin32Process;
          goto LABEL_23;
        }
      }
    }
LABEL_24:
    v17 = *++v15;
  }
  while ( *v15 != 1 );
  v14 = v38;
LABEL_26:
  FreeHwndList(v14);
  return 1LL;
}
