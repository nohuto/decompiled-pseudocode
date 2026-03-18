/*
 * XREFs of ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x1801E0FA4
 * Callers:
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x18007A800 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x18015FC80 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDE.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ @ 0x180160354 (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18008C5E4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SendRemotingMetaData@CDisplay@@QEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x1801E3BA8 (-SendRemotingMetaData@CDisplay@@QEBAJAEBU_DWMIndirectMetaData@@@Z.c)
 */

__int64 __fastcall CDisplayManager::SendRemotingMetaData(CDisplayManager *this, const struct _DWMIndirectMetaData *a2)
{
  unsigned int v3; // ebx
  const struct _DWMIndirectMetaData *v4; // rdx
  CDisplay *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  CDisplaySet *v9; // [rsp+40h] [rbp+8h] BYREF
  CDisplay *v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = -2003304307;
  if ( (int)CDisplayManager::GetCurrentDisplaySet(this, &v9) >= 0 )
  {
    v10 = 0LL;
    if ( (int)CDisplaySet::GetPrimaryDisplay(v9, &v10) >= 0 )
    {
      v4 = a2;
      v5 = v10;
      v6 = CDisplay::SendRemotingMetaData(v10, v4);
      v3 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802BC238, 1u, v6, 0x2F0u);
      if ( v5 )
        (*(void (__fastcall **)(CDisplay *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    if ( v9 )
      CDisplaySet::Release(v9);
  }
  return v3;
}
