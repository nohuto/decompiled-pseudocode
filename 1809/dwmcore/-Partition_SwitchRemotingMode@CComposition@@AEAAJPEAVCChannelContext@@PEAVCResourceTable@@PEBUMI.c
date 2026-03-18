/*
 * XREFs of ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x18007A800
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x180077378 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     McTemplateU0qqq @ 0x180149014 (McTemplateU0qqq.c)
 *     ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x1801E0FA4 (-SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_SwitchRemotingMode(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SWITCHREMOTINGMODE *a4)
{
  int v4; // edx
  CDisplayManager *v7; // rcx
  _DWORD v8[14]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *((_DWORD *)a4 + 1);
  *((_DWORD *)this + 270) = v4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_DETECT_REMOTEAPPMODE_SWITCH,
      0,
      v4 >= 3,
      v4 == 1);
    v4 = *((_DWORD *)this + 270);
  }
  if ( v4 == 6 )
  {
    memset_0(v8, 0, 0x30uLL);
    v8[0] = 7;
    CDisplayManager::SendRemotingMetaData(v7, (const struct _DWMIndirectMetaData *)v8);
    v4 = *((_DWORD *)this + 270);
  }
  if ( v4 >= 5 )
    CRenderTargetManager::ForceFullRender(*((CRenderTargetManager **)this + 8));
  return 0LL;
}
