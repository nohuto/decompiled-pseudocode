/*
 * XREFs of ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018056C
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800ADF38 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x1800A5298 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::GetMaxRectFromRegion(HRGN a1, _BYTE *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  void *v7; // rbx
  unsigned int v8; // edi
  unsigned int v9; // ecx
  int v10; // r8d
  _DWORD *v11; // rdx
  __int64 v12; // r9
  int v13; // r10d
  int v14; // ecx
  __int128 v16; // [rsp+30h] [rbp-18h]
  void *v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0LL;
  *a2 = 0;
  v5 = HrgnToRgnData(a1, (struct _RGNDATA **)&v17, (unsigned int *)a3);
  v7 = v17;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x292u);
  }
  else
  {
    if ( !v17 )
      return v8;
    v9 = *((_DWORD *)v17 + 2);
    if ( v9 )
    {
      v10 = 0;
      v16 = *((_OWORD *)v17 + 2);
      v11 = (char *)v17 + 36;
      v12 = v9;
      do
      {
        v13 = v10;
        v14 = (v11[1] - *(v11 - 1)) * (v11[2] - *v11);
        if ( v14 > v10 )
          v16 = *(_OWORD *)(v11 - 1);
        v11 += 4;
        v10 = v14;
        if ( v14 <= v13 )
          v10 = v13;
        --v12;
      }
      while ( v12 );
      *a2 = 1;
      *(float *)a3 = (float)(int)v16;
      *(float *)(a3 + 4) = (float)SDWORD1(v16);
      *(float *)(a3 + 8) = (float)SDWORD2(v16);
      *(float *)(a3 + 12) = (float)SHIDWORD(v16);
    }
  }
  if ( v7 )
    WPF::ProcessHeapImpl::Free(v7);
  return v8;
}
