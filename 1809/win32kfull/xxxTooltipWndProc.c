/*
 * XREFs of xxxTooltipWndProc @ 0x1C00B84F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00DE06C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxEndPaint @ 0x1C00FD91C (xxxEndPaint.c)
 *     InitTooltipDelay @ 0x1C01264F0 (InitTooltipDelay.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C013159C (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0134E98 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0151258 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C01516EC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     zzzStartFade @ 0x1C0152A68 (zzzStartFade.c)
 *     StopFade @ 0x1C0152D60 (StopFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C0155FC8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C015D924 (xxxValidateClassAndSize.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C022782C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 */

ULONG_PTR __fastcall xxxTooltipWndProc(struct tagWND *a1, unsigned int a2, HDC a3, unsigned __int64 a4)
{
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct tagTOOLTIPWND *v11; // rcx
  int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // edx
  HDC FadeInternal; // rax
  __int64 *v16; // rcx
  ULONG_PTR v17[2]; // [rsp+50h] [rbp-98h] BYREF
  HDC v18[10]; // [rsp+60h] [rbp-88h] BYREF

  if ( !(unsigned int)xxxValidateClassAndSize(a1, 694, 129, (__int64)v17) )
    return v17[0];
  v9 = *((_QWORD *)a1 + 33);
  *(_QWORD *)v9 = a1;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 && a2 != 130 )
    return xxxDefWindowProc(a1, a2, (unsigned __int64)a3, a4);
  if ( a2 == 15 )
  {
    xxxBeginPaint(a1, (__int64)v18);
    xxxTooltipRender((struct tagTOOLTIPWND *)v9, v18[0]);
    xxxEndPaint(a1);
    return 0LL;
  }
  if ( a2 != 20 )
  {
    if ( a2 != 71 )
    {
      switch ( a2 )
      {
        case 0x81u:
          InitTooltipDelay(v9);
          InitTooltipAnimation(v11);
          break;
        case 0x82u:
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v9);
          v10 = *(_QWORD *)(v9 + 16);
          if ( v10 )
            GreDeleteDC(v10);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 48LL) &= 0xFFFFFCFF;
          break;
        case 0x118u:
          xxxTooltipHandleTimer((struct tagTOOLTIPWND *)v9, (unsigned int)a3);
          return 0LL;
        case 0x318u:
          xxxTooltipRender((struct tagTOOLTIPWND *)v9, a3);
          return 0LL;
      }
      return xxxDefWindowProc(a1, a2, (unsigned __int64)a3, a4);
    }
    v12 = *(_DWORD *)(a4 + 32);
    if ( (v12 & 0x40) == 0 )
    {
      if ( (v12 & 0x80u) != 0 )
      {
        if ( (gfade[12] & 0x20) != 0 )
          StopFade();
        else
          DestroyTooltipBitmap((struct tagTOOLTIPWND *)v9);
      }
      return xxxDefWindowProc(a1, a2, (unsigned __int64)a3, a4);
    }
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    {
LABEL_20:
      v13 = *(_DWORD *)(v9 + 12);
LABEL_21:
      v14 = 2;
LABEL_22:
      SetTooltipTimer((struct tagTOOLTIPWND *)v9, v14, v13);
      return xxxDefWindowProc(a1, a2, (unsigned __int64)a3, a4);
    }
    if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
    {
      if ( !(unsigned int)CreateTooltipBitmap(
                            (struct tagTOOLTIPWND *)v9,
                            *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL),
                            *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL)) )
        goto LABEL_32;
      FadeInternal = *(HDC *)(v9 + 16);
    }
    else
    {
      FadeInternal = CreateFadeInternal(a1, 0LL, 0x87u, 0x21u, 0);
    }
    if ( FadeInternal )
    {
      v16 = *(__int64 **)v9;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v16, 0x317u, (unsigned __int64)FadeInternal, 30LL, 0, 0, 0LL, 1, 1);
      if ( (gfade[12] & 0x20) == 0 )
      {
        v14 = 3;
        v13 = 20;
        *(_DWORD *)(v9 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_22;
      }
      zzzStartFade();
      goto LABEL_20;
    }
LABEL_32:
    v13 = 0;
    goto LABEL_21;
  }
  return 0LL;
}
