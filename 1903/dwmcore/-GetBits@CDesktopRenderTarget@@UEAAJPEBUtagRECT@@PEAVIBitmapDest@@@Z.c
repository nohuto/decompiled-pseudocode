/*
 * XREFs of ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800B11A0
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@WGI@EAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800ED120 (-GetBits@CDesktopRenderTarget@@WGI@EAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B1158 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800B1370 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetBits(
        CDesktopRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r10
  char v8; // r11
  __int64 v9; // rcx
  char IsEquivalentTo; // al
  char v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rcx
  signed int Bits; // eax
  __int64 v15; // rcx

  v3 = 0;
  v4 = 0LL;
  v8 = 1;
  if ( *((_DWORD *)this + 34) )
  {
    while ( v8 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * v4) + 168LL);
      if ( *(_QWORD *)(v9 + 152) == v9 )
      {
        IsEquivalentTo = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                           (_DWORD *)(v9 + 104),
                           (_DWORD *)(v9 + 88));
        v8 = IsEquivalentTo != 0 ? v11 : 0;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 34) )
      {
        if ( v8 )
          goto LABEL_7;
        return (unsigned int)-2147024809;
      }
    }
    return (unsigned int)-2147024809;
  }
  else
  {
LABEL_7:
    v12 = 0LL;
    if ( *((_DWORD *)this + 34) )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v12);
        if ( *(_QWORD *)(*(_QWORD *)(v13 + 168) + 152LL) == *(_QWORD *)(v13 + 168) )
        {
          Bits = CHwndRenderTarget::GetBits((CHwndRenderTarget *)(v13 + 64), a2, a3);
          v3 = Bits;
          if ( Bits < 0 )
            break;
        }
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= *((_DWORD *)this + 34) )
          return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, Bits, 0x7D6u, 0LL);
    }
  }
  return v3;
}
