/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800144CC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180014FB8 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180017670 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001B660 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?getArgbcolor@CGlassColorizationResources@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x180024CEC (-getArgbcolor@CGlassColorizationResources@@QEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002665C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180031E30 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x1800352B8 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z @ 0x1800844F8 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientBlur(CTopLevelWindow *this)
{
  __int64 v1; // r8
  unsigned int v3; // r14d
  CBaseObject *v4; // r12
  CBaseObject *v5; // r13
  CRenderDataVisual *v6; // rcx
  volatile signed __int32 **v8; // rsi
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int inserted; // eax
  CBaseObject *v14; // rcx
  struct CVisual **v15; // rdi
  __int64 v16; // rax
  const struct _MARGINS *v17; // rdx
  __int64 v18; // r8
  volatile signed __int32 *v19; // rbx
  HRGN v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  int v25; // eax
  struct CResource **v26; // rbx
  bool v27; // zf
  int updated; // eax
  __int64 *v29; // rsi
  unsigned int v30; // edi
  __int64 v31; // rbx
  struct _D3DCOLORVALUE *Argbcolor; // rax
  __int64 v33; // r8
  int v34; // eax
  int v35; // eax
  unsigned int v36; // [rsp+28h] [rbp-39h]
  CBaseObject *v37; // [rsp+48h] [rbp-19h] BYREF
  struct CDrawGeometryInstruction *v38; // [rsp+50h] [rbp-11h] BYREF
  CBaseObject *v39; // [rsp+58h] [rbp-9h] BYREF
  HRGN v40; // [rsp+60h] [rbp-1h] BYREF
  struct tagRECT v41; // [rsp+68h] [rbp+7h] BYREF
  struct CVisual **v42; // [rsp+78h] [rbp+17h]
  struct _D3DCOLORVALUE v43; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = *((_QWORD *)this + 90);
  v39 = 0LL;
  v3 = 0;
  v37 = 0LL;
  v4 = 0LL;
  v38 = 0LL;
  v5 = 0LL;
  if ( (*(_BYTE *)(v1 + 597) & 4) != 0 )
  {
    if ( *(_QWORD *)(v1 + 360) )
    {
      v8 = (volatile signed __int32 **)((char *)this + 560);
      v14 = (CBaseObject *)*((_QWORD *)this + 70);
      if ( v14 )
      {
        CBaseObject::Release(v14);
        *v8 = 0LL;
      }
    }
    else
    {
      v8 = (volatile signed __int32 **)((char *)this + 560);
      v9 = *(_DWORD *)(v1 + 188) - *(_DWORD *)(v1 + 180);
      v10 = *(_DWORD *)(v1 + 192) - *(_DWORD *)(v1 + 184);
      v41.left = *(_DWORD *)(v1 + 260);
      v11 = 0;
      if ( v9 >= 0 )
        v11 = v9;
      v41.right = v11 - *(_DWORD *)(v1 + 264) - *(_DWORD *)(v1 + 248) - *(_DWORD *)(v1 + 244);
      v41.top = *(_DWORD *)(v1 + 268);
      v12 = 0;
      if ( v10 >= 0 )
        v12 = v10;
      v41.bottom = v12 - *(_DWORD *)(v1 + 272) - *(_DWORD *)(v1 + 256) - *(_DWORD *)(v1 + 252);
      inserted = ResourceHelper::CreateRectangleGeometry(&v41, (struct CResource **)this + 70);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v36 = 3676;
LABEL_54:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v36);
        return v3;
      }
    }
    v15 = (struct CVisual **)((char *)this + 288);
    v16 = *((_QWORD *)this + 36);
    v42 = (struct CVisual **)((char *)this + 288);
    if ( !v16 )
    {
      inserted = CCanvasVisual::Create(
                   *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                   (struct CCanvasVisual **)this + 36);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v36 = 3687;
        goto LABEL_54;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 32) + 32LL),
                   *v15,
                   *((struct CVisual **)this + 35),
                   1,
                   1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v36 = 3689;
        goto LABEL_54;
      }
      v17 = (const struct _MARGINS *)*((_QWORD *)this + 67);
      if ( v17 )
        CVisual::SetInsetFromParent(*v15, v17 + 8);
      CTopLevelWindow::UpdateWindowScale(this);
      v16 = *((_QWORD *)this + 36);
    }
    if ( *(_DWORD *)(v16 + 272) )
      return v3;
    v18 = *((_QWORD *)this + 90);
    v19 = *(volatile signed __int32 **)(v18 + 360);
    if ( !v19 )
      v19 = *v8;
    v20 = 0LL;
    v40 = 0LL;
    v21 = *(_QWORD *)(v18 + 24);
    if ( v21 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v21 + 328LL))(v21, &v40);
      v20 = v40;
      v3 = v22;
    }
    else
    {
      v3 = 0;
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xE7Au);
      return v3;
    }
    if ( v20 )
    {
      v23 = ResourceHelper::CreateGeometryFromHRGN(v20, &v39);
      v3 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xE7Fu);
LABEL_46:
        if ( v39 )
          CBaseObject::Release(v39);
        if ( v4 )
          CBaseObject::Release(v4);
        if ( v5 )
          CBaseObject::Release(v5);
        return v3;
      }
      v25 = ResourceHelper::CreateCombinedGeometry(v39, v19, v24, &v37);
      v3 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xE89u);
        v4 = v37;
        goto LABEL_46;
      }
    }
    else
    {
      v37 = (CBaseObject *)v19;
      v4 = (CBaseObject *)v19;
      if ( !v19 )
        goto LABEL_37;
      _InterlockedIncrement(v19 + 2);
      v5 = v38;
    }
    v4 = v37;
LABEL_37:
    v26 = (struct CResource **)((char *)this + 760);
    v27 = *((_QWORD *)this + 95) == 0LL;
    v37 = (CTopLevelWindow *)((char *)this + 760);
    if ( v27 )
    {
      CResource::Create(34LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (char *)this + 760);
      updated = CTopLevelWindow::UpdateColorizationColor(this);
      v3 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xE95u);
        goto LABEL_46;
      }
      v29 = (__int64 *)*((_QWORD *)*v26 + 2);
      v30 = *((_DWORD *)*v26 + 6);
      v31 = *v29;
      Argbcolor = CGlassColorizationResources::getArgbcolor(*((CGlassColorizationResources **)this + 71), &v43);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64, struct _D3DCOLORVALUE *, _DWORD, _DWORD, _DWORD))(v31 + 1184))(
        v29,
        v30,
        v33,
        Argbcolor,
        0,
        0,
        0);
      v15 = v42;
      v26 = (struct CResource **)v37;
    }
    if ( !*((_DWORD *)*v15 + 68) )
    {
      v34 = CDrawGeometryInstruction::Create(*v26, v4, &v38);
      v3 = v34;
      if ( v34 >= 0 )
      {
        v5 = v38;
        v35 = CRenderDataVisual::AddInstruction(*v15, v38);
        v3 = v35;
        if ( v35 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xEA9u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xEA7u);
        v5 = v38;
      }
    }
    goto LABEL_46;
  }
  v6 = (CRenderDataVisual *)*((_QWORD *)this + 36);
  if ( v6 )
  {
    inserted = CRenderDataVisual::ClearInstructions(v6);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v36 = 3761;
      goto LABEL_54;
    }
  }
  return v3;
}
