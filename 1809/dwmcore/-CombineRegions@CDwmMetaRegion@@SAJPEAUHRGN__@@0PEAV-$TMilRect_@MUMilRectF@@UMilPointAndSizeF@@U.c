/*
 * XREFs of ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801801C0
 * Callers:
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180162074 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x1800A5298 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801E8800 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::CombineRegions(HRGN hrgnSrc1, HRGN hrgnSrc2, float *a3)
{
  struct _RGNDATA *v4; // rdi
  signed int v7; // ebx
  HRGN RectRgn; // rsi
  signed int v9; // eax
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // eax
  unsigned int *v14; // r8
  signed int LastError; // eax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rcx
  DWORD nCount; // eax
  int v22; // edx
  struct _RGNDATA *v23; // rcx
  __int64 v24; // r9
  int v25; // r10d
  int v26; // r8d
  __int128 v28; // [rsp+30h] [rbp-28h]
  struct _RGNDATA *v29; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v29 = 0LL;
  v7 = 0;
  SetLastError(0);
  RectRgn = CreateRectRgn(0, 0, 0, 0);
  if ( RectRgn )
  {
    SetLastError(0);
    v13 = CombineRgn(RectRgn, hrgnSrc1, hrgnSrc2, 2);
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        v19 = HrgnToRgnData(RectRgn, &v29, v14);
        v7 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x3A5u);
          v4 = v29;
        }
        else
        {
          v4 = v29;
          if ( v29 )
          {
            nCount = v29->rdh.nCount;
            if ( nCount )
            {
              v22 = 0;
              v28 = *(_OWORD *)v29->Buffer;
              v23 = v29 + 1;
              v24 = nCount;
              do
              {
                v25 = v22;
                v26 = (v23->rdh.iType - *(_DWORD *)v23[-1].Buffer) * (v23->rdh.nCount - v23->rdh.dwSize);
                if ( v26 > v22 )
                  v28 = *(_OWORD *)v23[-1].Buffer;
                v23 = (struct _RGNDATA *)((char *)v23 + 16);
                v22 = v26;
                if ( v26 <= v25 )
                  v22 = v25;
                --v24;
              }
              while ( v24 );
              *a3 = (float)(int)v28;
              a3[1] = (float)SDWORD1(v28);
              a3[2] = (float)SDWORD2(v28);
              a3[3] = (float)SHIDWORD(v28);
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
        v7 = CheckGUIHandleQuota(v17, v16, v18);
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v7, 0x39Du);
    }
    DeleteObject(RectRgn);
    if ( v4 )
      WPF::ProcessHeapImpl::Free(v4);
  }
  else
  {
    v9 = GetLastError();
    v7 = v9;
    if ( v9 > 0 )
      v7 = (unsigned __int16)v9 | 0x80070000;
    if ( v7 >= 0 )
      v7 = CheckGUIHandleQuota(v11, v10, v12);
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v7, 0x398u);
  }
  return (unsigned int)v7;
}
