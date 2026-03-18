/*
 * XREFs of DrawTextExWorker @ 0x1C024239C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015DFE8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GreGetTextAlign @ 0x1C00A70F4 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C00A72C0 (GreSetTextAlign.c)
 *     GreGetRandomRgn @ 0x1C010DA60 (GreGetRandomRgn.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     GreExtSelectClipRgnInternal @ 0x1C0160E74 (GreExtSelectClipRgnInternal.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C0241A70 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024203C (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 */

__int64 __fastcall DrawTextExWorker(
        HDC a1,
        unsigned __int16 *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5,
        struct tagDRAWTEXTPARAMS *a6)
{
  __int64 v7; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  int TextAlign; // eax
  HRGN RectRgn; // rax
  unsigned int top; // ebx
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // edi
  LONG v22; // ecx
  int v23; // [rsp+40h] [rbp-B8h]
  _DWORD v24[20]; // [rsp+50h] [rbp-A8h] BYREF

  LODWORD(v7) = a3;
  memset(v24, 0, 0x48uLL);
  v13 = 0LL;
  v23 = 0;
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
  if ( !(unsigned int)DT_InitDrawTextInfo(a1, a4, a5, (struct DRAWTEXTDATA *)v24, a6) )
    return 0LL;
  v24[16] = -1;
  if ( (a5 & 0x20000) != 0 )
  {
    TextAlign = GreGetTextAlign(a1);
    v23 = GreSetTextAlign(a1, TextAlign | 0x100u);
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
      GreIntersectClipRect(a1);
    }
  }
  top = a4->top;
  v18 = a5 & 0xC;
  if ( v18 == 4 )
  {
    top += (int)(a4->bottom - top - v24[7]) / 2;
  }
  else if ( v18 == 8 )
  {
    top = a4->bottom - v24[7];
  }
  v19 = AddEllipsisAndDrawLine(a1, top, a2, v7, a5, (struct DRAWTEXTDATA *)v24);
  v20 = v24[7] + top;
  v21 = (_DWORD)a2 + 2 * v19;
  if ( v13 )
  {
    if ( v13 == -1 )
    {
      GreExtSelectClipRgnInternal(a1, 0LL, 5, 1);
    }
    else
    {
      GreExtSelectClipRgnInternal(a1, (HRGN)v13, 5, 1);
      GreDeleteObject(v13);
    }
  }
  if ( (a5 & 0x20000) != 0 )
    GreSetTextAlign(a1, v23);
  if ( a6 )
    *((_DWORD *)a6 + 4) = (unsigned int)(v21 - (_DWORD)a2) >> 1;
  v22 = a4->top;
  if ( v20 == v22 )
    return 1LL;
  return v20 - v22;
}
