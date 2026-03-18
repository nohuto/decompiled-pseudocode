/*
 * XREFs of ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180079C90
 * Callers:
 *     ?DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007AAD0 (-DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A0050 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180019460 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18002AA20 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18007A99C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18007A9BC (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007AA78 (-GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x180088924 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 *     McTemplateU0ffff @ 0x1801624A4 (McTemplateU0ffff.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18016DEE8 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     McTemplateU0ppffff @ 0x1801C6BE4 (McTemplateU0ppffff.c)
 *     McTemplateU0pq @ 0x1801C6CA0 (McTemplateU0pq.c)
 */

__int64 __fastcall CPrimitiveGroup::DrawWorker(
        CPrimitiveGroup *this,
        char a2,
        unsigned int *a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r13
  unsigned int CurrentVisual; // r14d
  int v11; // edx
  struct CDrawingContext *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  char v15; // al
  __int64 i; // r14
  struct IBitmapRealization *v18; // rbx
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25[2]; // [rsp+20h] [rbp-F8h]
  void *v26; // [rsp+28h] [rbp-F0h]
  struct IBitmapRealization *v28; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-C8h]
  __int64 v30; // [rsp+58h] [rbp-C0h]
  __int128 v31; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v32[64]; // [rsp+70h] [rbp-A8h] BYREF
  int v33; // [rsp+B0h] [rbp-68h]
  __int128 v34; // [rsp+C0h] [rbp-58h] BYREF

  v7 = 0;
  v30 = a4;
  v29 = a7;
  if ( a5 )
    *a5 = CPrimitiveGroup::GetLargestOpaqueRect(this, a6);
  if ( g_LockAndReadPrimitiveGroupBitmaps )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); i = (unsigned int)(i + 1) )
    {
      if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                  (CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * i) + 64LL),
                  &v28) >= 0 )
      {
        v18 = v28;
        (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v28 + 152LL))(v28);
        (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( *((_QWORD *)this + 63) )
  {
    CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)(a3 + 2));
    CDrawingContext::EtwLogCurrentState((CDrawingContext *)a3);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
      McTemplateU0ppffff(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        v11,
        CurrentVisual,
        (_DWORD)this,
        *((_DWORD *)this + 23),
        *((_DWORD *)this + 24),
        *((_DWORD *)this + 25),
        *((_DWORD *)this + 26));
    LODWORD(v28) = -1;
    if ( CDrawingContext::IsBounding((CDrawingContext *)a3) )
    {
      *(_QWORD *)&v34 = 0x3F8000003F800000LL;
      *((_QWORD *)&v34 + 1) = 0x3F8000003F800000LL;
      v19 = CDrawingContext::DrawSolidRectangle(v12, (struct D2D_RECT_F *)((char *)this + 92), &v34);
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x65u, 0LL);
        return 0LL;
      }
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 18LL, a3[1572]);
      v33 = 0;
      v7 = 1;
      CMatrixStack::Top((CMatrixStack *)(a3 + 120), (struct CMILMatrix *)v32);
      if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
      {
        v31 = *(_OWORD *)((char *)this + 92);
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v32, (__int64)&v31, (float *)&v34);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0ffff(
            (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
            v21,
            v22,
            SBYTE8(v34),
            SBYTE12(v34));
      }
      if ( a2 )
      {
        v26 = (void *)v29;
        *(_QWORD *)v25 = a6;
        v13 = CContent::DrawAsDrawList(this, a3, v30, a5);
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x80u, 0LL);
      }
      else
      {
        CPrimitiveGroup::ProcessHeatMapChanges(this);
        v23 = CDrawingContext::DrawPrimitiveGroup(
                (CDrawingContext *)a3,
                this,
                *((_BYTE *)this + 577) == 0,
                (unsigned int *)&v28);
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x86u, 0LL);
      }
    }
    v15 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0pq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO,
        this,
        (unsigned int)v28,
        *(_QWORD *)v25,
        v26);
      v15 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    if ( v7 && (v15 & 0x20) != 0 )
      McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 18LL, a3[1572]);
  }
  return 0LL;
}
