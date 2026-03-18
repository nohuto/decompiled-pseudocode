/*
 * XREFs of ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x18016F250
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18005164C (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180170E14 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180089DA0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDrawingContext::ExcludeLocalRenderingRectFromRegion(__int64 a1, __int64 a2, double a3, HRGN a4)
{
  int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // r10
  int v8; // edx
  unsigned int v9; // r8d
  __int128 *v10; // r9
  CMILMatrix *v11; // r11
  int v12; // r9d
  int v13; // r8d
  int v14; // edx
  unsigned __int32 v15; // ecx
  HRGN RectRgn; // rdi
  signed int v17; // eax
  __int64 v18; // rcx
  signed int LastError; // eax
  __int64 v20; // rcx
  float v22; // [rsp+30h] [rbp-30h]
  float v23; // [rsp+30h] [rbp-30h]
  float v24; // [rsp+30h] [rbp-30h]
  float v25; // [rsp+30h] [rbp-30h]
  float v26; // [rsp+38h] [rbp-28h] BYREF
  float v27; // [rsp+3Ch] [rbp-24h]
  float v28; // [rsp+40h] [rbp-20h]
  float v29; // [rsp+44h] [rbp-1Ch]
  __int128 v30; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 6348) )
  {
    if ( g_DisplayManager )
    {
      v6 = 0LL;
      if ( *((_DWORD *)g_DisplayManager + 18) )
      {
        v7 = *((_QWORD *)g_DisplayManager + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v7 + 8 * v6)) )
        {
          v6 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v6 >= v9 )
            return (unsigned int)v4;
        }
        v30 = *v10;
        CMILMatrix::Transform2DBoundsHelper<0>(v11, (__int64)&v30, &v26);
        SetLastError(0);
        if ( (LODWORD(v29) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v29 - v29;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v12 = (int)v29 - LODWORD(a3);
        }
        else
        {
          v22 = v29 + 6291456.25;
          v12 = (int)(LODWORD(v22) << 10) >> 11;
        }
        if ( (LODWORD(v28) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v28 - v28;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v13 = (int)v28 - LODWORD(a3);
        }
        else
        {
          v23 = v28 + 6291456.25;
          v13 = (int)(LODWORD(v23) << 10) >> 11;
        }
        if ( (LODWORD(v27) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v27 - v27;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v14 = (int)v27 - LODWORD(a3);
        }
        else
        {
          v24 = v27 + 6291456.25;
          v14 = (int)(LODWORD(v24) << 10) >> 11;
        }
        if ( (LODWORD(v26) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v26 - v26;
          v15 = (int)v26 - _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
        }
        else
        {
          v25 = v26 + 6291456.25;
          v15 = (int)(LODWORD(v25) << 10) >> 11;
        }
        RectRgn = CreateRectRgn(v15, v14, v13, v12);
        if ( RectRgn )
        {
          SetLastError(0);
          if ( !CombineRgn(a4, a4, RectRgn, 4) )
          {
            LastError = GetLastError();
            v4 = LastError;
            if ( LastError > 0 )
              v4 = (unsigned __int16)LastError | 0x80070000;
            if ( v4 >= 0 )
              v4 = -2003304445;
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v4, 0x1B3Au, 0LL);
          }
          DeleteObject(RectRgn);
        }
        else
        {
          v17 = GetLastError();
          v4 = v17;
          if ( v17 > 0 )
            v4 = (unsigned __int16)v17 | 0x80070000;
          if ( v4 >= 0 )
            v4 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v4, 0x1B35u, 0LL);
        }
      }
    }
  }
  return (unsigned int)v4;
}
