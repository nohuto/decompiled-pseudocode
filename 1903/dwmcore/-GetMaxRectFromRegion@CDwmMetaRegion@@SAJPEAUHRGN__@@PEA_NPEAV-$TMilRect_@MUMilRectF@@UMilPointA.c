/*
 * XREFs of ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018227C
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18005164C (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18003D270 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::GetMaxRectFromRegion(HRGN a1, _BYTE *a2, __int64 a3)
{
  signed int v5; // eax
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
  void *lpMem; // [rsp+58h] [rbp+10h] BYREF

  lpMem = 0LL;
  *a2 = 0;
  v5 = HrgnToRgnData(a1, (struct _RGNDATA **)&lpMem, (unsigned int *)a3);
  v7 = lpMem;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x292u, 0LL);
  }
  else
  {
    if ( !lpMem )
      return v8;
    v9 = *((_DWORD *)lpMem + 2);
    if ( v9 )
    {
      v10 = 0;
      v16 = *((_OWORD *)lpMem + 2);
      v11 = (char *)lpMem + 36;
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
    operator delete(v7);
  return v8;
}
