/*
 * XREFs of ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E7160
 * Callers:
 *     ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00D676C (-IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0236838 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmGetCurrentWireFormatAndColorSpace(
        DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a4,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a5)
{
  unsigned int v5; // edi
  int v7; // ebp
  int v8; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+20h] [rbp-28h] BYREF
  __int64 v38[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v39; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v7 = a3;
  v8 = a2;
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v14 + 24) = 0LL;
    goto LABEL_4;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v13 = *((_QWORD *)a1 + 319);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = a1;
LABEL_4:
    WdLogEvent5_WdError(v14);
    return 3223191554LL;
  }
  v16 = *(_QWORD *)(v13 + 88);
  if ( v16 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v38, v16);
    v18 = *(_QWORD *)(v16 + 88);
    v39 = 0LL;
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 32));
      v19 = *(_QWORD *)(v16 + 88);
    }
    else
    {
      v19 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v39, v19, v17);
    v23 = v39;
    if ( v39 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v39 + 96), v8, v7);
      if ( Path && (v28 = *((_QWORD *)Path + 12)) != 0 )
      {
        v29 = *(_QWORD *)(v28 + 104);
        if ( v29 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v29 + 96));
          v30 = *(_QWORD *)(v28 + 104);
        }
        else
        {
          v30 = 0LL;
        }
        v31 = *(_QWORD *)(v30 + 144);
        v37 = v30;
        if ( !v31 )
        {
          v36 = WdLogNewEntry5_WdAssertion(0LL, v25);
          WdLogEvent5_WdAssertion(v36);
          v31 = *(_QWORD *)(v30 + 144);
        }
        a4->0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v31 + 132);
        *a5 = *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)(v31 + 136);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v37, 0LL);
      }
      else
      {
        v33 = WdLogNewEntry5_WdError(v26, v25, v27);
        *(_QWORD *)(v33 + 24) = v23;
        WdLogEvent5_WdError(v33);
        v5 = -1071774971;
      }
    }
    else
    {
      v35 = WdLogNewEntry5_WdError(v21, v20, v22);
      *(_QWORD *)(v35 + 24) = a1;
      WdLogEvent5_WdError(v35);
      v5 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v39, 0LL, v32);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38[0] + 40));
    return v5;
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v34 + 24) = a1;
    WdLogEvent5_WdError(v34);
    return 3223192373LL;
  }
}
