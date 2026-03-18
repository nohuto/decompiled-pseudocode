/*
 * XREFs of ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801A5C0C
 * Callers:
 *     ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x1801A5EB0 (--_ECDesktopRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x180025664 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18002B42C (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800D6CD8 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800D9234 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800DCE80 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x1800E715C (-SetVisualDesktopId@CVisual@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAVIRenderTargetDesktop@@@Z @ 0x18018B7E8 (-RemoveDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAVIRenderTargetDesktop@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::~CDesktopRenderTarget(CDesktopRenderTarget *this)
{
  unsigned __int64 v2; // rbx
  struct CVisualTree *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 i; // rbx
  __int64 v10; // rcx
  unsigned int v11; // edx
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+24h] [rbp-24h]

  v2 = (unsigned __int64)this + 168;
  *(_QWORD *)this = &CDesktopRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CDesktopRenderTarget::`vftable'{for `IRenderTargetResource'};
  v3 = (struct CVisualTree *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 9) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CHwndRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  v4 = *((_QWORD *)this + 2);
  *(_QWORD *)v2 = &CDesktopRenderTarget::`vftable';
  CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(v4 + 16), v3);
  CUINTDesktopAssociation::RemoveDesktopRenderTarget(
    (CUINTDesktopAssociation *)(*((_QWORD *)this + 2) + 24LL),
    (struct IRenderTargetDesktop *)(v2 & -(__int64)(this != 0LL)));
  if ( CCommonRegistryData::m_fConfigureInput && !*(_BYTE *)(*((_QWORD *)this + 2) + 1278LL) )
  {
    v16 = 0LL;
    v15 = *((_DWORD *)this + 100);
    ConfigureInputSpace(&v15, 0LL, 0LL);
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
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 74); i = (unsigned int)(i + 1) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 34) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_DWORD *)this + 74) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 272, 8u);
  SAFE_DELETE<CComposeTop>((CComposeTop **)this + 46, v11);
  v12 = (void *)*((_QWORD *)this + 48);
  if ( v12 )
    CloseHandle(v12);
  v13 = *((_QWORD *)this + 15);
  if ( v13 )
  {
    *(_BYTE *)(v13 + 32) = 0;
    CVisual::SetVisualDesktopId(*(CVisual **)(v13 + 24), 0);
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 49));
  *((_QWORD *)this + 49) = 0LL;
  v14 = *((_QWORD *)this + 51);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    *((_QWORD *)this + 51) = 0LL;
  }
  ReleaseInterface<CDisplay>((__int64 *)this + 54);
  SAFE_DELETE<COcclusionContext>((COcclusionContext **)this + 55);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 272);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 224);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 176);
  CRenderTarget::~CRenderTarget((struct CResource **)this);
}
