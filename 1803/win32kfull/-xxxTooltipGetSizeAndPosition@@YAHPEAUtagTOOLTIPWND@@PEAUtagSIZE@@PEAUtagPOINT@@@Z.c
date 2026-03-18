/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01FF05C
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C01FEF44 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C01048F8 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     CALL_LPK @ 0x1C0132C50 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0132F54 (xxxClientGetTextExtentPointW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C01FE9B0 (-GetCursorHeight@@YAHXZ.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // r14
  HDC TooltipDC; // rbp
  __int64 v11; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  const WCHAR *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int16 *v20; // rdx
  __int64 v21; // r8
  __m128i *MonitorRect; // rax
  LONG cy; // r8d
  LONG y; // edx
  unsigned __int64 v25; // xmm0_8
  LONG cx; // edx
  LONG x; // ecx
  __m128i v28; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v29[3]; // [rsp+40h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(gpsi + 4960LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0LL, 0LL, gpsi);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
    v29[0] = *(_QWORD *)(v14 + 408);
    *(_QWORD *)(v14 + 408) = v29;
    v29[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v15 = (const WCHAR *)*((_QWORD *)a1 + 6);
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    xxxClientGetTextExtentPointW(TooltipDC, v15, v16, a2);
    if ( !ThreadUnlock1(v18, v17, v19) )
    {
      _ReleaseDC(TooltipDC);
      return 0LL;
    }
  }
  else
  {
    v20 = (unsigned __int16 *)*((_QWORD *)a1 + 6);
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    GreGetTextExtentW(TooltipDC, v20, v21, a2, 1);
  }
  _ReleaseDC(TooltipDC);
  a2->cx += 6;
  a2->cy += 4;
  MonitorRect = (__m128i *)GetMonitorRect(&v28, v8);
  cy = a2->cy;
  y = a3->y;
  v28 = *MonitorRect;
  v25 = _mm_srli_si128(v28, 8).m128i_u64[0];
  if ( y + cy < SHIDWORD(v25) )
  {
    a3->y += GetCursorHeight();
    *((_DWORD *)a1 + 8) |= 1u;
  }
  else
  {
    *((_DWORD *)a1 + 8) &= ~1u;
    a3->y = y - cy;
  }
  cx = a2->cx;
  x = a3->x;
  if ( a3->x + a2->cx >= (int)v25 )
  {
    x = v25 - cx;
    a3->x = v25 - cx;
  }
  if ( x < v28.m128i_i32[0] )
    a3->x = v28.m128i_i32[0];
  return 1LL;
}
