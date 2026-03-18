/*
 * XREFs of ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800D8710
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800D5C24 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x180158FB8 (-SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z.c)
 *     McTemplateU0qqq @ 0x180159070 (McTemplateU0qqq.c)
 */

__int64 __fastcall CComposition::Partition_SwitchRemotingMode(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SWITCHREMOTINGMODE *a4)
{
  int v5; // eax
  CDisplayManager *v7; // rcx
  _DWORD v8[14]; // [rsp+30h] [rbp-38h] BYREF

  *((_DWORD *)this + 274) = *((_DWORD *)a4 + 1);
  CComposition::UpdateDisplaySet((CRenderTargetManager **)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqq(
      (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_DETECT_REMOTEAPPMODE_SWITCH,
      0,
      *((_DWORD *)this + 274) >= 3,
      *((_DWORD *)this + 274) == 1);
  v5 = *((_DWORD *)this + 274);
  if ( v5 == 6 )
  {
    memset_0(v8, 0, 0x30uLL);
    v8[0] = 7;
    CDisplayManager::SendRemotingMetaData(v7, (const struct _DWMIndirectMetaData *)v8);
    v5 = *((_DWORD *)this + 274);
  }
  if ( v5 >= 5 )
    CRenderTargetManager::ForceFullRender(*((CRenderTargetManager **)this + 8));
  return 0LL;
}
