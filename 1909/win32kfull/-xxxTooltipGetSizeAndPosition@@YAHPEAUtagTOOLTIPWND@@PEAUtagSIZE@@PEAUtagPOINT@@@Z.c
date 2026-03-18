/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023F6F0
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023F5C4 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     _MonitorFromPoint @ 0x1C00149A0 (_MonitorFromPoint.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00E9A1C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0158514 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C023EFC0 (-GetCursorHeight@@YAHXZ.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // r14
  HDC TooltipDC; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  const WCHAR *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int16 *v22; // rdx
  __int64 v23; // r8
  __m128i *MonitorRect; // rax
  LONG cy; // r8d
  LONG y; // edx
  unsigned __int64 v27; // xmm0_8
  LONG cx; // edx
  LONG x; // ecx
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+38h] [rbp-40h]
  __int64 v32; // [rsp+40h] [rbp-38h]
  __m128i v33; // [rsp+48h] [rbp-30h] BYREF

  v6 = *(_QWORD *)(gpsi + 4960LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0, 0);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15);
    v30 = *(_QWORD *)(v16 + 408);
    *(_QWORD *)(v16 + 408) = &v30;
    v31 = v8;
    HMLockObject(v8);
    v17 = (const WCHAR *)*((_QWORD *)a1 + 6);
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    xxxClientGetTextExtentPointW(TooltipDC, v17, v18, a2);
    if ( !ThreadUnlock1(v20, v19, v21) )
    {
      _ReleaseDC(TooltipDC);
      return 0LL;
    }
  }
  else
  {
    v22 = (unsigned __int16 *)*((_QWORD *)a1 + 6);
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    GreGetTextExtentW(TooltipDC, v22, v23, a2, 1);
  }
  _ReleaseDC(TooltipDC);
  a2->cx += 6;
  a2->cy += 4;
  MonitorRect = (__m128i *)GetMonitorRect(&v33, v8);
  cy = a2->cy;
  y = a3->y;
  v33 = *MonitorRect;
  v27 = _mm_srli_si128(v33, 8).m128i_u64[0];
  if ( y + cy < SHIDWORD(v27) )
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
  if ( a3->x + a2->cx >= (int)v27 )
  {
    x = v27 - cx;
    a3->x = v27 - cx;
  }
  if ( x < v33.m128i_i32[0] )
    a3->x = v33.m128i_i32[0];
  return 1LL;
}
