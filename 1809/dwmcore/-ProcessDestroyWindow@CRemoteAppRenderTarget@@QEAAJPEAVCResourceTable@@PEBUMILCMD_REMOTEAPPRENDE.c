/*
 * XREFs of ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x18015FC80
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ @ 0x18015FEF0 (-ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ.c)
 *     ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x1801E0FA4 (-SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessDestroyWindow(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW *a3)
{
  CDisplayManager *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]

  memset_0(&v8, 0, 0x30uLL);
  v9 = *((_QWORD *)this + 35);
  v8 = 4;
  v5 = CDisplayManager::SendRemotingMetaData(v4, (const struct _DWMIndirectMetaData *)&v8);
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x5Bu);
  CRemoteAppRenderTarget::ReleaseResourcesForDisplayChange((CRemoteAppRenderTarget *)((char *)this + 64));
  *((_QWORD *)this + 35) = 0LL;
  return 0LL;
}
