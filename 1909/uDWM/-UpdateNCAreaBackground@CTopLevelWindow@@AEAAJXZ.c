/*
 * XREFs of ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001A6B0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001CA20 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18002343C (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180024840 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024918 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x180028D9C (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180035750 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x1800378BC (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaBackground(CTopLevelWindow *this)
{
  CBaseObject *v1; // rbx
  CBaseObject *v3; // rdi
  bool v4; // zf
  int updated; // eax
  unsigned int v6; // r14d
  struct CVisual **v7; // r15
  int v8; // eax
  _DWORD *v9; // rax
  float *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float *v16; // rax
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  CRenderDataVisual *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int inserted; // eax
  CVisual *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // [rsp+28h] [rbp-29h]
  struct CRenderDataInstruction *v33; // [rsp+38h] [rbp-19h] BYREF
  struct CRenderDataInstruction *v34; // [rsp+40h] [rbp-11h] BYREF
  struct _MARGINS v35; // [rsp+48h] [rbp-9h] BYREF
  struct _D3DCOLORVALUE v36; // [rsp+58h] [rbp+7h] BYREF
  struct _D3DCOLORVALUE v37; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v1 = 0LL;
  v3 = 0LL;
  v4 = (*(_BYTE *)(*((_QWORD *)this + 90) + 604LL) & 8) == 0;
  v33 = 0LL;
  v34 = 0LL;
  if ( !v4 && (*((_DWORD *)this + 151) || *((_DWORD *)this + 153) || *((_DWORD *)this + 152) || *((_DWORD *)this + 154)) )
  {
    updated = CTopLevelWindow::UpdateNCAreaGeometry(this);
    v6 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDBA,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)updated,
        v32);
      goto LABEL_20;
    }
    v7 = (struct CVisual **)((char *)this + 280);
    if ( !*((_QWORD *)this + 35) )
    {
      v26 = CCanvasVisual::Create((struct CCanvasVisual **)this + 35);
      v6 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDBF,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v26,
          v32);
        goto LABEL_20;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 32) + 32LL), *v7, 0LL, 1u, 1);
      v6 = inserted;
      if ( inserted < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDC2,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)inserted,
          v32);
        goto LABEL_20;
      }
      v28 = *v7;
      *(_QWORD *)&v35.cxLeftWidth = 0LL;
      *(_QWORD *)&v35.cyTopHeight = 0LL;
      CVisual::SetInsetFromParent(v28, &v35);
    }
    if ( !*((_QWORD *)this + 93) )
    {
      v29 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (char *)this + 744);
      v6 = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDCB,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v29,
          v32);
        goto LABEL_20;
      }
    }
    v8 = CTopLevelWindow::UpdateColorizationColor(this);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDCF,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v8,
        v32);
      goto LABEL_20;
    }
    v9 = (_DWORD *)*((_QWORD *)this + 90);
    if ( v9[20] == 0x7FFFFFFF && v9[21] == 0x7FFFFFFF && v9[22] == 0x7FFFFFFF && v9[23] == 0x7FFFFFFF )
      v10 = (float *)*((_QWORD *)this + 72);
    else
      v10 = (float *)*((_QWORD *)this + 71);
    v11 = v10[8];
    v12 = v10[7];
    v4 = v12 == *((float *)this + 174);
    v13 = v11 * v10[4];
    v14 = v11 * v10[5];
    v15 = v11 * v10[6];
    v36.g = v10[8] * v10[5];
    v36.r = v13;
    v36.a = v12;
    v36.b = v15;
    if ( !v4 || v13 != *((float *)this + 171) || v14 != *((float *)this + 172) || v15 != *((float *)this + 173) )
    {
      CSolidColorLegacyMilBrushProxy::Update(*((CSolidColorLegacyMilBrushProxy **)this + 93), v12, &v36);
      *(struct _D3DCOLORVALUE *)((char *)this + 684) = *(struct _D3DCOLORVALUE *)&v36.r;
    }
    if ( !*((_QWORD *)this + 94) )
    {
      v30 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (char *)this + 752);
      v6 = v30;
      if ( v30 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDEC,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v30,
          v32);
        goto LABEL_20;
      }
    }
    v16 = (float *)*((_QWORD *)this + 72);
    v4 = 1.0 == *((float *)this + 178);
    v17 = v16[4] * v16[8];
    v37.r = v17;
    v18 = v16[5] * v16[8];
    v37.g = v18;
    v19 = v16[6] * v16[8];
    v37.a = 1.0;
    v37.b = v19;
    if ( !v4 || v17 != *((float *)this + 175) || v18 != *((float *)this + 176) || v19 != *((float *)this + 177) )
    {
      CSolidColorLegacyMilBrushProxy::Update(*((CSolidColorLegacyMilBrushProxy **)this + 94), 1.0, &v37);
      *(struct _D3DCOLORVALUE *)((char *)this + 700) = *(struct _D3DCOLORVALUE *)&v37.r;
    }
    if ( !*((_DWORD *)*v7 + 68) )
    {
      v22 = CDrawGeometryInstruction::Create(
              *((struct CBaseLegacyMilBrushProxy **)this + 93),
              *((struct CBaseGeometryProxy **)this + 68),
              &v33);
      v6 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDFF,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v22,
          v32);
        v1 = v33;
        goto LABEL_20;
      }
      v23 = CDrawGeometryInstruction::Create(
              *((struct CBaseLegacyMilBrushProxy **)this + 94),
              *((struct CBaseGeometryProxy **)this + 69),
              &v34);
      v6 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE04,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v23,
          v32);
        v1 = v33;
        v3 = v34;
        goto LABEL_20;
      }
      v1 = v33;
      v24 = CRenderDataVisual::AddInstruction(*v7, v33);
      v6 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE07,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v24,
          v32);
        v3 = v34;
        goto LABEL_20;
      }
      v3 = v34;
      v25 = CRenderDataVisual::AddInstruction(*v7, v34);
      v6 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE08,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v25,
          v32);
        goto LABEL_20;
      }
    }
LABEL_19:
    v6 = 0;
    goto LABEL_20;
  }
  v21 = (CRenderDataVisual *)*((_QWORD *)this + 35);
  if ( !v21 )
    goto LABEL_19;
  v31 = CRenderDataVisual::ClearInstructions(v21);
  v6 = v31;
  if ( v31 >= 0 )
    goto LABEL_19;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE10,
    (unsigned int)"windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v31,
    v32);
LABEL_20:
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v1 )
    CBaseObject::Release(v1);
  return v6;
}
