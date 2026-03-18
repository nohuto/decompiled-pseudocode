/*
 * XREFs of ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x18015A698
 * Callers:
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800D80FC (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x1801A5F38 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ @ 0x1801A665C (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ.c)
 * Callees:
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18002E32C (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180042588 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SendRemotingMetaData@CDisplay@@QEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x18015B010 (-SendRemotingMetaData@CDisplay@@QEBAJAEBU_DWMIndirectMetaData@@@Z.c)
 */

__int64 __fastcall CDisplayManager::SendRemotingMetaData(CDisplayManager *this, const struct _DWMIndirectMetaData *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edx
  const struct _DWMIndirectMetaData *v5; // rdx
  CDisplay *v6; // rsi
  signed int v7; // eax
  __int64 v8; // rcx
  CDisplaySet *v10; // [rsp+40h] [rbp+8h] BYREF
  CDisplay *v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = -2003304307;
  if ( (int)CDisplayManager::GetCurrentDisplaySet(this, &v10) >= 0 )
  {
    v11 = 0LL;
    if ( (int)CDisplaySet::GetPrimaryDisplay(v10, &v11) >= 0 )
    {
      v5 = a2;
      v6 = v11;
      v7 = CDisplay::SendRemotingMetaData(v11, v5);
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802E3D40, 1u, v7, 0x299u, 0LL);
      if ( v6 )
        (*(void (__fastcall **)(CDisplay *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    if ( v10 )
      CDisplaySet::Release(v10, v4);
  }
  return v3;
}
