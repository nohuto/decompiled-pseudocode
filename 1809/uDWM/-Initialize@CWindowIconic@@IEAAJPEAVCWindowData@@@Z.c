/*
 * XREFs of ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18008D950 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x180012688 (--0CWindowData@@QEAA@XZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019C10 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001B660 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180021A40 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180022580 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800387A4 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18007BC7C (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18008DF2C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E0B8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E150 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E264 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E3B0 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E460 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008E588 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008E688 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18008EA40 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowIconic::Initialize(CWindowIconic *this, struct CWindowData *a2)
{
  CWindowData *v3; // rax
  unsigned int v4; // ebx
  int v5; // r9d
  CTopLevelWindow **v6; // rsi
  int inserted; // eax
  struct CVisual **v8; // r15
  char *v9; // r14
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 4) = 5;
  v3 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        744LL);
  if ( v3 )
    v3 = CWindowData::CWindowData(v3);
  *((_QWORD *)this + 10) = v3;
  if ( !v3 )
  {
    v4 = -2147024882;
    v12 = 101;
    v5 = -2147024882;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v12);
    return v4;
  }
  v6 = (CTopLevelWindow **)((char *)this + 88);
  inserted = CTopLevelWindow::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
               (struct CTopLevelWindow **)this + 11);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 106;
LABEL_8:
    v5 = inserted;
    goto LABEL_5;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 392LL) = *v6;
  if ( *v6 )
    _InterlockedIncrement((volatile signed __int32 *)*v6 + 2);
  v8 = (struct CVisual **)((char *)this + 104);
  *(_QWORD *)(*((_QWORD *)this + 10) + 432LL) = this;
  *((_QWORD *)*v6 + 90) = *((_QWORD *)this + 10);
  *((_BYTE *)*v6 + 240) |= 0x40u;
  *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 40LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 597LL) |= 0x10u;
  inserted = CCanvasVisual::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
               (struct CCanvasVisual **)this + 13);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 134;
    goto LABEL_8;
  }
  inserted = CImage::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
               (struct CImage **)this + 12);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 135;
    goto LABEL_8;
  }
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)*v8 + 32),
               *((struct CVisual **)this + 12),
               0LL,
               0,
               1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 136;
    goto LABEL_8;
  }
  v9 = (char *)this + 112;
  inserted = CClientArea::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
               0,
               (struct CClientArea **)this + 14);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 137;
    goto LABEL_8;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v9 + 32LL), *v8, 0LL, 0, 1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 138;
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
  if ( v10 )
    LODWORD(v10) = *(_DWORD *)(v10 + 24);
  *(_DWORD *)(*((_QWORD *)this + 10) + 128LL) = v10;
  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 37),
    this,
    (enum IconicRepresentationType *)&v13);
  inserted = CWindowIconic::SetRepresentationType(this, v13, 0LL);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 146;
    goto LABEL_8;
  }
  inserted = CWindowIconic::OnColorizationUpdated(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 147;
    goto LABEL_8;
  }
  inserted = CWindowIconic::OnAlphaUpdated(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 148;
    goto LABEL_8;
  }
  inserted = CWindowIconic::OnTitleUpdated(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 149;
    goto LABEL_8;
  }
  inserted = CWindowIconic::OnIconUpdated(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 150;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    inserted = CWindowIconic::SetBitmap(
                 this,
                 *(struct CBitmapSource **)(*((_QWORD *)this + 9) + 384LL),
                 (*(_BYTE *)(*((_QWORD *)this + 9) + 598LL) & 2) != 0,
                 0);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v12 = 153;
      goto LABEL_8;
    }
  }
  inserted = CWindowIconic::LoadCentralImage(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 155;
    goto LABEL_8;
  }
  inserted = CWindowIconic::OnWindowStyleUpdated(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 156;
    goto LABEL_8;
  }
  inserted = CWindowIconic::UpdateSizeOrMargins(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 157;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 20) )
    CTopLevelWindow::ShowWindow(*v6, 1);
  return v4;
}
