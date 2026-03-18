/*
 * XREFs of ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x1801A5F38
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x18015A698 (-SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ @ 0x1801A61D0 (-ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessDestroyWindow(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW *a3)
{
  CDisplayManager *v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]

  memset_0(&v8, 0, 0x30uLL);
  v9 = *((_QWORD *)this + 35);
  v8 = 4;
  v5 = CDisplayManager::SendRemotingMetaData(v4, (const struct _DWMIndirectMetaData *)&v8);
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x5Cu, 0LL);
  CRemoteAppRenderTarget::ReleaseResourcesForDisplayChange((CRemoteAppRenderTarget *)((char *)this + 64));
  *((_QWORD *)this + 35) = 0LL;
  return 0LL;
}
