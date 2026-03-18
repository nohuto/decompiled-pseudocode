/*
 * XREFs of ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180181EC0
 * Callers:
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016C8C4 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18003D270 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::CombineRegions(HRGN hrgnSrc1, HRGN hrgnSrc2, float *a3)
{
  struct _RGNDATA *v4; // rdi
  int v7; // ebx
  HRGN RectRgn; // rsi
  signed int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int *v12; // r8
  signed int LastError; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  DWORD nCount; // ecx
  int v18; // r8d
  struct _RGNDATA *v19; // rdx
  __int64 v20; // r9
  int v21; // r10d
  int v22; // ecx
  __int128 v24; // [rsp+30h] [rbp-28h]
  struct _RGNDATA *v25; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v25 = 0LL;
  v7 = 0;
  SetLastError(0);
  RectRgn = CreateRectRgn(0, 0, 0, 0);
  if ( RectRgn )
  {
    SetLastError(0);
    v11 = CombineRgn(RectRgn, hrgnSrc1, hrgnSrc2, 2);
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        v15 = HrgnToRgnData(RectRgn, &v25, v12);
        v7 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x3A5u, 0LL);
          v4 = v25;
        }
        else
        {
          v4 = v25;
          if ( v25 )
          {
            nCount = v25->rdh.nCount;
            if ( nCount )
            {
              v18 = 0;
              v24 = *(_OWORD *)v25->Buffer;
              v19 = v25 + 1;
              v20 = nCount;
              do
              {
                v21 = v18;
                v22 = (v19->rdh.iType - *(_DWORD *)v19[-1].Buffer) * (v19->rdh.nCount - v19->rdh.dwSize);
                if ( v22 > v18 )
                  v24 = *(_OWORD *)v19[-1].Buffer;
                v19 = (struct _RGNDATA *)((char *)v19 + 16);
                v18 = v22;
                if ( v22 <= v21 )
                  v18 = v21;
                --v20;
              }
              while ( v20 );
              *a3 = (float)(int)v24;
              a3[1] = (float)SDWORD1(v24);
              a3[2] = (float)SDWORD2(v24);
              a3[3] = (float)SHIDWORD(v24);
            }
          }
        }
      }
    }
    else
    {
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      if ( v7 >= 0 )
        v7 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v7, 0x39Du, 0LL);
    }
    DeleteObject(RectRgn);
    if ( v4 )
      operator delete(v4);
  }
  else
  {
    v9 = GetLastError();
    v7 = v9;
    if ( v9 > 0 )
      v7 = (unsigned __int16)v9 | 0x80070000;
    if ( v7 >= 0 )
      v7 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, 0x398u, 0LL);
  }
  return (unsigned int)v7;
}
