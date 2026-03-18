/*
 * XREFs of xxxTooltipWndProc @ 0x1C01044C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxBeginPaint @ 0x1C0037D64 (xxxBeginPaint.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00648E8 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxDefWindowProc @ 0x1C006CD90 (xxxDefWindowProc.c)
 *     xxxEndPaint @ 0x1C00E2444 (xxxEndPaint.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C01048A0 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     InitTooltipDelay @ 0x1C0104A1C (InitTooltipDelay.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0104A84 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01B0B28 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1C01B18B0 (StopFade.c)
 *     zzzStartFade @ 0x1C01B20EC (zzzStartFade.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C01FE90C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C01FF21C (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C01FF2E4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxTooltipWndProc(struct tagWND *a1, __int64 a2, HDC a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // r15
  __int64 v6; // r8
  unsigned int v7; // ebp
  __int16 v9; // ax
  unsigned int v11; // edx
  unsigned int v12; // r9d
  unsigned int v13; // ebx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  struct tagTOOLTIPWND *v23; // rcx
  int v24; // eax
  unsigned int v25; // r8d
  unsigned int v26; // edx
  HWND FadeInternal; // rax
  __int64 *v28; // rcx
  HDC v29[10]; // [rsp+50h] [rbp-98h] BYREF

  v5 = a4;
  v6 = *((_QWORD *)a1 + 5);
  v7 = a2;
  if ( (*(_DWORD *)(v6 + 232) & 0x800) != 0 )
    return 0LL;
  v9 = *(_WORD *)(v6 + 42);
  if ( v9 != 694 )
  {
    if ( v9 )
      return 0LL;
    if ( (_DWORD)a2 != 129 )
      return xxxDefWindowProc(a1, a2, (__int64)a3, a4);
    v11 = *(_DWORD *)(v6 + 252);
    v12 = *(unsigned __int16 *)(gpsi + 384LL);
    if ( v11 + 312 >= v12 )
    {
      v19 = *((_QWORD *)a1 + 34);
      if ( v19 )
      {
        v20 = 0LL;
        if ( v11 )
        {
          while ( !*(_BYTE *)((unsigned int)v20 + v19) )
          {
            v20 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v20 >= v11 )
              goto LABEL_23;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
        }
LABEL_23:
        memset(*((void **)a1 + 34), 0, *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL));
      }
    }
    else
    {
      if ( *(_DWORD *)(v6 + 200) + v11 + 312 < v12 )
        return 0LL;
      v13 = v12 - 312;
      v14 = Win32AllocPoolZInit(v12 - 312, 1937208149LL);
      if ( !v14 )
        return 0LL;
      v15 = *((_QWORD *)a1 + 34);
      if ( v15 )
      {
        v16 = 0LL;
        v17 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL);
        if ( v17 )
        {
          while ( !*(_BYTE *)((unsigned int)v16 + v15) )
          {
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= v17 )
              goto LABEL_15;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
        }
LABEL_15:
        Win32FreePool(*((_QWORD *)a1 + 34));
      }
      v18 = *((_QWORD *)a1 + 5);
      *((_QWORD *)a1 + 34) = v14;
      *(_DWORD *)(v18 + 252) = v13;
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = 694;
  }
  v21 = *((_QWORD *)a1 + 34);
  *(_QWORD *)v21 = a1;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 && v7 != 130 )
    goto LABEL_59;
  if ( v7 == 15 )
  {
    xxxBeginPaint(a1, (__int64)v29);
    xxxTooltipRender((struct tagTOOLTIPWND *)v21, v29[0]);
    xxxEndPaint(a1, v29);
    return 0LL;
  }
  if ( v7 != 20 )
  {
    if ( v7 != 71 )
    {
      switch ( v7 )
      {
        case 0x81u:
          InitTooltipDelay(v21);
          InitTooltipAnimation(v23);
          break;
        case 0x82u:
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v21);
          v22 = *(_QWORD *)(v21 + 16);
          if ( v22 )
            GreDeleteDC(v22);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 24LL) + 48LL) &= 0xFFFFFCFF;
          break;
        case 0x118u:
          xxxTooltipHandleTimer((struct tagTOOLTIPWND *)v21, (unsigned int)a3);
          return 0LL;
        case 0x318u:
          xxxTooltipRender((struct tagTOOLTIPWND *)v21, a3);
          return 0LL;
      }
LABEL_59:
      a4 = v5;
      a2 = v7;
      return xxxDefWindowProc(a1, a2, (__int64)a3, a4);
    }
    v24 = *(_DWORD *)(v5 + 32);
    if ( (v24 & 0x40) == 0 )
    {
      if ( (v24 & 0x80u) != 0 )
      {
        if ( (gfade[6] & 0x20) != 0 )
          StopFade();
        else
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v21);
      }
      goto LABEL_59;
    }
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    {
LABEL_42:
      v25 = *(_DWORD *)(v21 + 12);
LABEL_43:
      v26 = 2;
LABEL_44:
      SetTooltipTimer((struct tagTOOLTIPWND *)v21, v26, v25);
      goto LABEL_59;
    }
    if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
    {
      if ( !(unsigned int)CreateTooltipBitmap(
                            (struct tagTOOLTIPWND *)v21,
                            *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL),
                            *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL)) )
        goto LABEL_54;
      FadeInternal = *(HWND *)(v21 + 16);
    }
    else
    {
      FadeInternal = (HWND)CreateFadeInternal(a1, 0LL, 0x87u, 0x21u, 0);
    }
    if ( FadeInternal )
    {
      v28 = *(__int64 **)v21;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v28, 0x317u, FadeInternal, 30LL, 0, 0, 0LL, 1, 1);
      if ( (gfade[6] & 0x20) == 0 )
      {
        v26 = 3;
        v25 = 20;
        *(_DWORD *)(v21 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_44;
      }
      zzzStartFade();
      goto LABEL_42;
    }
LABEL_54:
    v25 = 0;
    goto LABEL_43;
  }
  return 0LL;
}
