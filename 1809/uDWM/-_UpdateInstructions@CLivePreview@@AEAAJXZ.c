/*
 * XREFs of ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x180076D1C
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180075684 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateInstructions(CRenderDataVisual **this)
{
  CBaseObject *v1; // r14
  CBaseObject *v2; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // r15d
  CRenderDataVisual *v8; // rcx
  __int64 v9; // r12
  int v10; // eax
  CBaseObject *v11; // rcx
  CRenderDataVisual *v12; // rcx
  int v13; // eax
  CBaseObject *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  CBaseObject *v17; // [rsp+58h] [rbp+38h] BYREF
  CBaseObject *v18; // [rsp+60h] [rbp+40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v4 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1170LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"windows\\dwm\\udwm\\livepreview.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_18;
  }
  v4 = CRenderDataVisual::ClearInstructions(this[66]);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1171LL;
    goto LABEL_26;
  }
  v7 = 0;
  if ( !*((_DWORD *)this + 98) )
  {
LABEL_17:
    v5 = 0;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v8 = this[46];
    v9 = 136LL * v7;
    if ( *((_BYTE *)v8 + v9 + 128) )
    {
      v10 = CDrawGeometryInstruction::Create(
              *(struct CResource **)((char *)v8 + v9 + 32),
              *(struct CResource **)((char *)v8 + v9 + 16),
              &v17);
      v5 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x499,
          (__int64)"windows\\dwm\\udwm\\livepreview.cpp",
          (const char *)(unsigned int)v10);
        v1 = v17;
        goto LABEL_18;
      }
      v1 = v17;
      v4 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v17);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1178LL;
        goto LABEL_26;
      }
      v11 = v1;
      if ( v1 )
      {
        v1 = 0LL;
        v17 = 0LL;
        CBaseObject::Release(v11);
      }
    }
    v12 = this[46];
    if ( !*((_BYTE *)v12 + v9 + 129) )
      goto LABEL_16;
    v13 = CDrawGeometryInstruction::Create(
            *(struct CResource **)((char *)v12 + v9 + 72),
            *(struct CResource **)((char *)v12 + v9 + 56),
            &v18);
    v5 = v13;
    if ( v13 < 0 )
      break;
    v2 = v18;
    v4 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v18);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1185LL;
      goto LABEL_26;
    }
    v14 = v2;
    if ( v2 )
    {
      v2 = 0LL;
      v18 = 0LL;
      CBaseObject::Release(v14);
    }
LABEL_16:
    if ( ++v7 >= *((_DWORD *)this + 98) )
      goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A0,
    (__int64)"windows\\dwm\\udwm\\livepreview.cpp",
    (const char *)(unsigned int)v13);
  v2 = v18;
LABEL_18:
  if ( v2 )
    CBaseObject::Release(v2);
  if ( v1 )
    CBaseObject::Release(v1);
  return v5;
}
