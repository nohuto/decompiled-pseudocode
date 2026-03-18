/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0132400
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01322DC (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02BD9E0 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0004554 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000458C (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C00054F0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000ED50 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C0144AD8 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::CreateNewPath(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct DMMVIDPNPRESENTPATH **a3)
{
  __int64 VidPnSourceId; // r14
  __int64 VidPnTargetId; // rbp
  __int64 Container; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DMMVIDPNSOURCE *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DMMVIDPNTARGET *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v21; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  bool v30; // zf
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // rax
  DMMVIDPNPRESENTPATH *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  int LowestAvailImportanceOrdinal; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 (__fastcall ***v56)(_QWORD, __int64); // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v57; // [rsp+28h] [rbp-1C0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v58; // [rsp+30h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    v46 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v46);
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = a2->VidPnTargetId;
  v56 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160, (__int64)a2);
  v12 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 304), VidPnSourceId);
  if ( v12 )
  {
    v13 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160, v9);
    v57 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v13 + 312), VidPnTargetId);
    v17 = (struct DMMVIDPNTARGET *)v57;
    if ( v57 )
    {
      if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, VidPnTargetId) )
      {
        v42 = WdLogNewEntry5_WdDmmEvent(v19, v18);
        *(_QWORD *)(v42 + 24) = VidPnSourceId;
        *(_QWORD *)(v42 + 32) = VidPnTargetId;
        *(_QWORD *)(v42 + 40) = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160, v49);
        WdLogEvent5_WdDmmEvent(v42);
        LODWORD(v42) = -1071774957;
      }
      else
      {
        v20 = 2LL;
        v21 = &v58;
        v22 = a2;
        do
        {
          v23 = *(_OWORD *)&v22->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v21->VidPnSourceId = *(_OWORD *)&v22->VidPnSourceId;
          v24 = *(_OWORD *)&v22->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v21->ContentTransformation.ScalingSupport = v23;
          VidPnTargetColorCoeffDynamicRanges = v22->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v21->VisibleFromActiveTLOffset.cy = v24;
          v26 = *(_OWORD *)&v22->Content;
          v21->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
          v27 = *(_OWORD *)&v22->CopyProtection.OEMCopyProtection[4];
          *(_OWORD *)&v21->Content = v26;
          v28 = *(_OWORD *)&v22->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v21->CopyProtection.OEMCopyProtection[4] = v27;
          v29 = *(_OWORD *)&v22->CopyProtection.OEMCopyProtection[36];
          v22 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v22 + 128);
          *(_OWORD *)&v21->CopyProtection.OEMCopyProtection[20] = v28;
          v21 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v21 + 128);
          *(_OWORD *)&v21[-1].GammaRamp.DataSize = v29;
          --v20;
        }
        while ( v20 );
        v30 = a2->ImportanceOrdinal == 255;
        v31 = *(_OWORD *)&v22->ContentTransformation.ScalingSupport;
        *(_OWORD *)&v21->VidPnSourceId = *(_OWORD *)&v22->VidPnSourceId;
        v32 = *(_OWORD *)&v22->VisibleFromActiveTLOffset.cy;
        *(_OWORD *)&v21->ContentTransformation.ScalingSupport = v31;
        v33 = v22->VidPnTargetColorCoeffDynamicRanges;
        *(_OWORD *)&v21->VisibleFromActiveTLOffset.cy = v32;
        v34 = *(_OWORD *)&v22->Content;
        v21->VidPnTargetColorCoeffDynamicRanges = v33;
        v35 = *(_OWORD *)&v22->CopyProtection.OEMCopyProtection[4];
        v36 = *(_QWORD *)&v22->CopyProtection.OEMCopyProtection[20];
        *(_OWORD *)&v21->Content = v34;
        *(_OWORD *)&v21->CopyProtection.OEMCopyProtection[4] = v35;
        *(_QWORD *)&v21->CopyProtection.OEMCopyProtection[20] = v36;
        if ( v30 )
        {
          LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(this, &v58.ImportanceOrdinal);
          v42 = LowestAvailImportanceOrdinal;
          if ( LowestAvailImportanceOrdinal < 0 )
          {
            v53 = WdLogNewEntry5_WdTrace(v52, v51);
            *(_QWORD *)(v53 + 24) = this;
            *(_QWORD *)(v53 + 32) = v42;
            goto LABEL_14;
          }
          v17 = (struct DMMVIDPNTARGET *)v57;
        }
        v37 = (DMMVIDPNPRESENTPATH *)operator new[](0xC0uLL, 0x4E506456u, PagedPool);
        if ( v37 )
          v37 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v37, v12, v17, &v58);
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(&v56, (__int64 (__fastcall ***)(_QWORD, __int64))v37);
        v42 = (__int64)v56;
        if ( v56 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v56[7])(v56 + 7) )
          {
            v56 = 0LL;
            *a3 = (struct DMMVIDPNPRESENTPATH *)v42;
            LODWORD(v42) = 0;
          }
          else
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v44, v43);
            v55[3] = a2->VidPnSourceId;
            v55[4] = a2->VidPnTargetId;
            v55[5] = this;
            v55[6] = *(int *)(v42 + 64);
            WdLogEvent5_WdDmmEvent(v55);
            LODWORD(v42) = *(_DWORD *)(v42 + 64);
          }
        }
        else
        {
          v54 = WdLogNewEntry5_WdLowResource(v39, v38, v40, v41);
          *(_QWORD *)(v54 + 24) = this;
          WdLogEvent5_WdLowResource(v54);
          LODWORD(v42) = -1073741801;
        }
      }
    }
    else
    {
      v48 = WdLogNewEntry5_WdError(v15, v14, v16);
      *(_QWORD *)(v48 + 24) = a2->VidPnTargetId;
      WdLogEvent5_WdError(v48);
      LODWORD(v42) = -1071774971;
    }
  }
  else
  {
    v47 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v47 + 24) = a2->VidPnSourceId;
    WdLogEvent5_WdError(v47);
    LODWORD(v42) = -1071774972;
  }
LABEL_14:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>(&v56);
  return (unsigned int)v42;
}
