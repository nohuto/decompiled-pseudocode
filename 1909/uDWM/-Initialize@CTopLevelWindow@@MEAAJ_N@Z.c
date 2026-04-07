/*
 * XREFs of ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x1800245C0
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024100 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180025F94 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180024840 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024918 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800255C0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Initialize@AcrylicHostBackdrop@@QEAAJXZ @ 0x180025AA4 (-Initialize@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180025CCC (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(struct CCanvasVisual **this, char a2)
{
  int inserted; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  struct CVisual **v7; // rsi
  struct CVisual **v8; // r15
  struct CVisual **v9; // r14
  struct CVisual **v10; // rbp
  CVisual *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct CVisual *v14; // rbp
  struct CVisual *v16; // rdx
  int v17; // r9d
  struct CVisual *v18; // rdx
  unsigned int v19; // [rsp+20h] [rbp-38h]
  void *v20; // [rsp+28h] [rbp-30h]
  struct _MARGINS v21; // [rsp+30h] [rbp-28h] BYREF

  inserted = CVisual::Initialize((CVisual *)this);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v19 = 171;
LABEL_26:
    v17 = inserted;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v19, v20);
    return v5;
  }
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 601LL) )
  {
    v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           32LL);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 8) = 1;
      *(_QWORD *)v6 = &AcrylicHostBackdrop::`vftable';
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_BYTE *)(v6 + 24) = a2;
    }
    this[102] = (struct CCanvasVisual *)v6;
    if ( !v6 )
    {
      v5 = -2147024882;
      v19 = 178;
      v17 = -2147024882;
      goto LABEL_28;
    }
    inserted = AcrylicHostBackdrop::Initialize((AcrylicHostBackdrop *)v6);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v19 = 180;
      goto LABEL_26;
    }
  }
  if ( a2 )
  {
    *((_BYTE *)this + 240) |= 8u;
    return v5;
  }
  v7 = this + 32;
  inserted = CCanvasVisual::Create(this + 32);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v19 = 185;
    goto LABEL_26;
  }
  v8 = this + 66;
  inserted = CCanvasVisual::Create(this + 66);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v19 = 186;
    goto LABEL_26;
  }
  v9 = this + 67;
  inserted = CCanvasVisual::Create(this + 67);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v19 = 187;
    goto LABEL_26;
  }
  v10 = this + 34;
  inserted = CTopLevelAtlasedRectsVisual::Create(this + 34);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v19 = 188;
    goto LABEL_26;
  }
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v7 + 32), *v10, 0LL, 0, 1);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v19 = 190;
    goto LABEL_26;
  }
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v7 + 32), *v9, 0LL, 0, 1);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v19 = 191;
    goto LABEL_26;
  }
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v9 + 32), *v8, 0LL, 0, 1);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v19 = 192;
    goto LABEL_26;
  }
  v11 = *v8;
  *(_QWORD *)&v21.cxLeftWidth = 0LL;
  *(_QWORD *)&v21.cyTopHeight = 0LL;
  CVisual::SetInsetFromParent(v11, &v21);
  CVisual::SetInsetFromParent(*v10, &v21);
  if ( !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 601LL) )
  {
    v16 = *v7;
    *((_BYTE *)this + 824) = 1;
    inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), v16, 0LL, 0, 0);
    v5 = inserted;
    if ( inserted >= 0 )
      goto LABEL_20;
    v19 = 221;
    goto LABEL_26;
  }
  v12 = *((_QWORD *)this[102] + 2);
  v13 = *(_QWORD *)(v12 + 56);
  if ( !v13 || (v14 = *(struct CVisual **)(v12 + 16)) == 0LL )
  {
    v18 = *v7;
    *((_BYTE *)this + 824) = 1;
    inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), v18, 0LL, 0, 0);
    v5 = inserted;
    if ( inserted >= 0 )
      goto LABEL_20;
    v19 = 215;
    goto LABEL_26;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(v13 + 32), *v7, 0LL, 0, 0);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v19 = 207;
    goto LABEL_26;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), v14, 0LL, 0, 1);
  v5 = inserted;
  if ( inserted < 0 )
  {
    v19 = 208;
    goto LABEL_26;
  }
LABEL_20:
  *((_DWORD *)*v9 + 48) = -1;
  return v5;
}
