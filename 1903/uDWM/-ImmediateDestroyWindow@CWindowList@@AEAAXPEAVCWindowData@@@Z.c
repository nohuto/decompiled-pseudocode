/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012BE4
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800235F0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026464 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x1800057C8 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180010E90 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x180012850 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x1800128FC (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180012958 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001297C (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x1800129D8 (--1CWindowData@@QEAA@XZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180012ADC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180012B50 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180014220 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001450C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001468C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800182C0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180021D48 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180022FC8 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002507C (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x18002BAA8 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800365C0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x18008239C (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x1800829E4 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800B1F20 (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  int v8; // eax
  CDesktopManager *v9; // rbx
  __int64 v10; // rcx
  CTransitionVisualController *v11; // rcx
  unsigned int j; // esi
  CBaseObject *v13; // rcx
  struct CVisual *v14; // rbx
  struct CVisual *v15; // rbx
  CBaseObject *v16; // rax
  __int64 v17; // rsi
  HWND v18; // rdx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v19; // rbp
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v20; // rbp
  unsigned int k; // ebx
  CIconicBitmapRegistry *v22; // rbx
  CBaseObject *v23; // rcx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  CTopLevelWindow3D *v25; // rcx
  CBaseObject *v26; // rcx
  struct CRenderDataVisual *v27; // rax
  CBaseObject *v28; // rcx
  bool v29; // r8
  unsigned int i; // ebx
  struct CSecondaryWindowRepresentation **v31; // rax
  struct CSecondaryWindowRepresentation *v32; // rdx
  CWindowData *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // edx
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+48h] [rbp+10h] BYREF

  IconicResourceNoRef = a2;
  if ( (*((_BYTE *)a2 + 606) & 1) != 0 )
    DynArray<CWindowData *,0>::Remove((char *)this + 464, &IconicResourceNoRef);
  while ( *((_DWORD *)a2 + 128) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 61));
  while ( *((_DWORD *)a2 + 136) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 65));
  CWindowList::SetOwner(this, a2, 0LL);
  while ( *((_DWORD *)a2 + 118) )
  {
    v31 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 56);
    v32 = *v31;
    if ( a2 == *((struct CWindowData **)*v31 + 4) )
      *((_QWORD *)v32 + 4) = 0LL;
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v32, v4, v5);
  }
  CWindowData::IsImmersiveWindow(a2);
  v6 = (CBaseObject *)*((_QWORD *)a2 + 54);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)a2 + 54) = 0LL;
    for ( i = 0; i < *((_DWORD *)a2 + 146); ++i )
    {
      v33 = *(CWindowData **)(*((_QWORD *)a2 + 70) + 8LL * i);
      if ( (*((_DWORD *)v33 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v33, 0, v29, 0);
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)a2 + 55);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)a2 + 55) = 0LL;
  }
  while ( 1 )
  {
    v8 = *((_DWORD *)a2 + 146);
    if ( !v8 )
      break;
    CWindowList::SetOwner(v7, *(struct CWindowData **)(*((_QWORD *)a2 + 70) + 8LL * (unsigned int)(v8 - 1)), 0LL);
  }
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64), a2, 0LL, 1);
  v9 = CDesktopManager::s_pDesktopManagerInstance;
  v10 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  if ( v10 )
  {
    CWindowPropertyTracker::StopTrackingWindowImmediately((CWindowPropertyTracker *)(v10 + 48), *((HWND *)a2 + 5));
    v9 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v11 = (CTransitionVisualController *)*((_QWORD *)v9 + 31);
  if ( v11 )
  {
    CTransitionVisualController::RemoveTLWClone(v11, *((const struct CTopLevelWindow **)a2 + 50), 0, 1);
    v9 = CDesktopManager::s_pDesktopManagerInstance;
  }
  for ( j = 0; j < *((_DWORD *)v9 + 194); ++j )
  {
    v34 = *(_QWORD *)(*((_QWORD *)v9 + 94) + 8LL * j);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v34 + 192LL))(v34, a2);
  }
  v13 = (CBaseObject *)*((_QWORD *)a2 + 74);
  if ( v13 )
  {
    CBaseObject::Release(v13);
    *((_QWORD *)a2 + 74) = 0LL;
  }
  v14 = (struct CVisual *)*((_QWORD *)a2 + 51);
  if ( v14 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32), v14);
    v25 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 51);
    if ( v25 )
      CTopLevelWindow3D::StopAnimation(v25);
    v26 = (CBaseObject *)*((_QWORD *)a2 + 51);
    if ( v26 )
    {
      CBaseObject::Release(v26);
      *((_QWORD *)a2 + 51) = 0LL;
    }
  }
  v15 = (struct CVisual *)*((_QWORD *)a2 + 50);
  if ( v15 )
  {
    v27 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)v27 + 32), v15);
    v28 = (CBaseObject *)*((_QWORD *)a2 + 50);
    if ( v28 )
    {
      CBaseObject::Release(v28);
      *((_QWORD *)a2 + 50) = 0LL;
    }
  }
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v16 = (CBaseObject *)*((_QWORD *)a2 + 52);
  if ( v16 )
  {
    v35 = *((_QWORD *)v16 + 3);
    if ( v35 )
    {
      VisualCollection::Remove((VisualCollection *)(v35 + 32), *((struct CVisual **)a2 + 52));
      v16 = (CBaseObject *)*((_QWORD *)a2 + 52);
    }
    if ( v16 )
    {
      CBaseObject::Release(v16);
      *((_QWORD *)a2 + 52) = 0LL;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  CWindowData::ForceDisconnectClientNode(a2);
  v17 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 38);
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                          (CImmersiveIconicBitmapRegistry *)v17,
                          *((HWND *)a2 + 5));
  v19 = IconicResourceNoRef;
  if ( IconicResourceNoRef )
  {
    DynArray<CBitmapSource *,0>::Remove(v17 + 16, &IconicResourceNoRef);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v19, v36);
    v18 = (HWND)*((_QWORD *)a2 + 5);
  }
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                          (CImmersiveIconicBitmapRegistry *)v17,
                          v18);
  v20 = IconicResourceNoRef;
  if ( IconicResourceNoRef )
  {
    DynArray<CBitmapSource *,0>::Remove(v17 + 16, &IconicResourceNoRef);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v20, v37);
  }
  for ( k = 0; k < *(_DWORD *)(v17 + 72); ++k )
  {
    v38 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL * k);
    v39 = *(_QWORD *)(v38 + 296);
    if ( v39 )
      v40 = *(_QWORD *)(v39 + 40);
    else
      v40 = 0LL;
    if ( *((_QWORD *)a2 + 5) == v40 )
      CIconicAnimatedVisual::SetIconicData(v38, 0LL, 0LL, 0LL);
  }
  v22 = (CIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 37);
  *((_BYTE *)a2 + 606) &= 0xF1u;
  CIconicBitmapRegistry::RequestBitmap(v22, a2, 0);
  CIconicBitmapRegistry::ClearBitmap(v22, (CWindowIconic **)a2);
  v23 = (CBaseObject *)*((_QWORD *)a2 + 46);
  if ( v23 )
  {
    CBaseObject::Release(v23);
    *((_QWORD *)a2 + 46) = 0LL;
  }
  CWindowList::UnregisterAccentState(this, a2);
  CWindowData::~CWindowData((CWindowData **)a2);
  (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a2);
}
