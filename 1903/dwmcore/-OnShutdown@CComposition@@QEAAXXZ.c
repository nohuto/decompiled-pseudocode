/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x18017781C
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801792F8 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x180024EF8 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800BCC60 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CCCF4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ @ 0x180177A34 (-ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180177B7C (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180177BAC (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180189164 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180189398 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x1801898DC (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CComposition::OnShutdown(CComposition *this)
{
  char *v1; // rsi
  struct _SLIST_ENTRY *v3; // rbp
  int v4; // edi
  CD3DDeviceLevel1 *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  CGdiSpriteBitmap *v8; // rcx
  Microsoft::Bamo::BaseBamoConnection *v9; // rcx
  CComposition *v10; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 568;
  *((_BYTE *)this + 1277) = 1;
  AcquireSRWLockExclusive((PSRWLOCK)this + 71);
  *((_DWORD *)v1 + 2) = GetCurrentThreadId();
  v3 = CComposition::ProcessOffTheadPreComputeRequests(this);
  v11 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  v4 = qword_180340430;
  BYTE4(qword_180340430) = 1;
  while ( v4 )
  {
    v5 = *(CD3DDeviceLevel1 **)(qword_1803403E0 + 24LL * (unsigned int)--v4);
    *((_DWORD *)v5 + 220) = -2003304307;
    CD3DDeviceLevel1::ProcessDeviceLost(v5);
  }
  CD3DDeviceManager::DeleteUnusableDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  BYTE4(qword_180340430) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  CComposition::ReleaseNotificationChannels(this);
  CRenderTargetManager::ReleaseTargets(*((CRenderTargetManager **)this + 8));
  while ( *((_DWORD *)this + 88) )
    CComposition::CloseChannel(
      this,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(*((_DWORD *)this + 88) - 1)) + 16LL));
  CMessageConversationHost::Disconnect(*((CMessageConversationHost **)this + 153));
  CGdiSpriteBitmap::Release(*((CGdiSpriteBitmap **)this + 153));
  v6 = *((_QWORD *)this + 154);
  *((_QWORD *)this + 153) = 0LL;
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease(v6 + 24);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(v6 + 32));
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
  {
    *(_QWORD *)(v6 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (CGdiSpriteBitmap *)*((_QWORD *)this + 154);
  if ( v8 )
  {
    *((_QWORD *)this + 154) = 0LL;
    CGdiSpriteBitmap::Release(v8);
  }
  v9 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 158);
  if ( v9 )
  {
    *((_QWORD *)this + 158) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v9);
  }
  *((_DWORD *)v1 + 2) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
  CComposition::CompleteOffTheadPreComputeRequests(v10, v3);
}
