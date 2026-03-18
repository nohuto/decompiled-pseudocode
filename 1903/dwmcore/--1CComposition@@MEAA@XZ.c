/*
 * XREFs of ??1CComposition@@MEAA@XZ @ 0x180176B24
 * Callers:
 *     ??_ECComposition@@MEAAPEAXI@Z @ 0x180177080 (--_ECComposition@@MEAAPEAXI@Z.c)
 *     ??_ECGlobalComposition@@EEAAPEAXI@Z @ 0x1801A36C0 (--_ECGlobalComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x180024EF8 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x180027C98 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180040280 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18007EF74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800BCC60 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?Reset@CComposition@@UEAAXXZ @ 0x1800D82C0 (-Reset@CComposition@@UEAAXXZ.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DCF2C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x180159BC8 (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 *     ??1CWetInkManager@@QEAA@XZ @ 0x180176F74 (--1CWetInkManager@@QEAA@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180177B7C (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180177BAC (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x180177DF8 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x18017BB24 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180188C10 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

void __fastcall CComposition::~CComposition(CComposition *this, int a2)
{
  unsigned int i; // ebx
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rsi
  CSceneResourceManager *v7; // rbx
  int v8; // ebx
  CD3DDeviceLevel1 *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rsi
  CCursorVisualReference *v13; // rcx
  unsigned int j; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  CDirtyRegion *v20; // rcx
  __int64 v21; // rcx
  CDirtyRegion *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  Microsoft::Bamo::BaseBamoConnection *v25; // rcx
  CGdiSpriteBitmap *v26; // rcx
  void *v27; // rcx
  void *v28; // rbx
  void *v29; // rbx
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CComposition::`vftable';
  CComposition::Reset(this, a2);
  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
    CDirtyRegion::Release(*(CDirtyRegion **)(*((_QWORD *)this + 50) + 8LL * i));
  *((_DWORD *)this + 106) = 0;
  v4 = *((_DWORD *)this + 88);
  if ( v4 )
  {
    v5 = 0LL;
    v6 = v4;
    do
    {
      v30 = *(struct _RTL_CRITICAL_SECTION **)(v5 + *((_QWORD *)this + 41));
      ReleaseInterface<CProcessAttribution>((CDirtyRegion **)&v30);
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  *((_DWORD *)this + 88) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 328, 8u);
  CComposition::ReleaseNotificationChannels(this);
  v7 = (CSceneResourceManager *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v7 )
  {
    CSceneResourceManager::~CSceneResourceManager(v7);
    operator delete(v7);
  }
  v30 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  v8 = qword_180340430;
  BYTE4(qword_180340430) = 1;
  while ( v8 )
  {
    v9 = *(CD3DDeviceLevel1 **)(qword_1803403E0 + 24LL * (unsigned int)--v8);
    *((_DWORD *)v9 + 220) = -2003304307;
    CD3DDeviceLevel1::ProcessDeviceLost(v9);
  }
  CD3DDeviceManager::DeleteUnusableDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  BYTE4(qword_180340430) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v30);
  *((_DWORD *)this + 164) = 0;
  v10 = *((_DWORD *)this + 234);
  if ( v10 )
  {
    v11 = 0LL;
    v12 = v10;
    do
    {
      v13 = *(CCursorVisualReference **)(v11 + *((_QWORD *)this + 114));
      if ( v13 )
        CCursorVisualReference::`scalar deleting destructor'(v13);
      v11 += 8LL;
      --v12;
    }
    while ( v12 );
  }
  *((_DWORD *)this + 234) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 912, 8u);
  *((_DWORD *)this + 242) = 0;
  for ( j = 0; j < *((_DWORD *)this + 182); ++j )
  {
    v15 = *(_QWORD *)(*((_QWORD *)this + 88) + 8LL * j);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  *((_DWORD *)this + 182) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 704, 8u);
  CComposition::UnmapDeferredSharedSectionViews(this);
  v16 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = *((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *((_QWORD *)this + 8);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v19 = *((_QWORD *)this + 9);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  v20 = (CDirtyRegion *)*((_QWORD *)this + 30);
  if ( v20 )
    CDirtyRegion::Release(v20);
  v21 = *((_QWORD *)this + 10);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = (CDirtyRegion *)*((_QWORD *)this + 12);
  if ( v22 )
    CDirtyRegion::Release(v22);
  v23 = *((_QWORD *)this + 11);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v24 = *((_QWORD *)this + 2);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  CThreadContext::DestroyObjectCaches();
  v25 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 158);
  if ( v25 )
  {
    *((_QWORD *)this + 158) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v25);
  }
  v26 = (CGdiSpriteBitmap *)*((_QWORD *)this + 154);
  if ( v26 )
  {
    *((_QWORD *)this + 154) = 0LL;
    CGdiSpriteBitmap::Release(v26);
  }
  operator delete(*((void **)this + 140));
  v27 = (void *)*((_QWORD *)this + 134);
  if ( v27 )
  {
    std::_Deallocate<16,0>(v27, (*((_QWORD *)this + 136) - (_QWORD)v27) & 0xFFFFFFFFFFFFFFF8uLL);
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
  v28 = (void *)*((_QWORD *)this + 16);
  if ( v28 )
  {
    CSceneResourceManager::~CSceneResourceManager(*((CSceneResourceManager **)this + 16));
    operator delete(v28);
  }
  v29 = (void *)*((_QWORD *)this + 13);
  if ( v29 )
  {
    CWetInkManager::~CWetInkManager(*((CWetInkManager **)this + 13));
    operator delete(v29);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 24);
}
