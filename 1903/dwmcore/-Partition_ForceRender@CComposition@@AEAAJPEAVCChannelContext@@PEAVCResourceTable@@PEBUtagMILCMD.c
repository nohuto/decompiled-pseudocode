/*
 * XREFs of ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800D57D8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x18004234C (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x1800D5844 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x1800D7908 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     McTemplateU0d @ 0x18015EC70 (McTemplateU0d.c)
 *     ?EnterHardwareProtectionTeardown@CD3DDeviceManager@@SAXXZ @ 0x18015F258 (-EnterHardwareProtectionTeardown@CD3DDeviceManager@@SAXXZ.c)
 */

__int64 __fastcall CComposition::Partition_ForceRender(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_FORCERENDER *a4)
{
  char v6; // al
  bool v7; // zf
  char IsHardwareProtectionDisabled; // al
  char v10; // cl

  if ( *((_BYTE *)a4 + 4) )
    *(_BYTE *)(*((_QWORD *)this + 8) + 113LL) = 1;
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    CD3DDeviceManager::EnterHardwareProtectionTeardown();
  }
  else if ( *((_DWORD *)a4 + 2) == 2 )
  {
    CD3DDeviceManager::IsHardwareProtectionDisabled();
    CD3DDeviceManager::s_bHwProtectionTeardown = 0;
    IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
    if ( v10 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 0LL);
  }
  if ( *((_BYTE *)a4 + 12) )
    CRenderTargetManager::UpdateMPOCaps(*((CRenderTargetManager **)this + 8));
  v6 = *((_BYTE *)a4 + 5);
  v7 = v6 == 0;
  if ( v6 )
  {
    if ( g_DisplayManager )
    {
      *((_BYTE *)g_DisplayManager + 113) = 1;
      v6 = *((_BYTE *)a4 + 5);
    }
    v7 = v6 == 0;
  }
  CComposition::ForceFullRender(this, !v7);
  return 0LL;
}
