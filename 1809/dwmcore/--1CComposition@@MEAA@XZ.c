/*
 * XREFs of ??1CComposition@@MEAA@XZ @ 0x18014A94C
 * Callers:
 *     ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x1801499A0 (--_ECCrossThreadComposition@@UEAAPEAXI@Z.c)
 *     ??_ECComposition@@MEAAPEAXI@Z @ 0x18014ADA0 (--_ECComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180028D00 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x180065D48 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007D080 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18008A1D4 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800EA37C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??_GCWetInkManager@@QEAAPEAXI@Z @ 0x18014AE64 (--_GCWetInkManager@@QEAAPEAXI@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18014BDBC (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18014BDEC (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x18014C060 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801521F4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1CSpatialResourceManager@@QEAA@XZ @ 0x180156B48 (--1CSpatialResourceManager@@QEAA@XZ.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x1801E2034 (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 */

void __fastcall CComposition::~CComposition(CComposition *this)
{
  unsigned int i; // ebx
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rsi
  CSpatialResourceManager *v6; // rbx
  int v7; // ebx
  CD3DDeviceLevel1 *v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rsi
  CCursorVisualReference *v12; // rcx
  unsigned int j; // ebx
  CMILRefCountBase *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  CMILRefCountBase *v17; // rcx
  CGdiSpriteBitmap *v18; // rcx
  CMILRefCountBase *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  Microsoft::Bamo::BaseBamoConnection *v22; // rcx
  CGdiSpriteBitmap *v23; // rcx
  void *v24; // rcx
  unsigned int v25; // edx
  void *v26; // rbx
  CWetInkManager *v27; // rcx
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CComposition::`vftable';
  for ( i = 0; i < *((_DWORD *)this + 102); ++i )
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 48) + 8LL * i));
  *((_DWORD *)this + 102) = 0;
  v3 = *((_DWORD *)this + 84);
  if ( v3 )
  {
    v4 = 0LL;
    v5 = v3;
    do
    {
      v28 = *(struct _RTL_CRITICAL_SECTION **)(v4 + *((_QWORD *)this + 39));
      ReleaseInterface<CConnection>((CMILRefCountBase **)&v28);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 84) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 312, 8u);
  CComposition::ReleaseNotificationChannels(this);
  v6 = (CSpatialResourceManager *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v6 )
  {
    CSpatialResourceManager::~CSpatialResourceManager(v6);
    operator delete(v6);
  }
  v28 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  v7 = qword_180308B10;
  BYTE4(qword_180308B10) = 1;
  while ( v7 )
  {
    v8 = *(CD3DDeviceLevel1 **)(qword_180308AC0 + 24LL * (unsigned int)--v7);
    *((_DWORD *)v8 + 212) = -2003304307;
    CD3DDeviceLevel1::ProcessDeviceLost(v8);
  }
  CD3DDeviceManager::DeleteUnusableDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  BYTE4(qword_180308B10) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v28);
  *((_DWORD *)this + 160) = 0;
  v9 = *((_DWORD *)this + 230);
  if ( v9 )
  {
    v10 = 0LL;
    v11 = v9;
    do
    {
      v12 = *(CCursorVisualReference **)(v10 + *((_QWORD *)this + 112));
      if ( v12 )
        CCursorVisualReference::`scalar deleting destructor'(v12);
      v10 += 8LL;
      --v11;
    }
    while ( v11 );
  }
  *((_DWORD *)this + 230) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 896, 8u);
  *((_DWORD *)this + 238) = 0;
  for ( j = 0; j < *((_DWORD *)this + 178); ++j )
    CGdiSpriteBitmap::Release(*(CGdiSpriteBitmap **)(*((_QWORD *)this + 86) + 8LL * j));
  *((_DWORD *)this + 178) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 688, 8u);
  CComposition::UnmapDeferredSharedSectionViews(this);
  v14 = (CMILRefCountBase *)*((_QWORD *)this + 10);
  if ( v14 )
    CMILRefCountBase::Release(v14);
  v15 = *((_QWORD *)this + 8);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = *((_QWORD *)this + 9);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = (CMILRefCountBase *)*((_QWORD *)this + 28);
  if ( v17 )
    CMILRefCountBase::Release(v17);
  v18 = (CGdiSpriteBitmap *)*((_QWORD *)this + 11);
  if ( v18 )
    CGdiSpriteBitmap::Release(v18);
  v19 = (CMILRefCountBase *)*((_QWORD *)this + 13);
  if ( v19 )
    CMILRefCountBase::Release(v19);
  v20 = *((_QWORD *)this + 12);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = *((_QWORD *)this + 2);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  CThreadContext::DestroyObjectCaches();
  v22 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 156);
  if ( v22 )
  {
    *((_QWORD *)this + 156) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v22);
  }
  v23 = (CGdiSpriteBitmap *)*((_QWORD *)this + 152);
  if ( v23 )
  {
    *((_QWORD *)this + 152) = 0LL;
    CGdiSpriteBitmap::Release(v23);
  }
  WPF::ProcessHeapImpl::Free(*((void **)this + 138));
  v24 = (void *)*((_QWORD *)this + 132);
  if ( v24 )
  {
    std::_Deallocate<16,0>(v24, (*((_QWORD *)this + 134) - (_QWORD)v24) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 132) = 0LL;
    *((_QWORD *)this + 133) = 0LL;
    *((_QWORD *)this + 134) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 128);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 124);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 120);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 116);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 112);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 92);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 86);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 81);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 77);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 71);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 56);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 52);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 48);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 39);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 34);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 29);
  CMmcssTask::UnloadRuntime((CComposition *)((char *)this + 144));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v26 = (void *)*((_QWORD *)this + 17);
  if ( v26 )
  {
    CSpatialResourceManager::~CSpatialResourceManager(*((CSpatialResourceManager **)this + 17));
    operator delete(v26);
  }
  v27 = (CWetInkManager *)*((_QWORD *)this + 14);
  if ( v27 )
    CWetInkManager::`scalar deleting destructor'(v27, v25);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 3);
}
