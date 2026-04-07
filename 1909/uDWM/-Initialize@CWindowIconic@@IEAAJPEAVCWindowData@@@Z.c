/*
 * XREFs of ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003EE1C
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003EBF4 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x1800136DC (--0CWindowData@@QEAA@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800219E0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180024840 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CClientArea@@KAJIPEAPEAV1@@Z @ 0x180024D04 (-Create@CClientArea@@KAJIPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180025F94 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x1800390E4 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003F0B8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003F790 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003F934 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003FA00 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FA7C (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FAF8 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FB78 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FBEC (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003FC54 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18003FCAC (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::Initialize(CWindowIconic *this, struct CWindowData *a2)
{
  CWindowData *v3; // rax
  CTopLevelWindow **v4; // rsi
  int inserted; // eax
  unsigned int v6; // ebx
  struct CVisual **v7; // r15
  char *v8; // r14
  __int64 v9; // rax
  int v10; // ecx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  void *v13; // [rsp+28h] [rbp-20h]
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 4) = 5;
  v3 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        752LL);
  if ( v3 )
    v3 = CWindowData::CWindowData(v3);
  *((_QWORD *)this + 10) = v3;
  if ( !v3 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x65u, v13);
    return v6;
  }
  v4 = (CTopLevelWindow **)((char *)this + 88);
  inserted = CTopLevelWindow::Create((struct CCanvasVisual ***)this + 11);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 106;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v12, v13);
    return v6;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 400LL) = *v4;
  if ( *v4 )
    _InterlockedIncrement((volatile signed __int32 *)*v4 + 2);
  v7 = (struct CVisual **)((char *)this + 104);
  *(_QWORD *)(*((_QWORD *)this + 10) + 440LL) = this;
  *((_QWORD *)*v4 + 90) = *((_QWORD *)this + 10);
  *((_BYTE *)*v4 + 240) |= 0x20u;
  *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 40LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 605LL) |= 0x10u;
  inserted = CCanvasVisual::Create((struct CCanvasVisual **)this + 13);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 134;
    goto LABEL_30;
  }
  inserted = CImage::Create((struct CImage **)this + 12);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 135;
    goto LABEL_30;
  }
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)*v7 + 32),
               *((struct CVisual **)this + 12),
               0LL,
               0,
               1);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 136;
    goto LABEL_30;
  }
  v8 = (char *)this + 112;
  inserted = CClientArea::Create(0, (struct CClientArea **)this + 14);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 137;
    goto LABEL_30;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v8 + 32LL), *v7, 0LL, 0, 1);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 138;
    goto LABEL_30;
  }
  v9 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
  if ( v9 )
    v10 = *(_DWORD *)(*(_QWORD *)(v9 + 16) + 24LL);
  else
    v10 = 0;
  *(_DWORD *)(*((_QWORD *)this + 10) + 128LL) = v10;
  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 37),
    this,
    (enum IconicRepresentationType *)&v14);
  inserted = CWindowIconic::SetRepresentationType(this, v14, 0LL);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 146;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnColorizationUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 147;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnAlphaUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 148;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnTitleUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 149;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnIconUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 150;
    goto LABEL_30;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    inserted = CWindowIconic::SetBitmap(
                 this,
                 *(struct CBitmapSource **)(*((_QWORD *)this + 9) + 392LL),
                 (*(_BYTE *)(*((_QWORD *)this + 9) + 606LL) & 2) != 0,
                 0);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v12 = 153;
      goto LABEL_30;
    }
  }
  inserted = CWindowIconic::LoadCentralImage(this);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 155;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnWindowStyleUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 156;
    goto LABEL_30;
  }
  inserted = CWindowIconic::UpdateSizeOrMargins(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v12 = 157;
    goto LABEL_30;
  }
  if ( *((_BYTE *)this + 20) )
    CTopLevelWindow::ShowWindow(*v4, 1);
  return v6;
}
