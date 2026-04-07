/*
 * XREFs of ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180018E30
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180017670 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001B660 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800247DC (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?getArgbcolor@CGlassColorizationResources@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x180024CEC (-getArgbcolor@CGlassColorizationResources@@QEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002665C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180034E30 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?milcolorf_cmp@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x180037628 (-milcolorf_cmp@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x180038484 (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaBackground(CTopLevelWindow *this)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  CBaseObject *v4; // r14
  CRenderDataVisual *v5; // rcx
  int updated; // eax
  struct CVisual **v8; // rsi
  struct CResource **v9; // r15
  int v10; // eax
  CGlassColorizationResources *v11; // rcx
  struct CResource **v12; // r12
  float *v13; // rax
  int v14; // eax
  CBaseObject *v15; // r15
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int inserted; // eax
  CVisual *v21; // rcx
  int v22; // eax
  CBaseObject *v23; // [rsp+48h] [rbp-19h] BYREF
  CBaseObject *v24; // [rsp+50h] [rbp-11h] BYREF
  struct _MARGINS v25; // [rsp+58h] [rbp-9h] BYREF
  struct _D3DCOLORVALUE v26; // [rsp+68h] [rbp+7h] BYREF
  _D3DCOLORVALUE v27; // [rsp+78h] [rbp+17h] BYREF

  v1 = *((_QWORD *)this + 90);
  v24 = 0LL;
  v3 = 0;
  v23 = 0LL;
  v4 = 0LL;
  if ( (*(_BYTE *)(v1 + 596) & 8) == 0 || AreAllMarginsZero((const struct _MARGINS *)((char *)this + 604)) )
  {
    v5 = (CRenderDataVisual *)*((_QWORD *)this + 35);
    if ( v5 )
    {
      v22 = CRenderDataVisual::ClearInstructions(v5);
      v3 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xE33u);
    }
  }
  else
  {
    updated = CTopLevelWindow::UpdateNCAreaGeometry(this);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xDCFu);
      return v3;
    }
    v8 = (struct CVisual **)((char *)this + 280);
    if ( !*((_QWORD *)this + 35) )
    {
      v19 = CCanvasVisual::Create(
              *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
              (struct CCanvasVisual **)this + 35);
      v3 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xDD4u);
        return v3;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 32) + 32LL), *v8, 0LL, 1, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xDD7u);
        return v3;
      }
      v21 = *v8;
      *(_QWORD *)&v25.cxLeftWidth = 0LL;
      *(_QWORD *)&v25.cyTopHeight = 0LL;
      CVisual::SetInsetFromParent(v21, &v25);
    }
    v9 = (struct CResource **)((char *)this + 744);
    if ( !*((_QWORD *)this + 93) )
      CResource::Create(34LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (char *)this + 744);
    v10 = CTopLevelWindow::UpdateColorizationColor(this);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xDE4u);
      return v3;
    }
    if ( CTopLevelWindow::IsSheetOfGlass(this) )
      v11 = (CGlassColorizationResources *)*((_QWORD *)this + 72);
    else
      v11 = (CGlassColorizationResources *)*((_QWORD *)this + 71);
    *(_D3DCOLORVALUE *)&v27.r = *(_D3DCOLORVALUE *)&CGlassColorizationResources::getArgbcolor(
                                                      v11,
                                                      (struct _D3DCOLORVALUE *)&v25)->r;
    if ( milcolorf_cmp(&v27, (const struct _D3DCOLORVALUE *)((char *)this + 684)) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _D3DCOLORVALUE *, _DWORD, _DWORD, _DWORD))(**((_QWORD **)*v9 + 2)
                                                                                               + 1184LL))(
        *((_QWORD *)*v9 + 2),
        *((unsigned int *)*v9 + 6),
        *((_QWORD *)*v9 + 2),
        &v27,
        0,
        0,
        0);
      *(_D3DCOLORVALUE *)((char *)this + 684) = *(_D3DCOLORVALUE *)&v27.r;
    }
    v12 = (struct CResource **)((char *)this + 752);
    if ( !*((_QWORD *)this + 94) )
      CResource::Create(34LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (char *)this + 752);
    v13 = (float *)*((_QWORD *)this + 72);
    v26.r = v13[4] * v13[8];
    v26.g = v13[5] * v13[8];
    v26.b = v13[6] * v13[8];
    v26.a = FLOAT_1_0;
    if ( milcolorf_cmp(&v26, (const struct _D3DCOLORVALUE *)((char *)this + 700)) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _D3DCOLORVALUE *, _DWORD, _DWORD, _DWORD))(**((_QWORD **)*v12 + 2) + 1184LL))(
        *((_QWORD *)*v12 + 2),
        *((unsigned int *)*v12 + 6),
        *((_QWORD *)*v12 + 2),
        &v26,
        0,
        0,
        0);
      *(struct _D3DCOLORVALUE *)((char *)this + 700) = *(struct _D3DCOLORVALUE *)&v26.r;
    }
    if ( !*((_DWORD *)*v8 + 68) )
    {
      v14 = CDrawGeometryInstruction::Create(*v9, *((struct CResource **)this + 68), &v24);
      v15 = v24;
      v3 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xE21u);
      }
      else
      {
        v16 = CDrawGeometryInstruction::Create(*v12, *((struct CResource **)this + 69), &v23);
        v3 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xE27u);
        }
        else
        {
          v17 = CRenderDataVisual::AddInstruction(*v8, v15);
          v3 = v17;
          if ( v17 >= 0 )
          {
            v4 = v23;
            v18 = CRenderDataVisual::AddInstruction(*v8, v23);
            v3 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xE2Bu);
            goto LABEL_24;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xE2Au);
        }
        v4 = v23;
      }
LABEL_24:
      if ( v15 )
        CBaseObject::Release(v15);
      if ( v4 )
        CBaseObject::Release(v4);
    }
  }
  return v3;
}
