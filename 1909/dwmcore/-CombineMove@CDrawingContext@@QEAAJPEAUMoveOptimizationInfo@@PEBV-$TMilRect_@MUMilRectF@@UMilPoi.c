/*
 * XREFs of ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016B1E0
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006A664 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18016F734 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801807C0 (-CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 */

__int64 __fastcall CDrawingContext::CombineMove(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 v4; // rdi
  bool v5; // zf
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float *v23; // rcx
  float v24; // xmm0_4
  float v25; // xmm1_4
  signed int v26; // eax
  CMILCOMBase *v28; // [rsp+30h] [rbp-40h] BYREF
  __int128 v29; // [rsp+38h] [rbp-38h]
  __int128 v30; // [rsp+48h] [rbp-28h]

  v3 = *a3;
  v28 = (CMILCOMBase *)a2;
  v4 = a1;
  v5 = *(_QWORD *)(a2 + 48) == 0LL;
  v29 = v3;
  if ( v5 || (v6 = *(_DWORD *)(a1 + 6168), v7 = 0LL, !v6) )
  {
LABEL_8:
    v10 = *(_DWORD *)(v4 + 6168);
    v11 = v10 + 1;
    if ( v10 + 1 >= v10 )
    {
      if ( v11 <= *(_DWORD *)(v4 + 6164) )
      {
        v12 = 0;
        *(_QWORD *)(*(_QWORD *)(v4 + 6144) + 8LL * *(unsigned int *)(v4 + 6168)) = v28;
        *(_DWORD *)(v4 + 6168) = v11;
LABEL_28:
        CMILCOMBase::InternalAddRef(v28);
        return v12;
      }
      v26 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 6144, 8, 1, &v28);
      v12 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v26, 0xC3u, 0LL);
    }
    else
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( (v12 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1AADu, 0LL);
      return v12;
    }
    goto LABEL_28;
  }
  v8 = *(_QWORD *)(a1 + 6144);
  while ( 1 )
  {
    a1 = *(_QWORD *)(v8 + 8 * v7);
    v9 = (unsigned int)v7;
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( *(float *)(a1 + 24) == *(float *)(a2 + 24) && *(float *)(a1 + 28) == *(float *)(a2 + 28) )
        break;
    }
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= v6 )
      goto LABEL_8;
  }
  v14 = CDwmMetaRegion::CombineRegions(*(HRGN *)(a1 + 48), *(HRGN *)(a2 + 48));
  v12 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1A9Au, 0LL);
  }
  else
  {
    LODWORD(v16) = *((_DWORD *)v28 + 6) ^ _xmm;
    LODWORD(v17) = *((_DWORD *)v28 + 7) ^ _xmm;
    v18 = *(float *)&v29 + v16;
    v19 = *((float *)&v29 + 1) + v17;
    v20 = *((float *)&v29 + 3);
    v21 = *((float *)&v29 + 2) + v16;
    *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 6144) + 8 * v9) + 32LL) = v30;
    v22 = v20 + v17;
    v23 = *(float **)(*(_QWORD *)(v4 + 6144) + 8 * v9);
    if ( v18 > v23[8] )
      v23[8] = v18;
    if ( v19 > v23[9] )
      v23[9] = v19;
    v24 = v23[10];
    if ( v24 > v21 )
    {
      v23[10] = v21;
      v24 = v21;
    }
    v25 = v23[11];
    if ( v25 > v22 )
    {
      v23[11] = v22;
      v25 = v22;
      v24 = v23[10];
    }
    if ( v24 <= v23[8] || v25 <= v23[9] )
    {
      v23[11] = 0.0;
      v23[10] = 0.0;
      v23[9] = 0.0;
      v23[8] = 0.0;
    }
  }
  return v12;
}
