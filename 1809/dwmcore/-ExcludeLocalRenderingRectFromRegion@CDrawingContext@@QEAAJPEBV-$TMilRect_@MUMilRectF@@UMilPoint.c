/*
 * XREFs of ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x180164DF8
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800ADF38 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180166A58 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800A8E54 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801E8800 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDrawingContext::ExcludeLocalRenderingRectFromRegion(__int64 a1, __int64 a2, double a3, HRGN a4)
{
  signed int v4; // ebx
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
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r8d
  signed int LastError; // eax
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  float v26; // [rsp+30h] [rbp-30h]
  float v27; // [rsp+30h] [rbp-30h]
  float v28; // [rsp+30h] [rbp-30h]
  float v29; // [rsp+30h] [rbp-30h]
  float v30; // [rsp+38h] [rbp-28h] BYREF
  float v31; // [rsp+3Ch] [rbp-24h]
  float v32; // [rsp+40h] [rbp-20h]
  float v33; // [rsp+44h] [rbp-1Ch]
  __int128 v34; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 6348) )
  {
    if ( qword_180308258 )
    {
      v6 = 0LL;
      if ( *((_DWORD *)qword_180308258 + 18) )
      {
        v7 = *((_QWORD *)qword_180308258 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v7 + 8 * v6)) )
        {
          v6 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v6 >= v9 )
            return (unsigned int)v4;
        }
        v34 = *v10;
        CMILMatrix::Transform2DBoundsHelper<0>(v11, (__int64)&v34, &v30);
        SetLastError(0);
        if ( (LODWORD(v33) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v33 - v33;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v12 = (int)v33 - LODWORD(a3);
        }
        else
        {
          v26 = v33 + 6291456.25;
          v12 = (int)(LODWORD(v26) << 10) >> 11;
        }
        if ( (LODWORD(v32) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v32 - v32;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v13 = (int)v32 - LODWORD(a3);
        }
        else
        {
          v27 = v32 + 6291456.25;
          v13 = (int)(LODWORD(v27) << 10) >> 11;
        }
        if ( (LODWORD(v31) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v31 - v31;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v14 = (int)v31 - LODWORD(a3);
        }
        else
        {
          v28 = v31 + 6291456.25;
          v14 = (int)(LODWORD(v28) << 10) >> 11;
        }
        if ( (LODWORD(v30) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v30 - v30;
          v15 = (int)v30 - _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
        }
        else
        {
          v29 = v30 + 6291456.25;
          v15 = (int)(LODWORD(v29) << 10) >> 11;
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
              v4 = CheckGUIHandleQuota(v23, v22, v24);
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v4, 0x1D03u);
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
            v4 = CheckGUIHandleQuota(v19, v18, v20);
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v4, 0x1CFEu);
        }
      }
    }
  }
  return (unsigned int)v4;
}
