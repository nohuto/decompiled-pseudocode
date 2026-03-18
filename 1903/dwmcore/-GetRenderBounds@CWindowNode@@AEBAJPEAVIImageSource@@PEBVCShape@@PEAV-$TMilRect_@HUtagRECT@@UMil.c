/*
 * XREFs of ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEA_N3@Z @ 0x180050310
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005A560 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007EA10 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800444E8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180050470 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  __int64 v16; // r8
  int v17; // eax
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx
  bool v21; // bl
  int v23; // edx
  int v24; // [rsp+30h] [rbp-30h] BYREF
  int v25; // [rsp+38h] [rbp-28h] BYREF
  int v26; // [rsp+3Ch] [rbp-24h]
  int v27; // [rsp+40h] [rbp-20h]
  int v28; // [rsp+44h] [rbp-1Ch]
  _BYTE v29[16]; // [rsp+48h] [rbp-18h] BYREF

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
    v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a3 + 32LL))(a3, v29, 0LL);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x615u, 0LL);
      return v6;
    }
    CMilRectLFromMilRectF(&v25, v29, v16);
    v17 = v25;
    v18 = v26;
    v19 = v27;
    if ( *(_BYTE *)(a1 + 947) )
    {
      v17 = v25 - *(_DWORD *)(a1 + 948);
      v19 = v27 - *(_DWORD *)(a1 + 948);
      v23 = -*(_DWORD *)(a1 + 952);
      v18 = v26 - *(_DWORD *)(a1 + 952);
      v25 = v17;
      v20 = v23 + v28;
      v26 = v18;
      v28 += v23;
      v27 = v19;
    }
    else
    {
      v20 = v28;
    }
    if ( v17 < *a4 || v19 > a4[2] || v18 < a4[1] || v20 > a4[3] )
      v7 = 1;
    TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a4, &v25);
    v21 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v24) )
      v21 = v24 == 1;
  }
  else
  {
    v21 = 1;
  }
  if ( a5 )
    *a5 = v21;
  if ( a6 )
    *a6 = v7;
  return v6;
}
