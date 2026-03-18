/*
 * XREFs of ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E57AC
 * Callers:
 *     ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00BEC18 (-IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0204850 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmGetCurrentWireFormatAndColorSpace(
        DXGADAPTER *a1,
        int a2,
        int a3,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a4,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a5)
{
  unsigned int v5; // edi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-38h]
  __int64 v30; // [rsp+30h] [rbp-28h] BYREF
  __int64 v31[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v32; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  if ( !a1 )
  {
    v25 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v25 + 24) = 0LL;
LABEL_18:
    WdLogEvent5_WdError(v25);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v11 = *((_QWORD *)a1 + 315);
  if ( !v11 )
  {
    v25 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v25 + 24) = a1;
    goto LABEL_18;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v31, v12);
    v13 = *(_QWORD *)(v12 + 88);
    v32 = 0LL;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 32));
      v14 = *(_QWORD *)(v12 + 88);
    }
    else
    {
      v14 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v32, v14);
    v16 = v32;
    if ( v32 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v32 + 96), a2, a3);
      if ( Path && (v19 = *((_QWORD *)Path + 12)) != 0 )
      {
        v20 = *(_QWORD *)(v19 + 104);
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 96));
          v21 = *(_QWORD *)(v19 + 104);
        }
        else
        {
          v21 = 0LL;
        }
        v22 = *(_QWORD *)(v21 + 144);
        v30 = v21;
        if ( !v22 )
        {
          v28 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v28);
          v22 = *(_QWORD *)(v21 + 144);
        }
        a4->0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v22 + 132);
        *a5 = *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)(v22 + 136);
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (__int64)&Feature_WCGTestMode__private_propertyCache,
          12077848LL,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00658A8,
          0,
          v29);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v30, 0LL);
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v24 + 24) = v16;
        WdLogEvent5_WdError(v24);
        v5 = -1071774971;
      }
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v27 + 24) = a1;
      WdLogEvent5_WdError(v27);
      v5 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v32, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31[0] + 40));
    return v5;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v26 + 24) = a1;
    WdLogEvent5_WdError(v26);
    return 3223192373LL;
  }
}
