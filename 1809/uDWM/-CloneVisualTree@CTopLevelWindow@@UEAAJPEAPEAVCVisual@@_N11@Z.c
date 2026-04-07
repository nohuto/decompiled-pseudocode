/*
 * XREFs of ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002A800
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180027198 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002B19C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800114E8 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x1800195F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001B090 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x180021B3C (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024D50 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 *     ?SetCloneVisuals@AcrylicHostBackdrop@@QEAAJPEAVCVisual@@0@Z @ 0x18002ABA0 (-SetCloneVisuals@AcrylicHostBackdrop@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18002ABD0 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTree(CTopLevelWindow *this, struct CVisual **a2, char a3)
{
  CTopLevelWindow *v5; // rax
  CTopLevelWindow *v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  struct CVisual **v13; // rax
  struct CVisual *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // al
  CRenderDataVisual *v22; // rcx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // [rsp+20h] [rbp-28h]

  *((_BYTE *)this + 240) &= ~0x20u;
  *((_BYTE *)this + 240) |= 32 * a3;
  v5 = (CTopLevelWindow *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            840LL);
  if ( v5 )
    v6 = CTopLevelWindow::CTopLevelWindow(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1439u);
    goto LABEL_33;
  }
  v7 = CTopLevelWindow::Initialize(v6, *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), 1);
  v8 = v7;
  if ( v7 < 0 )
  {
    v37 = 5178;
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v37);
    goto LABEL_33;
  }
  *a2 = v6;
  _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  v7 = CVisual::CloneVisualTree(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v37 = 5182;
    goto LABEL_53;
  }
  LOBYTE(v9) = (*((_BYTE *)this + 241) & 8) != 0;
  if ( (*((_BYTE *)this + 241) & 8) != 0 )
  {
    v7 = CTopLevelWindow::SetExcludeFromDDA(v6, v9);
    v8 = v7;
    if ( v7 < 0 )
    {
      v37 = 5187;
      goto LABEL_53;
    }
  }
  wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService(v10, v9, v11);
  v12 = **((_QWORD **)v6 + 6);
  if ( *((_BYTE *)this + 824) )
  {
    *((_QWORD *)v6 + 32) = v12;
  }
  else
  {
    v13 = *(struct CVisual ***)(v12 + 48);
    v14 = *v13;
    v7 = AcrylicHostBackdrop::SetCloneVisuals(*((AcrylicHostBackdrop **)v6 + 102), (struct CVisual *)v12, *v13);
    v8 = v7;
    if ( v7 < 0 )
    {
      v37 = 5199;
      goto LABEL_53;
    }
    *((_QWORD *)v6 + 32) = **((_QWORD **)v14 + 6);
    v12 = **((_QWORD **)v14 + 6);
  }
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  if ( (unsigned __int64)(*((_QWORD *)this + 101) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    VisualCollection::Remove(
      (VisualCollection *)(*((_QWORD *)v6 + 32) + 32LL),
      *(struct CVisual **)(*(_QWORD *)(*((_QWORD *)v6 + 32) + 48LL)
                         + 8LL * (unsigned int)(*(_DWORD *)(*((_QWORD *)v6 + 32) + 72LL) - 1)));
  v15 = *((_QWORD *)this + 67);
  if ( v15 && (*(_BYTE *)(v15 + 84) & 8) == 0 )
  {
    v16 = *((_QWORD *)v6 + 32);
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v16 + 72) - 1));
    *((_QWORD *)v6 + 67) = v17;
    v18 = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v16 + 72) - 1));
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      v17 = *((_QWORD *)v6 + 67);
    }
    *((_QWORD *)v6 + 66) = **(_QWORD **)(v17 + 48);
    v19 = *(_QWORD *)(v17 + 48);
    if ( *(_QWORD *)v19 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v19 + 8LL));
  }
  v20 = *((_QWORD *)this + 64);
  if ( v20 )
  {
    if ( (*(_BYTE *)(v20 + 84) & 8) == 0 )
    {
      v28 = *((_QWORD *)this + 34);
      if ( v28 )
      {
        if ( (*(_BYTE *)(v28 + 84) & 8) == 0 )
        {
          v29 = *((_QWORD *)this + 35);
          if ( !v29 || (*(_BYTE *)(v29 + 84) & 8) != 0 )
            v30 = 0LL;
          else
            v30 = 8LL;
          v31 = *((_QWORD *)this + 36);
          if ( !v31 || (*(_BYTE *)(v31 + 84) & 8) != 0 )
            v32 = 0LL;
          else
            v32 = 8LL;
          v33 = *((_QWORD *)this + 33);
          if ( !v33 || (*(_BYTE *)(v33 + 84) & 8) != 0 )
            v34 = 0LL;
          else
            v34 = 8LL;
          v35 = *(_QWORD *)(v32 + v34 + *(_QWORD *)(*((_QWORD *)v6 + 32) + 48LL) + v30);
          if ( v35 )
          {
            *((_QWORD *)v6 + 64) = **(_QWORD **)(v35 + 48);
            v36 = *(_QWORD *)(v35 + 48);
            if ( *(_QWORD *)v36 )
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v36 + 8LL));
          }
        }
      }
    }
  }
  v21 = *((_BYTE *)v6 + 240);
  *(_OWORD *)((char *)v6 + 588) = *(_OWORD *)((char *)this + 588);
  *(_OWORD *)((char *)v6 + 604) = *(_OWORD *)((char *)this + 604);
  *(_OWORD *)((char *)v6 + 620) = *(_OWORD *)((char *)this + 620);
  *(_OWORD *)((char *)v6 + 636) = *(_OWORD *)((char *)this + 636);
  *(_OWORD *)((char *)v6 + 652) = *(_OWORD *)((char *)this + 652);
  *((_BYTE *)v6 + 240) ^= (*((_BYTE *)this + 240) ^ v21) & 8;
  *((_BYTE *)v6 + 241) ^= (*((_BYTE *)this + 241) ^ *((_BYTE *)v6 + 241)) & 2;
  if ( (*((_BYTE *)this + 240) & 0x20) == 0 )
  {
    v22 = (CRenderDataVisual *)*((_QWORD *)this + 35);
    if ( v22 )
      CRenderDataVisual::ClearInstructions(v22);
    CTopLevelWindow::SetShadowOpacity(v6, 0.0);
    v23 = (CBaseObject *)*((_QWORD *)this + 68);
    if ( v23 )
    {
      CBaseObject::Release(v23);
      *((_QWORD *)this + 68) = 0LL;
    }
    v24 = (CBaseObject *)*((_QWORD *)this + 69);
    if ( v24 )
    {
      CBaseObject::Release(v24);
      *((_QWORD *)this + 69) = 0LL;
    }
    v25 = (CBaseObject *)*((_QWORD *)this + 71);
    if ( v25 )
    {
      CBaseObject::Release(v25);
      *((_QWORD *)this + 71) = 0LL;
    }
    v26 = (CBaseObject *)*((_QWORD *)this + 72);
    if ( v26 )
    {
      CBaseObject::Release(v26);
      *((_QWORD *)this + 72) = 0LL;
    }
    CVisual::SetDirtyFlags(this, 0x4000);
  }
LABEL_33:
  *((_BYTE *)this + 240) &= ~0x20u;
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
