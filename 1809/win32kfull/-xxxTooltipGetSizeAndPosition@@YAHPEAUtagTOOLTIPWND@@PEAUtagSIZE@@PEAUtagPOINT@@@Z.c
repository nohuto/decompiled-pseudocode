/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01513D0
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C01512FC (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _MonitorFromPoint @ 0x1C007AE20 (_MonitorFromPoint.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     GreGetTextExtentW @ 0x1C0111340 (GreGetTextExtentW.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C0131608 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0151568 (-GetCursorHeight@@YAHXZ.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0151B08 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0151E74 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  unsigned __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // r14
  HDC TooltipDC; // rbp
  __int64 v10; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __m128i *MonitorRect; // rax
  LONG cy; // r8d
  LONG y; // edx
  unsigned __int64 v20; // xmm0_8
  LONG cx; // edx
  LONG x; // ecx
  unsigned __int16 *v24; // rdx
  __int64 v25; // r8
  __m128i v26; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v27[3]; // [rsp+40h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(gpsi + 4960LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0LL, 0);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
    v27[0] = *(_QWORD *)(v13 + 416);
    *(_QWORD *)(v13 + 416) = v27;
    v27[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(*((_QWORD *)a1 + 6) + 2 * v14) );
    xxxClientGetTextExtentPointW(TooltipDC);
    if ( ThreadUnlock1(v16, v15) )
      goto LABEL_6;
    _ReleaseDC(TooltipDC);
    return 0LL;
  }
  v24 = (unsigned __int16 *)*((_QWORD *)a1 + 6);
  v25 = -1LL;
  do
    ++v25;
  while ( v24[v25] );
  GreGetTextExtentW(TooltipDC, v24, v25, a2, 1);
LABEL_6:
  _ReleaseDC(TooltipDC);
  a2->cx += 6;
  a2->cy += 4;
  MonitorRect = GetMonitorRect(&v26, v8);
  cy = a2->cy;
  y = a3->y;
  v26 = *MonitorRect;
  v20 = _mm_srli_si128(v26, 8).m128i_u64[0];
  if ( y + cy >= SHIDWORD(v20) )
  {
    *((_DWORD *)a1 + 8) &= ~1u;
    a3->y = y - cy;
  }
  else
  {
    a3->y += GetCursorHeight();
    *((_DWORD *)a1 + 8) |= 1u;
  }
  cx = a2->cx;
  x = a3->x;
  if ( a3->x + a2->cx >= (int)v20 )
  {
    x = v20 - cx;
    a3->x = v20 - cx;
  }
  if ( x < v26.m128i_i32[0] )
    a3->x = v26.m128i_i32[0];
  return 1LL;
}
