/*
 * XREFs of ?VisualWasRendered@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x1801719DC
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004F290 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180089DA0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801C24F8 (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 */

__int64 __fastcall CDrawingContext::VisualWasRendered(__int64 a1, __int128 *a2, CVisual *a3)
{
  bool v3; // zf
  __int64 v6; // rdx
  __int64 v7; // r10
  int v8; // edx
  unsigned int v9; // r8d
  __int64 v10; // r9
  CMILMatrix *TopByReference; // rax
  float v12; // xmm4_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edx
  signed int v19; // eax
  __int64 v20; // rcx
  CVisual *v22; // [rsp+30h] [rbp-30h] BYREF
  __int128 v23; // [rsp+38h] [rbp-28h] BYREF
  float v24; // [rsp+48h] [rbp-18h] BYREF
  float v25; // [rsp+4Ch] [rbp-14h]
  float v26; // [rsp+50h] [rbp-10h]
  float v27; // [rsp+54h] [rbp-Ch]

  v3 = *(_BYTE *)(a1 + 6348) == 0;
  v22 = a3;
  if ( !v3 )
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
            return 0LL;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 312LL))(v10) )
        {
          v23 = *a2;
          TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
          CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, (__int64)&v23, &v24);
          CScopedClipStack::GetClipBoundsWorld(a1 + 1008, (__int64)&v23);
          v12 = *(float *)&v23;
          if ( v24 > *(float *)&v23 )
          {
            *(float *)&v23 = v24;
            v12 = v24;
          }
          v13 = *((float *)&v23 + 1);
          if ( v25 > *((float *)&v23 + 1) )
          {
            *((float *)&v23 + 1) = v25;
            v13 = v25;
          }
          v14 = *((float *)&v23 + 2);
          if ( *((float *)&v23 + 2) > v26 )
          {
            *((float *)&v23 + 2) = v26;
            v14 = v26;
          }
          v15 = *((float *)&v23 + 3);
          if ( *((float *)&v23 + 3) > v27 )
          {
            *((float *)&v23 + 3) = v27;
            v15 = v27;
          }
          if ( v14 <= v12 || v15 <= v13 )
            v23 = 0uLL;
          CVisual::AddToVisibleRegion(v22);
          v17 = *(_DWORD *)(a1 + 6224);
          v18 = v17 + 1;
          if ( v17 + 1 < v17 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x80070216, 0xB8u, 0LL);
          }
          else if ( v18 > *(_DWORD *)(a1 + 6220) )
          {
            v19 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 6200, 8, 1, &v22);
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xC3u, 0LL);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 6200) + 8LL * v17) = v22;
            *(_DWORD *)(a1 + 6224) = v18;
          }
        }
      }
    }
  }
  return 0LL;
}
