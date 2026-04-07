/*
 * XREFs of ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001B090
 * Callers:
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180022580 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002A800 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001B660 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@AcrylicHostBackdrop@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800224A4 (-Initialize@AcrylicHostBackdrop@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024D50 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180025AB0 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002665C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(CTopLevelWindow *this, struct IDwmChannel *a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  struct CVisual **v10; // r14
  struct CVisual **v11; // rbp
  struct CVisual **v12; // r15
  struct CVisual **v13; // r12
  int inserted; // eax
  CVisual *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  struct CVisual *v18; // rsi
  int v20; // r9d
  struct CVisual *v21; // rdx
  unsigned int v22; // [rsp+20h] [rbp-38h]
  struct _MARGINS v23; // [rsp+30h] [rbp-28h] BYREF

  v6 = CResource::Create(38LL, a2, (char *)this + 16);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x4Cu);
  if ( (v7 & 0x80000000) != 0 )
  {
    v22 = 183;
LABEL_25:
    v20 = v7;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v22);
    return v7;
  }
  wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService();
  v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)v8 = &AcrylicHostBackdrop::`vftable';
    *(_QWORD *)(v8 + 16) = 0LL;
    *(_BYTE *)(v8 + 24) = a3;
  }
  *((_QWORD *)this + 102) = v8;
  if ( !v8 )
  {
    v7 = -2147024882;
    v22 = 188;
    goto LABEL_25;
  }
  v9 = AcrylicHostBackdrop::Initialize((AcrylicHostBackdrop *)v8, a2);
  v7 = v9;
  if ( v9 < 0 )
  {
    v22 = 189;
LABEL_27:
    v20 = v9;
    goto LABEL_30;
  }
  if ( a3 )
  {
    *((_BYTE *)this + 240) |= 0x10u;
    return v7;
  }
  v10 = (struct CVisual **)((char *)this + 256);
  v9 = CCanvasVisual::Create(a2, (struct CCanvasVisual **)this + 32);
  v7 = v9;
  if ( v9 < 0 )
  {
    v22 = 194;
    goto LABEL_27;
  }
  v11 = (struct CVisual **)((char *)this + 528);
  v9 = CCanvasVisual::Create(a2, (struct CCanvasVisual **)this + 66);
  v7 = v9;
  if ( v9 < 0 )
  {
    v22 = 195;
    goto LABEL_27;
  }
  v12 = (struct CVisual **)((char *)this + 536);
  v9 = CCanvasVisual::Create(a2, (struct CCanvasVisual **)this + 67);
  v7 = v9;
  if ( v9 < 0 )
  {
    v22 = 196;
    goto LABEL_27;
  }
  v13 = (struct CVisual **)((char *)this + 272);
  inserted = CTopLevelAtlasedRectsVisual::Create(a2, (struct CTopLevelAtlasedRectsVisual **)this + 34);
  v7 = inserted;
  if ( inserted < 0 )
  {
    v22 = 197;
LABEL_29:
    v20 = inserted;
    goto LABEL_30;
  }
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v10 + 32), *v13, 0LL, 0, 1);
  v7 = inserted;
  if ( inserted < 0 )
  {
    v22 = 199;
    goto LABEL_29;
  }
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v10 + 32), *v12, 0LL, 0, 1);
  v7 = inserted;
  if ( inserted < 0 )
  {
    v22 = 200;
    goto LABEL_29;
  }
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v12 + 32), *v11, 0LL, 0, 1);
  v7 = inserted;
  if ( inserted < 0 )
  {
    v22 = 201;
    goto LABEL_29;
  }
  v15 = *v11;
  *(_QWORD *)&v23.cxLeftWidth = 0LL;
  *(_QWORD *)&v23.cyTopHeight = 0LL;
  CVisual::SetInsetFromParent(v15, &v23);
  CVisual::SetInsetFromParent(*v13, &v23);
  wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService();
  v16 = *(_QWORD *)(*((_QWORD *)this + 102) + 16LL);
  v17 = *(_QWORD *)(v16 + 56);
  if ( !v17 || (v18 = *(struct CVisual **)(v16 + 16)) == 0LL )
  {
    v21 = *v10;
    *((_BYTE *)this + 824) = 1;
    inserted = VisualCollection::InsertRelative((CTopLevelWindow *)((char *)this + 32), v21, 0LL, 0, 0);
    v7 = inserted;
    if ( inserted >= 0 )
      goto LABEL_20;
    v22 = 224;
    goto LABEL_29;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(v17 + 32), *v10, 0LL, 0, 0);
  v7 = inserted;
  if ( inserted < 0 )
  {
    v22 = 216;
    goto LABEL_29;
  }
  inserted = VisualCollection::InsertRelative((CTopLevelWindow *)((char *)this + 32), v18, 0LL, 0, 1);
  v7 = inserted;
  if ( inserted < 0 )
  {
    v22 = 217;
    goto LABEL_29;
  }
LABEL_20:
  *((_DWORD *)*v12 + 48) = -1;
  return v7;
}
