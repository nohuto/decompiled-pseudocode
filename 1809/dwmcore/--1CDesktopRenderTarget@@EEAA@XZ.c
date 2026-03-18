/*
 * XREFs of ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180159404
 * Callers:
 *     ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x180159640 (--_ECDesktopRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18006E0A0 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x180077844 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 *     ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x180077868 (-SetVisualDesktopId@CVisual@@QEAAXI@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800778A4 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800784B8 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x18008EBAC (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800D82D8 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAVCDesktopRenderTarget@@@Z @ 0x180161584 (-RemoveDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAVCDesktopRenderTarget@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::~CDesktopRenderTarget(CDesktopRenderTarget *this)
{
  unsigned __int64 v2; // rdi
  struct CVisualTree *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r9
  unsigned int v9; // edx
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edx
  int v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+24h] [rbp-24h]

  v2 = (unsigned __int64)this + 168;
  *(_QWORD *)this = &CDesktopRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CDesktopRenderTarget::`vftable'{for `IRenderTargetResource'};
  v3 = (struct CVisualTree *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 9) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  v4 = *((_QWORD *)this + 2);
  *(_QWORD *)v2 = &CDesktopRenderTarget::`vftable';
  CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(v4 + 16), v3);
  CUINTDesktopAssociation::RemoveDesktopRenderTarget((CUINTDesktopAssociation *)(*((_QWORD *)this + 2) + 24LL), this);
  if ( CCommonRegistryData::m_fConfigureInput && !*(_BYTE *)(*((_QWORD *)this + 2) + 1261LL) )
  {
    v15 = 0LL;
    v14 = *((_DWORD *)this + 88);
    ConfigureInputSpace(&v14, 0LL, 0LL);
  }
  v5 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
  v7 = *(_DWORD *)(v6 + 80);
  v8 = *(_QWORD *)(v6 + 56);
  if ( v7 )
  {
    do
    {
      if ( (v2 & -(__int64)(this != 0LL)) == *(_QWORD *)(v8 + 8 * v5) )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v7 );
  }
  if ( (unsigned int)v5 < v7 )
  {
    while ( (unsigned int)v5 < v7 - 1 )
    {
      *(_QWORD *)(v8 + 8 * v5) = *(_QWORD *)(v8 + 8LL * (unsigned int)(v5 + 1));
      v5 = (unsigned int)(v5 + 1);
      v7 = *(_DWORD *)(v6 + 80);
    }
    *(_DWORD *)(v6 + 80) = v7 - 1;
  }
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  SAFE_DELETE<CComposeTop>((CComposeTop **)this + 40, v9);
  v10 = (void *)*((_QWORD *)this + 42);
  if ( v10 )
    CloseHandle(v10);
  v11 = *((_QWORD *)this + 15);
  if ( v11 )
  {
    *(_BYTE *)(v11 + 32) = 0;
    CVisual::SetVisualDesktopId(*(CVisual **)(v11 + 24), 0);
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 43));
  *((_QWORD *)this + 43) = 0LL;
  v12 = *((_QWORD *)this + 45);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *((_QWORD *)this + 45) = 0LL;
  }
  ReleaseInterface<CDisplay>((__int64 *)this + 48);
  SAFE_DELETE<COcclusionContext>((COcclusionContext **)this + 49, v13);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 28);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 22);
  CRenderTarget::~CRenderTarget((struct CResource **)this);
}
