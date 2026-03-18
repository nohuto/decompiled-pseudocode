/*
 * XREFs of ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618
 * Callers:
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C00AE24C (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00BB0F4 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00CF2AC (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D34E0 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00D8960 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E550C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C0136398 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C0136E70 (-EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C027A184 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C027ADB0 (-DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTE.c)
 *     ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C027B590 (-DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C027BBA0 (-DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C027BE00 (-DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C027C6A8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C027D1F4 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C027E0F0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C0284664 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0284C68 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C0285BC0 (-EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C028649C (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
        char **this,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // rbp
  DMMVIDPNTOPOLOGY *v7; // rbx
  DMMVIDPNTOPOLOGY *v8; // r9
  DMMVIDPNTOPOLOGY *v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax
  char *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = a2;
  v7 = (DMMVIDPNTOPOLOGY *)this;
  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
  }
  *a4 = -1;
  v8 = (DMMVIDPNTOPOLOGY *)((char *)v7 + 24);
  v9 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v7 + 3);
  v10 = 0LL;
  if ( v9 == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
    goto LABEL_19;
  this = (char **)((char *)v9 - 8);
  while ( this )
  {
    if ( *((_DWORD *)this[11] + 6) == (_DWORD)v4 )
    {
      if ( v10 == a3 )
      {
        result = 0LL;
        *a4 = *((_DWORD *)this[12] + 6);
        return result;
      }
      ++v10;
    }
    v12 = this[1];
    this = (char **)(v12 - 8);
    if ( v12 == (char *)v8 )
      this = 0LL;
  }
  if ( v9 == v8 || v9 == (DMMVIDPNTOPOLOGY *)8 )
  {
LABEL_19:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, v9, v10, v8) + 24) = v7;
  }
  else
  {
    if ( v10 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdTrace(0LL, v9, v10, v8);
      v13[3] = v7;
      v13[4] = v4;
      v13[5] = a3;
      return 1075708748LL;
    }
    v14 = WdLogNewEntry5_WdTrace(0LL, v9, 0LL, v8);
    *(_QWORD *)(v14 + 24) = v4;
    *(_QWORD *)(v14 + 32) = v7;
  }
  return 3223192377LL;
}
