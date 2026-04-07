/*
 * XREFs of ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024100
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180007B30 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180026F2C (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018130 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x1800245C0 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x18002602C (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x180037AC8 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18003AB5C (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?SetCloneVisuals@AcrylicHostBackdrop@@QEAAJPEAVCVisual@@0@Z @ 0x18003B41C (-SetCloneVisuals@AcrylicHostBackdrop@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x18003BCE8 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTree(CTopLevelWindow *this, struct CVisual **a2, char a3)
{
  CTopLevelWindow *v5; // rax
  CTopLevelWindow *v6; // rdi
  unsigned int v7; // esi
  int v8; // r9d
  int v9; // eax
  __int64 v10; // rdx
  struct CVisual **v11; // rax
  AcrylicHostBackdrop *v12; // rcx
  struct CVisual *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  char v30; // al
  CRenderDataVisual *v31; // rcx
  CBaseObject *v32; // rcx
  CBaseObject *v33; // rcx
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  unsigned int v37; // [rsp+20h] [rbp-28h]
  void *v38; // [rsp+28h] [rbp-20h]

  *((_BYTE *)this + 240) &= ~0x10u;
  *((_BYTE *)this + 240) |= 16 * a3;
  v5 = (CTopLevelWindow *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            848LL);
  if ( v5 )
    v6 = CTopLevelWindow::CTopLevelWindow(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v7 = -2147024882;
    v37 = 5060;
    v8 = -2147024882;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v37, v38);
    goto LABEL_61;
  }
  v9 = CTopLevelWindow::Initialize(v6, 1);
  v7 = v9;
  if ( v9 < 0 )
  {
    v37 = 5061;
LABEL_9:
    v8 = v9;
    goto LABEL_6;
  }
  *a2 = v6;
  _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  v9 = CVisual::CloneVisualTree(this, a2);
  v7 = v9;
  if ( v9 < 0 )
  {
    v37 = 5065;
    goto LABEL_9;
  }
  if ( (*((_BYTE *)this + 241) & 4) != 0 )
  {
    v9 = CTopLevelWindow::SetExcludeFromDDA(v6, (*((_BYTE *)this + 241) & 4) != 0);
    v7 = v9;
    if ( v9 < 0 )
    {
      v37 = 5070;
      goto LABEL_9;
    }
  }
  v10 = **((_QWORD **)v6 + 6);
  if ( *((_BYTE *)this + 824) )
  {
    *((_QWORD *)v6 + 32) = v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  }
  else
  {
    v11 = *(struct CVisual ***)(v10 + 48);
    v12 = (AcrylicHostBackdrop *)*((_QWORD *)v6 + 102);
    v13 = *v11;
    if ( v12 )
    {
      v9 = AcrylicHostBackdrop::SetCloneVisuals(v12, (struct CVisual *)v10, *v11);
      v7 = v9;
      if ( v9 < 0 )
      {
        v37 = 5087;
        goto LABEL_9;
      }
    }
    *((_QWORD *)v6 + 32) = **((_QWORD **)v13 + 6);
    v14 = *((_QWORD *)v13 + 6);
    if ( *(_QWORD *)v14 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v14 + 8LL));
  }
  if ( (unsigned __int64)(*((_QWORD *)this + 101) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    VisualCollection::Remove(
      (VisualCollection *)(*((_QWORD *)v6 + 32) + 32LL),
      *(struct CVisual **)(*(_QWORD *)(*((_QWORD *)v6 + 32) + 48LL)
                         + 8LL * (unsigned int)(*(_DWORD *)(*((_QWORD *)v6 + 32) + 72LL) - 1)));
  v15 = *((_QWORD *)this + 67);
  v16 = 8LL;
  if ( v15 && (*(_BYTE *)(v15 + 84) & 8) == 0 )
  {
    v17 = *((_QWORD *)v6 + 32);
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v17 + 72) - 1));
    *((_QWORD *)v6 + 67) = v18;
    v19 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v17 + 72) - 1));
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      v18 = *((_QWORD *)v6 + 67);
    }
    *((_QWORD *)v6 + 66) = **(_QWORD **)(v18 + 48);
    v20 = *(_QWORD *)(v18 + 48);
    if ( *(_QWORD *)v20 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v20 + 8LL));
  }
  v21 = *((_QWORD *)this + 64);
  if ( v21 )
  {
    if ( (*(_BYTE *)(v21 + 84) & 8) == 0 )
    {
      v22 = *((_QWORD *)this + 34);
      if ( v22 )
      {
        if ( (*(_BYTE *)(v22 + 84) & 8) == 0 )
        {
          v23 = *((_QWORD *)this + 35);
          if ( !v23 || (*(_BYTE *)(v23 + 84) & 8) != 0 )
            v24 = 0LL;
          else
            v24 = 8LL;
          v25 = *((_QWORD *)this + 36);
          if ( !v25 || (*(_BYTE *)(v25 + 84) & 8) != 0 )
            v26 = 0LL;
          else
            v26 = 8LL;
          v27 = *((_QWORD *)this + 33);
          if ( !v27 || (*(_BYTE *)(v27 + 84) & 8) != 0 )
            v16 = 0LL;
          v28 = *(_QWORD *)(v26 + v16 + *(_QWORD *)(*((_QWORD *)v6 + 32) + 48LL) + v24);
          if ( v28 )
          {
            *((_QWORD *)v6 + 64) = **(_QWORD **)(v28 + 48);
            v29 = *(_QWORD *)(v28 + 48);
            if ( *(_QWORD *)v29 )
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v29 + 8LL));
          }
        }
      }
    }
  }
  v30 = *((_BYTE *)v6 + 240);
  *(_OWORD *)((char *)v6 + 588) = *(_OWORD *)((char *)this + 588);
  *(_OWORD *)((char *)v6 + 604) = *(_OWORD *)((char *)this + 604);
  *(_OWORD *)((char *)v6 + 620) = *(_OWORD *)((char *)this + 620);
  *(_OWORD *)((char *)v6 + 636) = *(_OWORD *)((char *)this + 636);
  *(_OWORD *)((char *)v6 + 652) = *(_OWORD *)((char *)this + 652);
  *((_BYTE *)v6 + 240) ^= (*((_BYTE *)this + 240) ^ v30) & 4;
  *((_BYTE *)v6 + 241) ^= (*((_BYTE *)v6 + 241) ^ *((_BYTE *)this + 241)) & 1;
  if ( (*((_BYTE *)this + 240) & 0x10) == 0 )
  {
    CTopLevelWindow::ApplyCorrectionScaleForUniformSpaceWindow(v6, *((struct CWindowData **)this + 90));
    v31 = (CRenderDataVisual *)*((_QWORD *)this + 35);
    if ( v31 )
      CRenderDataVisual::ClearInstructions(v31);
    CTopLevelWindow::SetShadowOpacity(v6, 0.0);
    v32 = (CBaseObject *)*((_QWORD *)this + 68);
    if ( v32 )
    {
      CBaseObject::Release(v32);
      *((_QWORD *)this + 68) = 0LL;
    }
    v33 = (CBaseObject *)*((_QWORD *)this + 69);
    if ( v33 )
    {
      CBaseObject::Release(v33);
      *((_QWORD *)this + 69) = 0LL;
    }
    v34 = (CBaseObject *)*((_QWORD *)this + 71);
    if ( v34 )
    {
      CBaseObject::Release(v34);
      *((_QWORD *)this + 71) = 0LL;
    }
    v35 = (CBaseObject *)*((_QWORD *)this + 72);
    if ( v35 )
    {
      CBaseObject::Release(v35);
      *((_QWORD *)this + 72) = 0LL;
    }
    CVisual::SetDirtyFlags(this, 0x4000);
  }
LABEL_61:
  *((_BYTE *)this + 240) &= ~0x10u;
  if ( v6 )
    CBaseObject::Release(v6);
  return v7;
}
