/*
 * XREFs of ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEA_N3@Z @ 0x180069770
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18008F970 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2A90 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800487D8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800698D0 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::GetRenderBounds(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, bool *a5, char *a6)
{
  unsigned int v6; // esi
  char v7; // r13
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  int v19; // ecx
  bool v20; // bl
  int v22; // edx
  int v23; // [rsp+30h] [rbp-30h] BYREF
  int v24; // [rsp+38h] [rbp-28h] BYREF
  int v25; // [rsp+3Ch] [rbp-24h]
  int v26; // [rsp+40h] [rbp-20h]
  int v27; // [rsp+44h] [rbp-1Ch]
  _BYTE v28[16]; // [rsp+48h] [rbp-18h] BYREF

  v6 = 0;
  *a4 = 0;
  v7 = 0;
  a4[1] = 0;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 947) )
    {
      a4[2] = *(_DWORD *)(a1 + 956) - *(_DWORD *)(a1 + 948);
      v13 = *(_DWORD *)(a1 + 960) - *(_DWORD *)(a1 + 952);
    }
    else
    {
      v11 = 0;
      v12 = *(_DWORD *)(a1 + 720) - *(_DWORD *)(a1 + 712);
      if ( v12 >= 0 )
        v11 = v12;
      v13 = 0;
      a4[2] = v11;
      if ( *(_DWORD *)(a1 + 724) - *(_DWORD *)(a1 + 716) >= 0 )
        v13 = *(_DWORD *)(a1 + 724) - *(_DWORD *)(a1 + 716);
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
    v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a3 + 32LL))(a3, v28, 0LL);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x616u, 0LL);
      return v6;
    }
    CMilRectLFromMilRectF(&v24, v28);
    v16 = v24;
    v17 = v25;
    v18 = v26;
    if ( *(_BYTE *)(a1 + 947) )
    {
      v16 = v24 - *(_DWORD *)(a1 + 948);
      v18 = v26 - *(_DWORD *)(a1 + 948);
      v22 = -*(_DWORD *)(a1 + 952);
      v17 = v25 - *(_DWORD *)(a1 + 952);
      v24 = v16;
      v19 = v22 + v27;
      v25 = v17;
      v27 += v22;
      v26 = v18;
    }
    else
    {
      v19 = v27;
    }
    if ( v16 < *a4 || v18 > a4[2] || v17 < a4[1] || v19 > a4[3] )
      v7 = 1;
    TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a4, &v24);
    v20 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v23) )
      v20 = v23 == 1;
  }
  else
  {
    v20 = 1;
  }
  if ( a5 )
    *a5 = v20;
  if ( a6 )
    *a6 = v7;
  return v6;
}
