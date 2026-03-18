/*
 * XREFs of xxxTooltipWndProc @ 0x1C012F5F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxBeginPaint @ 0x1C00986B0 (xxxBeginPaint.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 *     xxxEndPaint @ 0x1C01040B0 (xxxEndPaint.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C012F9F8 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     InitTooltipDelay @ 0x1C012FB90 (InitTooltipDelay.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C012FBF8 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C013699C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E8748 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1C01E9690 (StopFade.c)
 *     zzzStartFade @ 0x1C01E9ED0 (zzzStartFade.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C023F52C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C023FF00 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023FFEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxTooltipWndProc(struct tagWND *a1, unsigned int a2, HWND a3, unsigned __int64 a4)
{
  __int64 v8; // r10
  __int16 v9; // ax
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // ebx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  struct tagTOOLTIPWND *v24; // rcx
  int v25; // eax
  unsigned int v26; // r8d
  unsigned int v27; // edx
  HWND FadeInternal; // rax
  __int64 *v29; // rcx
  HDC v30[10]; // [rsp+50h] [rbp-98h] BYREF

  memset(v30, 0, 0x48uLL);
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v8 + 232) & 0x800) != 0 )
    return 0LL;
  v9 = *(_WORD *)(v8 + 42);
  if ( v9 != 694 )
  {
    if ( v9 )
      return 0LL;
    if ( a2 != 129 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    v11 = *(_DWORD *)(v8 + 252);
    v12 = *(unsigned __int16 *)(gpsi + 384LL);
    if ( v11 + 320 >= v12 )
    {
      v20 = *((_QWORD *)a1 + 35);
      if ( v20 )
      {
        v21 = 0LL;
        if ( v11 )
        {
          while ( !*(_BYTE *)((unsigned int)v21 + v20) )
          {
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= v11 )
              goto LABEL_23;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
          v8 = *((_QWORD *)a1 + 5);
        }
LABEL_23:
        memset(*((void **)a1 + 35), 0, *(unsigned int *)(v8 + 252));
      }
    }
    else
    {
      if ( *(_DWORD *)(v8 + 200) + v11 + 320 < v12 )
        return 0LL;
      v13 = v12 - 320;
      v14 = Win32AllocPoolZInit(v12 - 320, 1937208149LL);
      if ( !v14 )
        return 0LL;
      v15 = *((_QWORD *)a1 + 35);
      if ( v15 )
      {
        v16 = *((_QWORD *)a1 + 5);
        v17 = 0;
        v18 = *(_DWORD *)(v16 + 252);
        if ( v18 )
        {
          while ( !*(_BYTE *)(v17 + v15) )
          {
            if ( ++v17 >= v18 )
              goto LABEL_15;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
        }
LABEL_15:
        Win32FreePool(*((_QWORD *)a1 + 35));
      }
      v19 = *((_QWORD *)a1 + 5);
      *((_QWORD *)a1 + 35) = v14;
      *(_DWORD *)(v19 + 252) = v13;
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = 694;
  }
  v22 = *((_QWORD *)a1 + 35);
  *(_QWORD *)v22 = a1;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 && a2 != 130 )
    return xxxDefWindowProc(a1, a2, a3, a4);
  if ( a2 == 15 )
  {
    xxxBeginPaint(a1, (__int64)v30);
    xxxTooltipRender((struct tagTOOLTIPWND *)v22, v30[0]);
    xxxEndPaint(a1, v30);
    return 0LL;
  }
  if ( a2 != 20 )
  {
    if ( a2 != 71 )
    {
      switch ( a2 )
      {
        case 0x81u:
          InitTooltipDelay(v22);
          InitTooltipAnimation(v24);
          return xxxDefWindowProc(a1, a2, a3, a4);
        case 0x82u:
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v22);
          v23 = *(_QWORD *)(v22 + 16);
          if ( v23 )
            GreDeleteDC(v23);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 24LL) + 48LL) &= 0xFFFFFCFF;
          return xxxDefWindowProc(a1, a2, a3, a4);
        case 0x118u:
          xxxTooltipHandleTimer((struct tagTOOLTIPWND *)v22, (unsigned int)a3);
          break;
        case 0x318u:
          xxxTooltipRender((struct tagTOOLTIPWND *)v22, (HDC)a3);
          break;
        default:
          return xxxDefWindowProc(a1, a2, a3, a4);
      }
      return 0LL;
    }
    v25 = *(_DWORD *)(a4 + 32);
    if ( (v25 & 0x40) == 0 )
    {
      if ( (v25 & 0x80u) != 0 )
      {
        if ( (gfade[6] & 0x20) != 0 )
          StopFade();
        else
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v22);
      }
      return xxxDefWindowProc(a1, a2, a3, a4);
    }
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    {
LABEL_42:
      v26 = *(_DWORD *)(v22 + 12);
LABEL_43:
      v27 = 2;
LABEL_44:
      SetTooltipTimer((struct tagTOOLTIPWND *)v22, v27, v26);
      return xxxDefWindowProc(a1, a2, a3, a4);
    }
    if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
    {
      if ( !(unsigned int)CreateTooltipBitmap(
                            (struct tagTOOLTIPWND *)v22,
                            *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL),
                            *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL)) )
        goto LABEL_54;
      FadeInternal = *(HWND *)(v22 + 16);
    }
    else
    {
      FadeInternal = (HWND)CreateFadeInternal(a1, 0LL, 0x87u, 0x21u, 0);
    }
    if ( FadeInternal )
    {
      v29 = *(__int64 **)v22;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v29, 0x317u, FadeInternal, (struct _LARGE_STRING *)0x1E, 0, 0, 0LL, 1u, 1);
      if ( (gfade[6] & 0x20) == 0 )
      {
        v27 = 3;
        v26 = 20;
        *(_DWORD *)(v22 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_44;
      }
      zzzStartFade();
      goto LABEL_42;
    }
LABEL_54:
    v26 = 0;
    goto LABEL_43;
  }
  return 0LL;
}
