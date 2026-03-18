/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023FD10
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023FBE4 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetMonitorRect @ 0x1C0090E1C (GetMonitorRect.c)
 *     _MonitorFromPoint @ 0x1C0091B40 (_MonitorFromPoint.c)
 *     GreGetTextExtentW @ 0x1C011DC04 (GreGetTextExtentW.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C012FA60 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     CALL_LPK @ 0x1C0157754 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0157AB4 (xxxClientGetTextExtentPointW.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C023F5E0 (-GetCursorHeight@@YAHXZ.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  unsigned __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // r14
  HDC TooltipDC; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  const WCHAR *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int16 *v24; // rdx
  __int64 v25; // r8
  __m128i *MonitorRect; // rax
  LONG cy; // r8d
  LONG y; // edx
  unsigned __int64 v29; // xmm0_8
  LONG cx; // edx
  LONG x; // ecx
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+40h] [rbp-38h]
  __m128i v35; // [rsp+48h] [rbp-30h] BYREF

  v6 = *(_QWORD *)(gpsi + 4960LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0, 0);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
    v32 = *(_QWORD *)(v18 + 408);
    *(_QWORD *)(v18 + 408) = &v32;
    v33 = v8;
    HMLockObject(v8);
    v19 = (const WCHAR *)*((_QWORD *)a1 + 6);
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    xxxClientGetTextExtentPointW(TooltipDC, v19, v20, a2);
    if ( !ThreadUnlock1(v22, v21, v23) )
    {
      _ReleaseDC(TooltipDC);
      return 0LL;
    }
  }
  else
  {
    v24 = (unsigned __int16 *)*((_QWORD *)a1 + 6);
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    GreGetTextExtentW(TooltipDC, v24, v25, a2, 1);
  }
  _ReleaseDC(TooltipDC);
  a2->cx += 6;
  a2->cy += 4;
  MonitorRect = (__m128i *)GetMonitorRect(&v35, v8);
  cy = a2->cy;
  y = a3->y;
  v35 = *MonitorRect;
  v29 = _mm_srli_si128(v35, 8).m128i_u64[0];
  if ( y + cy < SHIDWORD(v29) )
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
  if ( a3->x + a2->cx >= (int)v29 )
  {
    x = v29 - cx;
    a3->x = v29 - cx;
  }
  if ( x < v35.m128i_i32[0] )
    a3->x = v35.m128i_i32[0];
  return 1LL;
}
