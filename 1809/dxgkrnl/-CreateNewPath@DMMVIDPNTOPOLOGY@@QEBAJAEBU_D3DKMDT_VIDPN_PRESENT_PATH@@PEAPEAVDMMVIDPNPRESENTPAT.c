/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BB28C
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B8048 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02855B0 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0002C44 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00037E8 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0003930 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000B2E8 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C00BDF7C (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::CreateNewPath(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct DMMVIDPNPRESENTPATH **a3)
{
  __int64 VidPnSourceId; // r14
  __int64 VidPnTargetId; // rbp
  __int64 Container; // rax
  __int64 v9; // rcx
  struct DMMVIDPNSOURCE *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  struct DMMVIDPNTARGET *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v19; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  bool v28; // zf
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  DMMVIDPNPRESENTPATH *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  int LowestAvailImportanceOrdinal; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 (__fastcall ***v54)(_QWORD, __int64); // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v55; // [rsp+28h] [rbp-1C0h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH v56; // [rsp+30h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    v43 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v43);
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = a2->VidPnTargetId;
  v54 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v10 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), VidPnSourceId);
  if ( v10 )
  {
    v11 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v55 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v11 + 312), VidPnTargetId);
    v13 = (struct DMMVIDPNTARGET *)v55;
    if ( v55 )
    {
      if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, VidPnTargetId) )
      {
        v37 = WdLogNewEntry5_WdDmmEvent(v15, v14, v16, v17);
        *(_QWORD *)(v37 + 24) = VidPnSourceId;
        *(_QWORD *)(v37 + 32) = VidPnTargetId;
        *(_QWORD *)(v37 + 40) = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        WdLogEvent5_WdDmmEvent(v37);
        LODWORD(v37) = -1071774957;
      }
      else
      {
        v18 = 2LL;
        v19 = &v56;
        v20 = a2;
        do
        {
          v21 = *(_OWORD *)&v20->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v19->VidPnSourceId = *(_OWORD *)&v20->VidPnSourceId;
          v22 = *(_OWORD *)&v20->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v19->ContentTransformation.ScalingSupport = v21;
          VidPnTargetColorCoeffDynamicRanges = v20->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v19->VisibleFromActiveTLOffset.cy = v22;
          v24 = *(_OWORD *)&v20->Content;
          v19->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
          v25 = *(_OWORD *)&v20->CopyProtection.OEMCopyProtection[4];
          *(_OWORD *)&v19->Content = v24;
          v26 = *(_OWORD *)&v20->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[4] = v25;
          v27 = *(_OWORD *)&v20->CopyProtection.OEMCopyProtection[36];
          v20 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v20 + 128);
          *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[20] = v26;
          v19 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v19 + 128);
          *(_OWORD *)&v19[-1].GammaRamp.DataSize = v27;
          --v18;
        }
        while ( v18 );
        v28 = a2->ImportanceOrdinal == 255;
        v29 = *(_OWORD *)&v20->ContentTransformation.ScalingSupport;
        *(_OWORD *)&v19->VidPnSourceId = *(_OWORD *)&v20->VidPnSourceId;
        v30 = *(_OWORD *)&v20->VisibleFromActiveTLOffset.cy;
        *(_OWORD *)&v19->ContentTransformation.ScalingSupport = v29;
        v31 = v20->VidPnTargetColorCoeffDynamicRanges;
        *(_OWORD *)&v19->VisibleFromActiveTLOffset.cy = v30;
        v32 = *(_OWORD *)&v20->Content;
        v19->VidPnTargetColorCoeffDynamicRanges = v31;
        v33 = *(_OWORD *)&v20->CopyProtection.OEMCopyProtection[4];
        v34 = *(_QWORD *)&v20->CopyProtection.OEMCopyProtection[20];
        *(_OWORD *)&v19->Content = v32;
        *(_OWORD *)&v19->CopyProtection.OEMCopyProtection[4] = v33;
        *(_QWORD *)&v19->CopyProtection.OEMCopyProtection[20] = v34;
        if ( v28 )
        {
          LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(this, &v56.ImportanceOrdinal);
          v37 = LowestAvailImportanceOrdinal;
          if ( LowestAvailImportanceOrdinal < 0 )
          {
            v51 = WdLogNewEntry5_WdTrace(v48, v47, v49, v50);
            *(_QWORD *)(v51 + 24) = this;
            *(_QWORD *)(v51 + 32) = v37;
            goto LABEL_14;
          }
          v13 = (struct DMMVIDPNTARGET *)v55;
        }
        v35 = (DMMVIDPNPRESENTPATH *)operator new(0xC0uLL, 0x4E506456u, PagedPool);
        if ( v35 )
          v35 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v35, v10, v13, &v56);
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(&v54, (__int64 (__fastcall ***)(_QWORD, __int64))v35);
        v37 = (__int64)v54;
        if ( v54 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v54[7])(v54 + 7) )
          {
            v54 = 0LL;
            *a3 = (struct DMMVIDPNPRESENTPATH *)v37;
            LODWORD(v37) = 0;
          }
          else
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v39, v38, v40, v41);
            v53[3] = a2->VidPnSourceId;
            v53[4] = a2->VidPnTargetId;
            v53[5] = this;
            v53[6] = *(int *)(v37 + 64);
            WdLogEvent5_WdDmmEvent(v53);
            LODWORD(v37) = *(_DWORD *)(v37 + 64);
          }
        }
        else
        {
          v52 = WdLogNewEntry5_WdLowResource(v36);
          *(_QWORD *)(v52 + 24) = this;
          WdLogEvent5_WdLowResource(v52);
          LODWORD(v37) = -1073741801;
        }
      }
    }
    else
    {
      v45 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v45 + 24) = a2->VidPnTargetId;
      WdLogEvent5_WdError(v45);
      LODWORD(v37) = -1071774971;
    }
  }
  else
  {
    v44 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v44 + 24) = a2->VidPnSourceId;
    WdLogEvent5_WdError(v44);
    LODWORD(v37) = -1071774972;
  }
LABEL_14:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>(&v54);
  return (unsigned int)v37;
}
