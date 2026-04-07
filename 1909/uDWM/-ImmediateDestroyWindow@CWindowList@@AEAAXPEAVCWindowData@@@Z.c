/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012D6C
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18000F808 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012890 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180011E0C (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x1800129D8 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x180012A84 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180012AE0 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180012B04 (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x180012B60 (--1CWindowData@@QEAA@XZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180012C64 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180012CD8 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180014254 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x1800145D8 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180014D9C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180018A54 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020FF0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180025694 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180032A1C (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x1800331C8 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x18008203C (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x180082684 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800B1BC0 (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  int v6; // eax
  CDesktopManager *v7; // rbx
  __int64 v8; // rcx
  CTransitionVisualController *v9; // rcx
  unsigned int j; // esi
  CBaseObject *v11; // rcx
  struct CVisual *v12; // rbx
  struct CVisual *v13; // rbx
  CBaseObject *v14; // rax
  __int64 v15; // rsi
  HWND v16; // rdx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v17; // rbp
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v18; // rbp
  unsigned int k; // ebx
  CIconicBitmapRegistry *v20; // rbx
  CBaseObject *v21; // rcx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  CTopLevelWindow3D *v23; // rcx
  CBaseObject *v24; // rcx
  struct CRenderDataVisual *v25; // rax
  CBaseObject *v26; // rcx
  bool v27; // r8
  unsigned int i; // ebx
  struct CSecondaryWindowRepresentation **v29; // rax
  struct CSecondaryWindowRepresentation *v30; // rdx
  CWindowData *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // edx
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+48h] [rbp+10h] BYREF

  IconicResourceNoRef = a2;
  if ( (*((_BYTE *)a2 + 606) & 1) != 0 )
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 58, &IconicResourceNoRef);
  while ( *((_DWORD *)a2 + 128) )
    CWindowList::UnregisterThumbnail(this, **((struct CThumbnailData ***)a2 + 61));
  while ( *((_DWORD *)a2 + 136) )
    CWindowList::UnregisterThumbnail(this, **((struct CThumbnailData ***)a2 + 65));
  CWindowList::SetOwner(this, a2, 0LL);
  while ( *((_DWORD *)a2 + 118) )
  {
    v29 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 56);
    v30 = *v29;
    if ( a2 == *((struct CWindowData **)*v29 + 4) )
      *((_QWORD *)v30 + 4) = 0LL;
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v30);
  }
  CWindowData::IsImmersiveWindow(a2);
  v4 = (CBaseObject *)*((_QWORD *)a2 + 54);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)a2 + 54) = 0LL;
    for ( i = 0; i < *((_DWORD *)a2 + 146); ++i )
    {
      v31 = *(CWindowData **)(*((_QWORD *)a2 + 70) + 8LL * i);
      if ( (*((_DWORD *)v31 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v31, 0, v27, 0);
    }
  }
  v5 = (CBaseObject *)*((_QWORD *)a2 + 55);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)a2 + 55) = 0LL;
  }
  while ( 1 )
  {
    v6 = *((_DWORD *)a2 + 146);
    if ( !v6 )
      break;
    CWindowList::SetOwner(v5, *(struct CWindowData **)(*((_QWORD *)a2 + 70) + 8LL * (unsigned int)(v6 - 1)), 0LL);
  }
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64), a2, 0LL, 1);
  v7 = CDesktopManager::s_pDesktopManagerInstance;
  v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  if ( v8 )
  {
    CWindowPropertyTracker::StopTrackingWindowImmediately((CWindowPropertyTracker *)(v8 + 48), *((HWND *)a2 + 5));
    v7 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v9 = (CTransitionVisualController *)*((_QWORD *)v7 + 31);
  if ( v9 )
  {
    CTransitionVisualController::RemoveTLWClone(v9, *((const struct CTopLevelWindow **)a2 + 50), 0, 1);
    v7 = CDesktopManager::s_pDesktopManagerInstance;
  }
  for ( j = 0; j < *((_DWORD *)v7 + 194); ++j )
  {
    v32 = *(_QWORD *)(*((_QWORD *)v7 + 94) + 8LL * j);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v32 + 192LL))(v32, a2);
  }
  v11 = (CBaseObject *)*((_QWORD *)a2 + 74);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)a2 + 74) = 0LL;
  }
  v12 = (struct CVisual *)*((_QWORD *)a2 + 51);
  if ( v12 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32), v12);
    v23 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 51);
    if ( v23 )
      CTopLevelWindow3D::StopAnimation(v23);
    v24 = (CBaseObject *)*((_QWORD *)a2 + 51);
    if ( v24 )
    {
      CBaseObject::Release(v24);
      *((_QWORD *)a2 + 51) = 0LL;
    }
  }
  v13 = (struct CVisual *)*((_QWORD *)a2 + 50);
  if ( v13 )
  {
    v25 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)v25 + 32), v13);
    v26 = (CBaseObject *)*((_QWORD *)a2 + 50);
    if ( v26 )
    {
      CBaseObject::Release(v26);
      *((_QWORD *)a2 + 50) = 0LL;
    }
  }
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = (CBaseObject *)*((_QWORD *)a2 + 52);
  if ( v14 )
  {
    v33 = *((_QWORD *)v14 + 3);
    if ( v33 )
    {
      VisualCollection::Remove((VisualCollection *)(v33 + 32), *((struct CVisual **)a2 + 52));
      v14 = (CBaseObject *)*((_QWORD *)a2 + 52);
    }
    if ( v14 )
    {
      CBaseObject::Release(v14);
      *((_QWORD *)a2 + 52) = 0LL;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  CWindowData::ForceDisconnectClientNode(a2);
  v15 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 38);
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                          (CImmersiveIconicBitmapRegistry *)v15,
                          *((HWND *)a2 + 5));
  v17 = IconicResourceNoRef;
  if ( IconicResourceNoRef )
  {
    DynArray<CBitmapSource *,0>::Remove(v15 + 16, &IconicResourceNoRef);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v17, v34);
    v16 = (HWND)*((_QWORD *)a2 + 5);
  }
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                          (CImmersiveIconicBitmapRegistry *)v15,
                          v16);
  v18 = IconicResourceNoRef;
  if ( IconicResourceNoRef )
  {
    DynArray<CBitmapSource *,0>::Remove(v15 + 16, &IconicResourceNoRef);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v18, v35);
  }
  for ( k = 0; k < *(_DWORD *)(v15 + 72); ++k )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(v15 + 48) + 8LL * k);
    v37 = *(_QWORD *)(v36 + 296);
    if ( v37 )
      v38 = *(_QWORD *)(v37 + 40);
    else
      v38 = 0LL;
    if ( *((_QWORD *)a2 + 5) == v38 )
      CIconicAnimatedVisual::SetIconicData(v36, 0LL, 0LL, 0LL);
  }
  v20 = (CIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 37);
  *((_BYTE *)a2 + 606) &= 0xF1u;
  CIconicBitmapRegistry::RequestBitmap(v20, a2, 0);
  CIconicBitmapRegistry::ClearBitmap(v20, (CWindowIconic **)a2);
  v21 = (CBaseObject *)*((_QWORD *)a2 + 46);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)a2 + 46) = 0LL;
  }
  CWindowList::UnregisterAccentState(this, a2);
  CWindowData::~CWindowData((CWindowData **)a2);
  (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a2);
}
