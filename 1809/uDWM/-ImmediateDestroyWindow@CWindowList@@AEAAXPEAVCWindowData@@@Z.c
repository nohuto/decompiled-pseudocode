/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020430
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B2F4 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180020E80 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18000A1BC (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000BD5C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18000F524 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800198B0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001CDE0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001F520 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180020D8C (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180020DC4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180020E38 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180023DEC (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180026BA0 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18002DC04 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x180039B54 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qp @ 0x18007826C (McTemplateU0qp.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x18007BDE8 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x18007C014 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18007C678 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008E588 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800ADCA0 (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  struct CSecondaryWindowRepresentation **v4; // rax
  struct CSecondaryWindowRepresentation *v5; // rdx
  CBaseObject *v6; // rcx
  bool v7; // r8
  unsigned int i; // edi
  CWindowData *v9; // rcx
  CBaseObject *v10; // rcx
  int j; // eax
  CDesktopManager *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  CWindowPropertyTracker *v15; // rsi
  unsigned int v16; // r8d
  signed int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rbp
  int v20; // edi
  _QWORD *v21; // r15
  __int64 v22; // r14
  __int64 v23; // rsi
  CBaseObject *v24; // rcx
  struct CVisual *v25; // rdx
  __int64 v26; // rax
  CBaseObject *v27; // rcx
  unsigned int k; // edi
  __int64 v29; // rcx
  CBaseObject *v30; // rcx
  struct CVisual *v31; // rdi
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  unsigned __int64 v33; // rcx
  CBaseObject *v34; // rcx
  struct CVisual *v35; // rdi
  struct CRenderDataVisual *v36; // rax
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdi
  CBaseObject *v41; // rax
  __int64 v42; // rcx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v43; // rdi
  unsigned int v44; // ecx
  __int64 v45; // rsi
  unsigned int v46; // r8d
  __int64 v47; // r9
  unsigned int v48; // edx
  unsigned int v49; // r8d
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v50; // rdi
  unsigned int v51; // ecx
  __int64 v52; // r9
  unsigned int v53; // edx
  unsigned int m; // edi
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdi
  CWindowIconic *v59; // rdi
  __int64 v60; // rcx
  CBaseObject *v61; // rcx
  unsigned int v62; // ecx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rcx
  struct CWindowData *v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rdx
  struct CWindowData *v73; // [rsp+68h] [rbp+10h] BYREF

  v73 = a2;
  if ( (*((_BYTE *)a2 + 598) & 1) != 0 )
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 58, &v73);
  while ( *((_DWORD *)a2 + 126) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 60));
  while ( *((_DWORD *)a2 + 134) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 64));
  CWindowList::SetOwner(this, a2, 0LL);
  while ( *((_DWORD *)a2 + 116) )
  {
    v4 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 55);
    v5 = *v4;
    if ( a2 == *((struct CWindowData **)*v4 + 4) )
      *((_QWORD *)v5 + 4) = 0LL;
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v5);
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 28) - 8) > 3 )
    CWindowData::IsShellManaged(a2);
  v6 = (CBaseObject *)*((_QWORD *)a2 + 53);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)a2 + 53) = 0LL;
    for ( i = 0; i < *((_DWORD *)a2 + 144); ++i )
    {
      v9 = *(CWindowData **)(*((_QWORD *)a2 + 69) + 8LL * i);
      if ( (*((_DWORD *)v9 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v9, 0, v7, 0);
    }
  }
  v10 = (CBaseObject *)*((_QWORD *)a2 + 54);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)a2 + 54) = 0LL;
  }
  for ( j = *((_DWORD *)a2 + 144); j; j = *((_DWORD *)a2 + 144) )
    CWindowList::SetOwner(v10, *(struct CWindowData **)(*((_QWORD *)a2 + 69) + 8LL * (unsigned int)(j - 1)), 0LL);
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64), a2, 0LL, 1);
  v12 = CDesktopManager::s_pDesktopManagerInstance;
  v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  if ( v13 )
  {
    v14 = *((_QWORD *)a2 + 5);
    v15 = (CWindowPropertyTracker *)(v13 + 48);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v16 = *((_DWORD *)v15 + 6);
    v17 = 0;
    if ( v16 )
    {
      while ( **(_QWORD **)(*(_QWORD *)v15 + 8LL * (unsigned int)v17) != v14 )
      {
        if ( ++v17 >= v16 )
          goto LABEL_29;
      }
      if ( v17 >= 0 )
        CWindowPropertyTracker::_StopTrackingWindowByIndex(v15, v17);
    }
LABEL_29:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v12 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v18 = *((_QWORD *)v12 + 31);
  if ( v18 )
  {
    v19 = *((_QWORD *)a2 + 49);
    if ( v19 )
    {
      v20 = *(_DWORD *)(v18 + 48) - 1;
      if ( v20 >= 0 )
      {
        v21 = (_QWORD *)(v18 + 24);
        v22 = 24LL * v20;
        do
        {
          v23 = v22 + *v21;
          v24 = *(CBaseObject **)v23;
          if ( *(_QWORD *)v23 == v19 )
          {
            v25 = *(struct CVisual **)(v23 + 8);
            v26 = *((_QWORD *)v25 + 3);
            if ( v26 && *(_BYTE *)(v23 + 16) )
            {
              VisualCollection::Remove((VisualCollection *)(v26 + 32), v25);
              v24 = *(CBaseObject **)v23;
            }
            if ( v24 )
              CBaseObject::Release(v24);
            v27 = *(CBaseObject **)(v23 + 8);
            if ( v27 )
              CBaseObject::Release(v27);
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(v21, (unsigned int)v20);
          }
          v22 -= 24LL;
          --v20;
        }
        while ( v20 >= 0 );
        v12 = CDesktopManager::s_pDesktopManagerInstance;
      }
    }
  }
  for ( k = 0; k < *((_DWORD *)v12 + 194); ++k )
  {
    v29 = *(_QWORD *)(*((_QWORD *)v12 + 94) + 8LL * k);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v29 + 192LL))(v29, a2);
  }
  v30 = (CBaseObject *)*((_QWORD *)a2 + 73);
  if ( v30 )
  {
    CBaseObject::Release(v30);
    *((_QWORD *)a2 + 73) = 0LL;
  }
  v31 = (struct CVisual *)*((_QWORD *)a2 + 50);
  if ( v31 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32), v31);
    v33 = *((_QWORD *)a2 + 50);
    if ( v33 )
      CTopLevelWindow3D::StopAnimation(v33);
    v34 = (CBaseObject *)*((_QWORD *)a2 + 50);
    if ( v34 )
    {
      CBaseObject::Release(v34);
      *((_QWORD *)a2 + 50) = 0LL;
    }
  }
  v35 = (struct CVisual *)*((_QWORD *)a2 + 49);
  if ( v35 )
  {
    v36 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)v36 + 32), v35);
    v37 = (CBaseObject *)*((_QWORD *)a2 + 49);
    if ( v37 )
    {
      CBaseObject::Release(v37);
      *((_QWORD *)a2 + 49) = 0LL;
    }
  }
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v38 = (CBaseObject *)*((_QWORD *)a2 + 51);
  if ( v38 )
  {
    v39 = *((_QWORD *)v38 + 3);
    if ( v39 )
    {
      VisualCollection::Remove((VisualCollection *)(v39 + 32), *((struct CVisual **)a2 + 51));
      v38 = (CBaseObject *)*((_QWORD *)a2 + 51);
    }
    if ( v38 )
    {
      CBaseObject::Release(v38);
      *((_QWORD *)a2 + 51) = 0LL;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  v40 = *((_QWORD *)a2 + 49);
  if ( v40 )
  {
    if ( (*(_BYTE *)(v40 + 241) & 4) != 0 )
      CTopLevelWindow::ReleaseHolographicSlate(*((CTopLevelWindow **)a2 + 49));
    v41 = *(CBaseObject **)(v40 + 472);
    if ( v41 )
    {
      v42 = *((_QWORD *)v41 + 3);
      if ( v42 )
      {
        VisualCollection::Remove((VisualCollection *)(v42 + 32), *(struct CVisual **)(v40 + 472));
        v41 = *(CBaseObject **)(v40 + 472);
      }
      if ( v41 )
      {
        CBaseObject::Release(v41);
        *(_QWORD *)(v40 + 472) = 0LL;
      }
    }
  }
  if ( *((_DWORD *)a2 + 32) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    *((_DWORD *)a2 + 32) = 0;
  }
  v43 = 0LL;
  v44 = 0;
  v45 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 38);
  v46 = *(_DWORD *)(v45 + 40);
  if ( v46 )
  {
    v47 = *(_QWORD *)(v45 + 16);
    while ( **(_QWORD **)(v47 + 8LL * v44) != *((_QWORD *)a2 + 5) )
    {
      if ( ++v44 >= v46 )
        goto LABEL_78;
    }
    v43 = *(CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)(v47 + 8LL * v44);
  }
LABEL_78:
  v73 = v43;
  if ( v43 )
  {
    DynArray<CBitmapSource *,0>::Remove(v45 + 16, &v73);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v43, v48);
  }
  v49 = *(_DWORD *)(v45 + 40);
  v50 = 0LL;
  v51 = 0;
  if ( v49 )
  {
    v52 = *(_QWORD *)(v45 + 16);
    while ( **(_QWORD **)(v52 + 8LL * v51) != *((_QWORD *)a2 + 5) )
    {
      if ( ++v51 >= v49 )
        goto LABEL_86;
    }
    v50 = *(CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)(v52 + 8LL * v51);
  }
LABEL_86:
  v73 = v50;
  if ( v50 )
  {
    DynArray<CBitmapSource *,0>::Remove(v45 + 16, &v73);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v50, v53);
  }
  for ( m = 0; m < *(_DWORD *)(v45 + 72); ++m )
  {
    v55 = *(_QWORD *)(*(_QWORD *)(v45 + 48) + 8LL * m);
    v56 = *(_QWORD *)(v55 + 296);
    if ( v56 )
      v57 = *(_QWORD *)(v56 + 40);
    else
      v57 = 0LL;
    if ( *((_QWORD *)a2 + 5) == v57 )
      CIconicAnimatedVisual::SetIconicData(v55, 0LL, 0LL, 0LL);
  }
  v58 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 37);
  *((_BYTE *)a2 + 598) &= 0xF1u;
  CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)v58, a2, 0);
  v73 = a2;
  if ( a2 == (struct CWindowData *)-1LL )
  {
    *(_BYTE *)(v58 + 88) = 0;
    v59 = *(CWindowIconic **)(v58 + 96);
  }
  else
  {
    if ( !(unsigned int)DynArray<CWindowData *,0>::Remove((__int64 *)(v58 + 16), &v73) && !*((_QWORD *)a2 + 48) )
      goto LABEL_103;
    CWindowData::SetIconicBitmap(a2, 0LL);
    v59 = (CWindowIconic *)*((_QWORD *)a2 + 54);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(v60, &UdwmManageIconicThumbnail_Info, 2LL);
  }
  if ( v59 )
    CWindowIconic::SetBitmap(v59, 0LL, 0, 1);
LABEL_103:
  v61 = (CBaseObject *)*((_QWORD *)a2 + 45);
  if ( v61 )
  {
    CBaseObject::Release(v61);
    *((_QWORD *)a2 + 45) = 0LL;
  }
  v62 = *((_DWORD *)this + 140);
  v63 = 0LL;
  if ( v62 )
  {
    while ( *(struct CWindowData **)(*((_QWORD *)this + 67) + 16LL * (unsigned int)v63) != a2 )
    {
      v63 = (unsigned int)(v63 + 1);
      if ( (unsigned int)v63 >= v62 )
        goto LABEL_114;
    }
    if ( (unsigned int)v63 < v62 )
    {
      v64 = *((_QWORD *)this + 67);
      if ( (unsigned int)v63 < v62 - 1 )
      {
        do
        {
          v65 = v63 + 1;
          v66 = 2LL * (unsigned int)v63;
          v67 = 2LL * (unsigned int)(v63 + 1);
          v63 = (unsigned int)(v63 + 1);
          *(_OWORD *)(v64 + 8 * v66) = *(_OWORD *)(v64 + 8 * v67);
          v62 = *((_DWORD *)this + 140);
        }
        while ( v65 < v62 - 1 );
      }
      *((_DWORD *)this + 140) = v62 - 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u);
    }
  }
LABEL_114:
  v68 = (struct CWindowData *)*((_QWORD *)a2 + 2);
  if ( v68 != (struct CWindowData *)((char *)a2 + 690) )
    (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v68,
      v63);
  v69 = *((_QWORD *)a2 + 69);
  if ( v69 != *((_QWORD *)a2 + 70) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v69,
      v63);
    *((_QWORD *)a2 + 69) = 0LL;
  }
  v70 = *((_QWORD *)a2 + 64);
  if ( v70 != *((_QWORD *)a2 + 65) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v70,
      v63);
    *((_QWORD *)a2 + 64) = 0LL;
  }
  v71 = *((_QWORD *)a2 + 60);
  if ( v71 != *((_QWORD *)a2 + 61) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v71,
      v63);
    *((_QWORD *)a2 + 60) = 0LL;
  }
  v72 = *((_QWORD *)a2 + 55);
  if ( v72 != *((_QWORD *)a2 + 56) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v72,
      v63);
    *((_QWORD *)a2 + 55) = 0LL;
  }
  (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a2,
    v63);
}
