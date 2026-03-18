/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C001C9D0
 * Callers:
 *     xxxSetInformationThread @ 0x1C000DBD0 (xxxSetInformationThread.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00839E4 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00A4400 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C0115C40 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxBroadcastMessage @ 0x1C013F3DC (xxxBroadcastMessage.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01DA420 (EditionxxxBroadcastSPIChange.c)
 * Callees:
 *     GetPrimaryMonitorRectForWindow @ 0x1C001AEDC (GetPrimaryMonitorRectForWindow.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C001D0F4 (xxxSendMessageCallback.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00839E4 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     _PostTransformableMessageIL @ 0x1C0087700 (_PostTransformableMessageIL.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C013D248 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  ULONG_PTR v20; // rsi
  __int64 v21; // r8
  __int16 v22; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r13
  struct _LARGE_STRING *v28; // r9
  __int64 v29; // rdx
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v32; // xmm0
  _WORD *v33; // rcx
  unsigned __int16 v34; // ax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+58h] [rbp-59h]
  __int64 v38; // [rsp+60h] [rbp-51h] BYREF
  __int64 v39; // [rsp+68h] [rbp-49h]
  __int64 CurrentProcessWin32Process; // [rsp+70h] [rbp-41h]
  __int64 v41; // [rsp+78h] [rbp-39h]
  __int64 v42; // [rsp+80h] [rbp-31h] BYREF
  ULONG_PTR v43; // [rsp+88h] [rbp-29h]
  __int64 v44; // [rsp+90h] [rbp-21h]
  _QWORD v45[3]; // [rsp+98h] [rbp-19h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-1h] BYREF
  __int64 *v47; // [rsp+F8h] [rbp+47h]

  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(v45, 0, sizeof(v45));
  if ( a2 - 1024 <= 0xBBFF )
  {
    v37 = 1LL;
    UserSetLastError(87LL);
  }
  else
  {
    v37 = 0LL;
  }
  v12 = a7;
  if ( !a7 && (a2 == 26 || a2 == 21 || a2 == 29 || a2 == 295 || a2 == 794 || a2 - 804 <= 1) )
    v12 = 1;
  if ( !a1 )
  {
    v38 = 0LL;
    v39 = 0LL;
    if ( a2 >= 0x1A )
    {
      if ( a2 <= 0x1B )
      {
        if ( a4 )
        {
          if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v38, a4) )
            return 0LL;
          PushW32ThreadLock(v39, v45, Win32FreePool);
          a4 = (struct _LARGE_STRING *)&v38;
        }
        xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v12, a8);
        if ( a4 )
          PopAndFreeAlwaysW32ThreadLock(v45);
        return 1LL;
      }
      if ( a2 == 30 )
      {
        if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) == 0 )
          return 0LL;
      }
      else
      {
        if ( a2 == 42 )
        {
          xxxSystemBroadcastMessage(0x2Au, a3, (__int64)a4, a5, a6, v12, a8);
          return 1LL;
        }
        if ( a2 - 712 <= 1 )
        {
          xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v12, a8);
          return 1LL;
        }
      }
    }
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
    if ( !a1 )
    {
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  v41 = BuildHwndList(*(struct tagWND **)(a1 + 112));
  v15 = v41;
  if ( !v41 )
    return 0LL;
  v16 = (__int64 *)(v41 + 32);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13);
  v18 = *(_QWORD *)(v41 + 32);
  v47 = (__int64 *)(v41 + 32);
  if ( v18 == 1 )
    goto LABEL_28;
  do
  {
    LOBYTE(v17) = 1;
    v19 = HMValidateHandleNoSecure(v18, v17);
    v20 = v19;
    if ( v19 )
    {
      v21 = *(_QWORD *)(v19 + 40);
      if ( (*(_WORD *)(v21 + 42) & 0x3FFF) != 0x29C )
      {
        v22 = **(_WORD **)(*(_QWORD *)(v19 + 136) + 8LL);
        v17 = gpsi;
        if ( *(_WORD *)(gpsi + 908LL) != v22
          && gaOleMainThreadWndClass != v22
          && (!v37 || (*(_BYTE *)(v21 + 21) & 2) == 0)
          && (a2 - 784 > 1
           || (*(_BYTE *)(v21 + 31) & 0x10) != 0
           || (*(_DWORD *)(*(_QWORD *)(v20 + 16) + 480LL) & 0x800) != 0) )
        {
          if ( a8 == 1 )
          {
            if ( *(_DWORD *)(v21 + 236) == 1 )
              goto LABEL_17;
          }
          else if ( a8 != 2 || *(_DWORD *)(v21 + 236) != 1 || (*(_BYTE *)(v21 + 234) & 0x20) != 0 )
          {
LABEL_17:
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v42 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v42;
            v43 = v20;
            HMLockObject(v20);
            v26 = 0LL;
            switch ( a5 )
            {
              case 0u:
                xxxSendTransformableMessageTimeout(v20, 0, 0, 0LL, v12, 1);
                goto LABEL_25;
              case 1u:
                goto LABEL_19;
              case 2u:
                if ( !*(_QWORD *)(v20 + 120) )
                  PostTransformableMessageIL((struct tagWND *)v20, a2, a3, (__int64)a4, v12);
                goto LABEL_25;
              case 3u:
                xxxSendMessageCallback(
                  (struct tagWND *)v20,
                  a2,
                  *(_QWORD *)a6,
                  *((_QWORD *)a6 + 1),
                  *((_DWORD *)a6 + 4),
                  v12,
                  1);
                goto LABEL_25;
            }
            if ( a5 != 4 )
            {
              if ( a5 == 5 )
              {
                v36 = *(_QWORD *)(v20 + 16);
                if ( *(_QWORD *)(v36 + 416) != CurrentProcessWin32Process || (*(_DWORD *)(v36 + 480) & 8) != 0 )
                {
                  xxxSendNotifyMessage(v20, a2, a3, a4, v12);
                }
                else
                {
                  _InterlockedIncrement(&glSendMessage);
                  xxxSendTransformableMessageTimeout(v20, 0, 0, 0LL, 1, 1);
                }
              }
              else if ( a5 == 6 )
              {
                goto LABEL_78;
              }
LABEL_25:
              ThreadUnlock1(v24, v26, v25);
              goto LABEL_26;
            }
LABEL_78:
            v35 = xxxSendTransformableMessageTimeout(
                    v20,
                    *(_DWORD *)a6,
                    *((_DWORD *)a6 + 1),
                    *((_QWORD *)a6 + 1),
                    v12,
                    1);
            v26 = 0LL;
            if ( v35 || a5 != 6 )
              goto LABEL_25;
LABEL_19:
            v27 = 0LL;
            if ( a2 < 0x1A )
            {
LABEL_22:
              v28 = a4;
              v29 = a2;
              goto LABEL_23;
            }
            if ( a2 > 0x1B )
            {
              if ( a2 != 126 )
                goto LABEL_22;
              PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(&v46, v20);
              v32 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
              v29 = 126LL;
              v28 = (struct _LARGE_STRING *)((unsigned __int16)(v32.m128i_i16[0]
                                                              - PrimaryMonitorRectForWindow->m128i_i64[0]) | ((unsigned __int16)(v32.m128i_i16[2] - HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0])) << 16));
LABEL_23:
              xxxSendNotifyMessage(v20, v29, a3, v28, v12);
LABEL_24:
              v16 = v47;
              goto LABEL_25;
            }
            if ( a4 )
            {
              v33 = (_WORD *)*((_QWORD *)a4 + 1);
              if ( *v33 )
              {
                v34 = UserAddAtomEx(v33, 0LL, 2LL);
                v27 = v34;
                if ( !v34 )
                  goto LABEL_24;
              }
              else
              {
                v27 = -1LL;
              }
            }
            if ( !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v20 + 16), a2, a3, v27, 0LL)
              && (unsigned __int64)(v27 + 1) > 1 )
            {
              UserDeleteAtom((unsigned __int16)v27);
            }
            goto LABEL_24;
          }
        }
      }
    }
LABEL_26:
    v47 = ++v16;
    v18 = *v16;
  }
  while ( *v16 != 1 );
  v15 = v41;
LABEL_28:
  FreeHwndList(v15);
  return 1LL;
}
