/*
 * XREFs of ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180028FD8
 * Callers:
 *     ?DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180028FA0 (-DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180175000 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180018470 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18002915C (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029248 (-GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x180065C78 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800A0F10 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B3200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180163D4C (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     McTemplateU0ffff @ 0x180167760 (McTemplateU0ffff.c)
 *     McTemplateU0ppffff @ 0x1801AC464 (McTemplateU0ppffff.c)
 *     McTemplateU0pq @ 0x1801AC520 (McTemplateU0pq.c)
 */

__int64 __fastcall CPrimitiveGroup::DrawWorker(
        CPrimitiveGroup *this,
        char a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r13
  char v9; // r14
  unsigned int CurrentVisual; // ebx
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx
  char v15; // al
  __int64 i; // r14
  struct IBitmapRealization *v18; // rbx
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  struct IBitmapRealization *v26; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-C8h]
  __int64 v28; // [rsp+58h] [rbp-C0h]
  __int128 v29; // [rsp+60h] [rbp-B8h]
  _BYTE v30[64]; // [rsp+70h] [rbp-A8h] BYREF
  int v31; // [rsp+B0h] [rbp-68h]
  __int128 v32; // [rsp+C0h] [rbp-58h] BYREF

  v7 = 0;
  v9 = a2;
  v28 = a4;
  v27 = a7;
  if ( a5 )
    *a5 = CPrimitiveGroup::GetLargestOpaqueRect(this, a6);
  if ( g_LockAndReadPrimitiveGroupBitmaps )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); i = (unsigned int)(i + 1) )
    {
      if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                  (CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * i) + 64LL),
                  &v26) >= 0 )
      {
        v18 = v26;
        (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v26 + 152LL))(v26);
        (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    v9 = a2;
  }
  if ( *((_QWORD *)this + 63) )
  {
    CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)(a3 + 8));
    CDrawingContext::EtwLogCurrentState((CDrawingContext *)a3);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
      McTemplateU0ppffff(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        v12,
        CurrentVisual,
        (_DWORD)this,
        *((_DWORD *)this + 23),
        *((_DWORD *)this + 24),
        *((_DWORD *)this + 25),
        *((_DWORD *)this + 26));
    LODWORD(v26) = -1;
    if ( *(_QWORD *)(a3 + 360) || *(_QWORD *)(a3 + 6296) )
    {
      *(_QWORD *)&v32 = 0x3F8000003F800000LL;
      *((_QWORD *)&v32 + 1) = 0x3F8000003F800000LL;
      v23 = CDrawingContext::DrawSolidRectangle(
              (struct CDrawingContext *)a3,
              (struct D2D_RECT_F *)((char *)this + 92),
              &v32);
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x68u);
        return 0LL;
      }
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT_Start,
          18LL,
          *(unsigned int *)(a3 + 6288));
      v31 = 0;
      v7 = 1;
      CMatrixStack::Top((CMatrixStack *)(a3 + 480), (struct CMILMatrix *)v30);
      if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
      {
        v29 = *(_OWORD *)((char *)this + 92);
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v30);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0ffff(
            (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
            v19,
            v20,
            SBYTE8(v32),
            SBYTE12(v32));
      }
      if ( v9 )
      {
        v13 = CContent::DrawAsDrawList(this, a3, v28, a5, a6, v27);
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x83u);
      }
      else
      {
        CPrimitiveGroup::ProcessHeatMapChanges(this);
        v21 = CDrawingContext::DrawPrimitiveGroup(
                (CDrawingContext *)a3,
                this,
                *((_BYTE *)this + 577) == 0,
                (unsigned int *)&v26);
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x89u);
      }
    }
    v15 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0pq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO,
        this,
        (unsigned int)v26);
      v15 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    if ( v7 && (v15 & 0x20) != 0 )
      McTemplateU0qq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        18LL,
        *(unsigned int *)(a3 + 6288));
  }
  return 0LL;
}
