/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800379E8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001CB10 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18001FFD0 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180020D1C (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021984 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180023738 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180024E80 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024F58 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18002BFA0 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x18002CF40 (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x1800384BC (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x18008B164 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPE.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientBlur(CTopLevelWindow *this)
{
  __int64 v1; // r8
  CBaseObject *v2; // r15
  CBaseObject *v3; // r14
  unsigned int v4; // ebx
  struct CBaseGeometryProxy *v5; // r13
  CRenderDataVisual *v7; // rcx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int inserted; // eax
  _QWORD *v14; // rsi
  CBaseObject *v15; // rcx
  struct CVisual **v16; // r12
  __int64 v17; // rax
  const struct _MARGINS *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rsi
  HRGN v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // r8
  int v26; // eax
  struct CBaseLegacyMilBrushProxy **v27; // rsi
  int v28; // eax
  int updated; // eax
  float *v30; // rax
  CSolidColorLegacyMilBrushProxy *v31; // rcx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // [rsp+20h] [rbp-60h]
  void *v35; // [rsp+28h] [rbp-58h]
  CBaseObject *v36; // [rsp+30h] [rbp-50h] BYREF
  struct CRenderDataInstruction *v37; // [rsp+38h] [rbp-48h] BYREF
  HRGN v38; // [rsp+40h] [rbp-40h] BYREF
  struct CBaseGeometryProxy *v39; // [rsp+48h] [rbp-38h] BYREF
  struct tagRECT v40; // [rsp+50h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v41; // [rsp+60h] [rbp-20h] BYREF

  v1 = *((_QWORD *)this + 90);
  v2 = 0LL;
  v3 = 0LL;
  v36 = 0LL;
  v4 = 0;
  v37 = 0LL;
  v5 = 0LL;
  if ( (*(_BYTE *)(v1 + 605) & 4) != 0 )
  {
    if ( *(_QWORD *)(v1 + 368) )
    {
      v14 = (_QWORD *)((char *)this + 560);
      v15 = (CBaseObject *)*((_QWORD *)this + 70);
      if ( v15 )
      {
        CBaseObject::Release(v15);
        *v14 = 0LL;
      }
    }
    else
    {
      v9 = *(_DWORD *)(v1 + 188) - *(_DWORD *)(v1 + 180);
      v10 = *(_DWORD *)(v1 + 192) - *(_DWORD *)(v1 + 184);
      v40.left = *(_DWORD *)(v1 + 260);
      v11 = 0;
      if ( v9 >= 0 )
        v11 = v9;
      v40.right = v11 - *(_DWORD *)(v1 + 264) - *(_DWORD *)(v1 + 248) - *(_DWORD *)(v1 + 244);
      v40.top = *(_DWORD *)(v1 + 268);
      v12 = 0;
      if ( v10 >= 0 )
        v12 = v10;
      v40.bottom = v12 - *(_DWORD *)(v1 + 272) - *(_DWORD *)(v1 + 256) - *(_DWORD *)(v1 + 252);
      inserted = ResourceHelper::CreateRectangleGeometry(&v40, (struct CRectangleGeometryProxy **)this + 70);
      v4 = inserted;
      if ( inserted < 0 )
      {
        v34 = 3636;
LABEL_56:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v34, v35);
        return v4;
      }
    }
    v16 = (struct CVisual **)((char *)this + 288);
    v17 = *((_QWORD *)this + 36);
    if ( !v17 )
    {
      inserted = CCanvasVisual::Create((struct CCanvasVisual **)this + 36);
      v4 = inserted;
      if ( inserted < 0 )
      {
        v34 = 3647;
        goto LABEL_56;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 32) + 32LL),
                   *v16,
                   *((struct CVisual **)this + 35),
                   1u,
                   1);
      v4 = inserted;
      if ( inserted < 0 )
      {
        v34 = 3649;
        goto LABEL_56;
      }
      v18 = (const struct _MARGINS *)*((_QWORD *)this + 67);
      if ( v18 )
        CVisual::SetInsetFromParent((struct _MARGINS *)*v16, v18 + 8);
      CTopLevelWindow::UpdateWindowScale(this);
      v17 = *((_QWORD *)this + 36);
    }
    if ( *(_DWORD *)(v17 + 272) )
      return v4;
    v19 = *((_QWORD *)this + 90);
    v20 = *(_QWORD *)(v19 + 368);
    if ( !v20 )
      v20 = *((_QWORD *)this + 70);
    v21 = 0LL;
    v38 = 0LL;
    v22 = *(_QWORD *)(v19 + 24);
    if ( v22 )
    {
      v23 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v22 + 328LL))(v22, &v38);
      v21 = v38;
      v4 = v23;
    }
    else
    {
      v4 = 0;
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xE52u, v35);
      return v4;
    }
    if ( v21 )
    {
      v39 = 0LL;
      v24 = ResourceHelper::CreateGeometryFromHRGN(v21, &v36);
      v4 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xE59u, v35);
        v2 = v36;
LABEL_48:
        if ( v2 )
          CBaseObject::Release(v2);
        if ( v5 )
          CBaseObject::Release(v5);
        if ( v3 )
          CBaseObject::Release(v3);
        return v4;
      }
      v2 = v36;
      v26 = ResourceHelper::CreateCombinedGeometry(v36, v20, v25, &v39);
      v4 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xE62u, v35);
        goto LABEL_48;
      }
      v5 = v39;
    }
    else
    {
      v5 = (struct CBaseGeometryProxy *)v20;
      if ( v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
        v2 = v36;
        v3 = v37;
      }
    }
    v27 = (struct CBaseLegacyMilBrushProxy **)((char *)this + 760);
    if ( !*((_QWORD *)this + 95) )
    {
      v28 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (char *)this + 760);
      v4 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xE6Eu, v35);
        goto LABEL_48;
      }
      updated = CTopLevelWindow::UpdateColorizationColor(this);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xE70u, v35);
        goto LABEL_48;
      }
      v30 = (float *)*((_QWORD *)this + 71);
      v31 = *v27;
      v41.r = v30[4] * v30[8];
      v41.g = v30[5] * v30[8];
      v41.b = v30[6] * v30[8];
      v41.a = v30[7];
      CSolidColorLegacyMilBrushProxy::Update(v31, 1.0, &v41);
    }
    if ( !*((_DWORD *)*v16 + 68) )
    {
      v32 = CDrawGeometryInstruction::Create(*v27, v5, &v37);
      v4 = v32;
      if ( v32 >= 0 )
      {
        v3 = v37;
        v33 = CRenderDataVisual::AddInstruction(*v16, v37);
        v4 = v33;
        if ( v33 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xE7Du, v35);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0xE7Bu, v35);
        v3 = v37;
      }
    }
    goto LABEL_48;
  }
  v7 = (CRenderDataVisual *)*((_QWORD *)this + 36);
  if ( v7 )
  {
    inserted = CRenderDataVisual::ClearInstructions(v7);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v34 = 3717;
      goto LABEL_56;
    }
  }
  return v4;
}
