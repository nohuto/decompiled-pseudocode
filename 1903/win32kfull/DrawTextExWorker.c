/*
 * XREFs of DrawTextExWorker @ 0x1C025B19C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3A20 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GreExtSelectClipRgn @ 0x1C008E358 (GreExtSelectClipRgn.c)
 *     GreGetRandomRgn @ 0x1C008E4F0 (GreGetRandomRgn.c)
 *     GreSetTextAlign @ 0x1C00F9CEC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FBDFC (GreGetTextAlign.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C025A850 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025AE34 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 */

__int64 __fastcall DrawTextExWorker(
        HDC a1,
        unsigned __int16 *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5,
        struct tagDRAWTEXTPARAMS *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  int TextAlign; // eax
  HRGN RectRgn; // rax
  __m128i v17; // xmm0
  unsigned int top; // ebx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // esi
  LONG v23; // ecx
  int v24; // [rsp+40h] [rbp-B8h]
  _DWORD v25[20]; // [rsp+50h] [rbp-A8h] BYREF

  LODWORD(v7) = a3;
  memset(v25, 0, 0x48uLL);
  v13 = 0LL;
  v24 = 0;
  if ( !a2 )
    return 0LL;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == -1 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( a2[v7] );
    }
  }
  else if ( *a2 )
  {
    return 1LL;
  }
  if ( a6 && *(_DWORD *)a6 != 20 )
  {
    UserSetLastError(87LL, v10, v11, v12);
    return 0LL;
  }
  if ( !(unsigned int)DT_InitDrawTextInfo(a1, a4, a5, (struct DRAWTEXTDATA *)v25, a6) )
    return 0LL;
  v25[16] = -1;
  if ( (a5 & 0x20000) != 0 )
  {
    TextAlign = GreGetTextAlign(a1);
    v24 = GreSetTextAlign(a1, TextAlign | 0x100u);
  }
  if ( (a5 & 0x100) == 0 )
  {
    RectRgn = (HRGN)GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    v13 = (__int64)RectRgn;
    if ( RectRgn )
    {
      if ( (unsigned int)GreGetRandomRgn(a1, RectRgn, 1) != 1 )
      {
        GreDeleteObject(v13);
        v13 = -1LL;
      }
      v17 = _mm_srli_si128(*(__m128i *)a4, 8);
      GreIntersectClipRect(
        a1,
        *(_QWORD *)&a4->left,
        HIDWORD(*(_QWORD *)&a4->left),
        (unsigned int)_mm_cvtsi128_si32(v17),
        v17.m128i_i32[1]);
    }
  }
  top = a4->top;
  v19 = a5 & 0xC;
  if ( v19 == 4 )
  {
    top += (int)(a4->bottom - top - v25[7]) / 2;
  }
  else if ( v19 == 8 )
  {
    top = a4->bottom - v25[7];
  }
  v20 = AddEllipsisAndDrawLine(a1, top, a2, (unsigned int)v7, a5, (struct DRAWTEXTDATA *)v25);
  v21 = v25[7] + top;
  v22 = (_DWORD)a2 + 2 * v20;
  if ( v13 )
  {
    if ( v13 == -1 )
    {
      GreExtSelectClipRgn(a1, 0LL, 5);
    }
    else
    {
      GreExtSelectClipRgn(a1, (HRGN)v13, 5);
      GreDeleteObject(v13);
    }
  }
  if ( (a5 & 0x20000) != 0 )
    GreSetTextAlign(a1, v24);
  if ( a6 )
    *((_DWORD *)a6 + 4) = (unsigned int)(v22 - (_DWORD)a2) >> 1;
  v23 = a4->top;
  if ( v21 == v23 )
    return 1LL;
  return v21 - v23;
}
