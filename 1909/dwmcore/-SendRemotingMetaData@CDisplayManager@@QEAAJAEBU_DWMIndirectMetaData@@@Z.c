/*
 * XREFs of ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x180158FB8
 * Callers:
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800D8710 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x1801A4678 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ @ 0x1801A4D9C (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800AE8B0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?SendRemotingMetaData@CDisplay@@QEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x180159930 (-SendRemotingMetaData@CDisplay@@QEBAJAEBU_DWMIndirectMetaData@@@Z.c)
 */

__int64 __fastcall CDisplayManager::SendRemotingMetaData(CDisplayManager *this, const struct _DWMIndirectMetaData *a2)
{
  unsigned int v3; // ebx
  const struct _DWMIndirectMetaData *v4; // rdx
  struct CDisplay *v5; // rsi
  signed int v6; // eax
  __int64 v7; // rcx
  CDisplaySet *v9; // [rsp+40h] [rbp+8h] BYREF
  struct CDisplay *v10; // [rsp+50h] [rbp+18h] BYREF

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
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802E1E90, 1u, v6, 0x299u, 0LL);
      if ( v5 )
        (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    if ( v9 )
      CDisplaySet::Release(v9);
  }
  return v3;
}
