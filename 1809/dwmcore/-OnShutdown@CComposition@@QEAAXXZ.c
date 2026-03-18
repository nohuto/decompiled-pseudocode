/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014B6A8
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801495E0 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007D080 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18008A1D4 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18009CD38 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ @ 0x18014BB54 (-ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18014BDBC (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18014BDEC (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180152AAC (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180153158 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180153D9C (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CComposition::OnShutdown(CComposition *this)
{
  char *v1; // rsi
  struct _SLIST_ENTRY *v3; // rbp
  int v4; // edi
  CD3DDeviceLevel1 *v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  CGdiSpriteBitmap *v8; // rcx
  Microsoft::Bamo::BaseBamoConnection *v9; // rcx
  CComposition *v10; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 552;
  *((_BYTE *)this + 1260) = 1;
  AcquireSRWLockExclusive((PSRWLOCK)this + 69);
  *((_DWORD *)v1 + 2) = GetCurrentThreadId();
  v3 = CComposition::ProcessOffTheadPreComputeRequests(this);
  v11 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  v4 = qword_180308B10;
  BYTE4(qword_180308B10) = 1;
  while ( v4 )
  {
    v5 = *(CD3DDeviceLevel1 **)(qword_180308AC0 + 24LL * (unsigned int)--v4);
    *((_DWORD *)v5 + 212) = -2003304307;
    CD3DDeviceLevel1::ProcessDeviceLost(v5);
  }
  CD3DDeviceManager::DeleteUnusableDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  BYTE4(qword_180308B10) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  CComposition::ReleaseNotificationChannels(this);
  CRenderTargetManager::ReleaseTargets(*((CRenderTargetManager **)this + 8));
  while ( *((_DWORD *)this + 84) )
    CComposition::CloseChannel(
      this,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 39) + 8LL * (unsigned int)(*((_DWORD *)this + 84) - 1)) + 16LL));
  CMessageConversationHost::Disconnect(*((CMessageConversationHost **)this + 151));
  CGdiSpriteBitmap::Release(*((CGdiSpriteBitmap **)this + 151));
  v6 = (_QWORD *)*((_QWORD *)this + 152);
  *((_QWORD *)this + 151) = 0LL;
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease(v6 + 4);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v6 + 5);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v6 + 3);
  v7 = v6[2];
  if ( v7 )
  {
    v6[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (CGdiSpriteBitmap *)*((_QWORD *)this + 152);
  if ( v8 )
  {
    *((_QWORD *)this + 152) = 0LL;
    CGdiSpriteBitmap::Release(v8);
  }
  v9 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 156);
  if ( v9 )
  {
    *((_QWORD *)this + 156) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v9);
  }
  *((_DWORD *)v1 + 2) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
  CComposition::CompleteOffTheadPreComputeRequests(v10, v3);
}
