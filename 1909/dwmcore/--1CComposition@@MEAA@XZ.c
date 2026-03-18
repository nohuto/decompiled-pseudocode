/*
 * XREFs of ??1CComposition@@MEAA@XZ @ 0x1801753B4
 * Callers:
 *     ??_ECComposition@@MEAAPEAXI@Z @ 0x180175910 (--_ECComposition@@MEAAPEAXI@Z.c)
 *     ??_ECGlobalComposition@@EEAAPEAXI@Z @ 0x1801A1E00 (--_ECGlobalComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18002CEC4 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800302D0 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x18004C7A8 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800626C0 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800A75F0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Reset@CComposition@@UEAAXXZ @ 0x1800D88D0 (-Reset@CComposition@@UEAAXXZ.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DDB9C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x1801584E8 (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 *     ??1CWetInkManager@@QEAA@XZ @ 0x180175804 (--1CWetInkManager@@QEAA@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18017640C (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18017643C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x180176688 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x18017A424 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180187530 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

void __fastcall CComposition::~CComposition(CComposition *this, int a2, __int64 a3)
{
  unsigned int i; // ebx
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rsi
  CSceneResourceManager *v8; // rbx
  int v9; // ebx
  CD3DDeviceLevel1 *v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rsi
  CCursorVisualReference *v14; // rcx
  unsigned int j; // ebx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  CDirtyRegion *v21; // rcx
  __int64 v22; // rcx
  CDirtyRegion *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  Microsoft::Bamo::BaseBamoConnection *v26; // rcx
  CGdiSpriteBitmap *v27; // rcx
  void *v28; // rcx
  void *v29; // rbx
  void *v30; // rbx
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CComposition::`vftable';
  CComposition::Reset(this, a2, a3);
  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
    CDirtyRegion::Release(*(CDirtyRegion **)(*((_QWORD *)this + 50) + 8LL * i));
  *((_DWORD *)this + 106) = 0;
  v5 = *((_DWORD *)this + 88);
  if ( v5 )
  {
    v6 = 0LL;
    v7 = v5;
    do
    {
      v31 = *(struct _RTL_CRITICAL_SECTION **)(v6 + *((_QWORD *)this + 41));
      ReleaseInterface<CProcessAttribution>((CDirtyRegion **)&v31);
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  *((_DWORD *)this + 88) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 328, 8u);
  CComposition::ReleaseNotificationChannels(this);
  v8 = (CSceneResourceManager *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v8 )
  {
    CSceneResourceManager::~CSceneResourceManager(v8);
    operator delete(v8);
  }
  v31 = &stru_18033D458;
  EnterCriticalSection(&stru_18033D458);
  v9 = qword_18033D510;
  BYTE4(qword_18033D510) = 1;
  while ( v9 )
  {
    v10 = *(CD3DDeviceLevel1 **)(qword_18033D4C0 + 24LL * (unsigned int)--v9);
    *((_DWORD *)v10 + 220) = -2003304307;
    CD3DDeviceLevel1::ProcessDeviceLost(v10);
  }
  CD3DDeviceManager::DeleteUnusableDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  BYTE4(qword_18033D510) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v31);
  *((_DWORD *)this + 164) = 0;
  v11 = *((_DWORD *)this + 234);
  if ( v11 )
  {
    v12 = 0LL;
    v13 = v11;
    do
    {
      v14 = *(CCursorVisualReference **)(v12 + *((_QWORD *)this + 114));
      if ( v14 )
        CCursorVisualReference::`scalar deleting destructor'(v14);
      v12 += 8LL;
      --v13;
    }
    while ( v13 );
  }
  *((_DWORD *)this + 234) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 912, 8u);
  *((_DWORD *)this + 242) = 0;
  for ( j = 0; j < *((_DWORD *)this + 182); ++j )
  {
    v16 = *(_QWORD *)(*((_QWORD *)this + 88) + 8LL * j);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  *((_DWORD *)this + 182) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 704, 8u);
  CComposition::UnmapDeferredSharedSectionViews(this);
  v17 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = *((_QWORD *)this + 8);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  v20 = *((_QWORD *)this + 9);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  v21 = (CDirtyRegion *)*((_QWORD *)this + 30);
  if ( v21 )
    CDirtyRegion::Release(v21);
  v22 = *((_QWORD *)this + 10);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = (CDirtyRegion *)*((_QWORD *)this + 12);
  if ( v23 )
    CDirtyRegion::Release(v23);
  v24 = *((_QWORD *)this + 11);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  v25 = *((_QWORD *)this + 2);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  CThreadContext::DestroyObjectCaches();
  v26 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 158);
  if ( v26 )
  {
    *((_QWORD *)this + 158) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v26);
  }
  v27 = (CGdiSpriteBitmap *)*((_QWORD *)this + 154);
  if ( v27 )
  {
    *((_QWORD *)this + 154) = 0LL;
    CGdiSpriteBitmap::Release(v27);
  }
  operator delete(*((void **)this + 140));
  v28 = (void *)*((_QWORD *)this + 134);
  if ( v28 )
  {
    std::_Deallocate<16,0>(v28, (*((_QWORD *)this + 136) - (_QWORD)v28) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 134) = 0LL;
    *((_QWORD *)this + 135) = 0LL;
    *((_QWORD *)this + 136) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1040);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1008);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 976);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 944);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 912);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 752);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 704);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 664);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 632);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 584);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 464);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 54);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 50);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 41);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 288);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 248);
  CMmcssTask::UnloadRuntime((CComposition *)((char *)this + 160));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 19);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 18);
  v29 = (void *)*((_QWORD *)this + 16);
  if ( v29 )
  {
    CSceneResourceManager::~CSceneResourceManager(*((CSceneResourceManager **)this + 16));
    operator delete(v29);
  }
  v30 = (void *)*((_QWORD *)this + 13);
  if ( v30 )
  {
    CWetInkManager::~CWetInkManager(*((CWetInkManager **)this + 13));
    operator delete(v30);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 24);
}
