/*
 * XREFs of ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEA_N3@Z @ 0x1800B0798
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002B0E0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800B0960 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800B10A8 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::GetRenderBounds(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, char *a5, char *a6)
{
  unsigned int v6; // esi
  char v7; // r13
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // r10
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  char v23; // bl
  int v25; // [rsp+30h] [rbp-30h] BYREF
  int v26; // [rsp+38h] [rbp-28h] BYREF
  int v27; // [rsp+3Ch] [rbp-24h]
  int v28; // [rsp+40h] [rbp-20h]
  int v29; // [rsp+44h] [rbp-1Ch]
  _BYTE v30[16]; // [rsp+48h] [rbp-18h] BYREF

  v6 = 0;
  *a4 = 0;
  v7 = 0;
  a4[1] = 0;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 965) )
    {
      a4[2] = *(_DWORD *)(a1 + 976) - *(_DWORD *)(a1 + 968);
      v13 = *(_DWORD *)(a1 + 980) - *(_DWORD *)(a1 + 972);
    }
    else
    {
      v11 = 0;
      v12 = *(_DWORD *)(a1 + 736) - *(_DWORD *)(a1 + 728);
      if ( v12 >= 0 )
        v11 = v12;
      v13 = 0;
      a4[2] = v11;
      if ( *(_DWORD *)(a1 + 740) - *(_DWORD *)(a1 + 732) >= 0 )
        v13 = *(_DWORD *)(a1 + 740) - *(_DWORD *)(a1 + 732);
    }
  }
  else
  {
    a4[2] = 0;
    v13 = 0;
  }
  a4[3] = v13;
  if ( a3 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a3 + 32LL))(a3, v30, 0LL);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x65Cu);
      return v6;
    }
    CMilRectLFromMilRectF(&v26, v30);
    v17 = v26;
    v18 = v27;
    v19 = v28;
    if ( *(_BYTE *)(a1 + 965) == (_BYTE)v16 )
    {
      v20 = v29;
    }
    else
    {
      v17 = v26 - *(_DWORD *)(a1 + 968);
      v19 = v28 - *(_DWORD *)(a1 + 968);
      v18 = v27 - *(_DWORD *)(a1 + 972);
      v20 = v29 - *(_DWORD *)(a1 + 972);
    }
    if ( v17 < *a4 || v19 > a4[2] || v18 < a4[1] || v20 > a4[3] )
      v7 = 1;
    if ( v17 > *a4 )
      *a4 = v17;
    if ( v18 > a4[1] )
      a4[1] = v18;
    v21 = a4[2];
    if ( v19 < v21 )
    {
      a4[2] = v19;
      v21 = v19;
    }
    v22 = a4[3];
    if ( v20 < v22 )
    {
      a4[3] = v20;
      v22 = v20;
      v21 = a4[2];
    }
    if ( v21 <= *a4 || v22 <= a4[1] )
    {
      *((_QWORD *)a4 + 1) = v16;
      *(_QWORD *)a4 = v16;
    }
    v23 = v16;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v25) && v25 == 1 )
      v23 = 1;
  }
  else
  {
    v23 = 1;
  }
  if ( a5 )
    *a5 = v23;
  if ( a6 )
    *a6 = v7;
  return v6;
}
