/*
 * XREFs of ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800772F4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x180077360 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x18008C7F4 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x1800D7F88 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     ?EnterHardwareProtectionTeardown@CD3DDeviceManager@@SAXXZ @ 0x1801FA9D8 (-EnterHardwareProtectionTeardown@CD3DDeviceManager@@SAXXZ.c)
 */

__int64 __fastcall CComposition::Partition_ForceRender(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_FORCERENDER *a4)
{
  int v6; // eax
  bool v7; // zf
  char IsHardwareProtectionDisabled; // al
  char v10; // cl

  if ( *((_DWORD *)a4 + 1) )
    *(_BYTE *)(*((_QWORD *)this + 8) + 113LL) = 1;
  if ( *((_DWORD *)a4 + 3) == 1 )
  {
    CD3DDeviceManager::EnterHardwareProtectionTeardown();
  }
  else if ( *((_DWORD *)a4 + 3) == 2 )
  {
    CD3DDeviceManager::IsHardwareProtectionDisabled();
    CD3DDeviceManager::s_bHwProtectionTeardown = 0;
    IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
    if ( v10 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 0LL);
  }
  if ( *((_DWORD *)a4 + 4) )
    CRenderTargetManager::UpdateMPOCaps(*((CRenderTargetManager **)this + 8));
  v6 = *((_DWORD *)a4 + 2);
  v7 = v6 == 0;
  if ( v6 )
  {
    if ( qword_180308258 )
    {
      *((_BYTE *)qword_180308258 + 113) = 1;
      v6 = *((_DWORD *)a4 + 2);
    }
    v7 = v6 == 0;
  }
  CComposition::ForceFullRender(this, !v7);
  return 0LL;
}
