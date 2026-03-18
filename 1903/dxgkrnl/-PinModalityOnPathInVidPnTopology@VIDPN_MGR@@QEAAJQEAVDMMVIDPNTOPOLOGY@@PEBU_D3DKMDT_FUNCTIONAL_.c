/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C012E384
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C012D788 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0003950 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0003A2C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0005530 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C000D724 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000E4EC (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E24F8 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0127FCC (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C012E580 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  __int64 Container; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  DMMVIDPNSOURCEMODE **v12; // r14
  int *v13; // rdi
  int NumPathsFromSource; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  DMMVIDPNSOURCEMODE *v19; // rbp
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  const struct DMMVIDPNSOURCEMODE *v24; // rbp
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  DMMVIDPNTARGETMODESET *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  const struct DMMVIDPNTARGETMODE *v34; // rbp
  __int64 v35; // r8
  int v36; // eax
  unsigned int v37; // r8d
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  unsigned __int64 v55; // [rsp+80h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODE **v56; // [rsp+88h] [rbp+10h] BYREF
  __int64 v57; // [rsp+90h] [rbp+18h]
  DMMVIDPNTARGETMODESET *v58; // [rsp+98h] [rbp+20h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 16LL) != KeGetCurrentThread() )
  {
    v43 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !a2 )
  {
    v44 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !a3 )
  {
    v45 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v45);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, (__int64)a2);
  v7 = *(unsigned int *)a3;
  v8 = *((unsigned int *)a3 + 1);
  v9 = *(_DWORD *)a3;
  v57 = Container;
  v10 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 304), v9);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v12 = *(DMMVIDPNSOURCEMODE ***)(v10 + 104);
  }
  else
  {
    v12 = 0LL;
  }
  v55 = 0LL;
  v56 = v12;
  v13 = (int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, (unsigned int)v7, &v55);
  v18 = NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
    v46[3] = v7;
    v46[4] = a2;
LABEL_28:
    v46[5] = v18;
    WdLogEvent5_WdError(v46);
    goto LABEL_29;
  }
  if ( !v55 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v47);
  }
  v19 = v12[18];
  if ( v19 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v12[18]);
    if ( operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
      goto LABEL_15;
    v18 = WdLogNewEntry5_WdError(v50, v49, v51);
    *(_QWORD *)(v18 + 24) = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v19);
    *(_QWORD *)(v18 + 32) = v13;
    *(_QWORD *)(v18 + 40) = v7;
    WdLogEvent5_WdError(v18);
    LODWORD(v18) = -1071774960;
LABEL_29:
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v56, 0LL);
    return (unsigned int)v18;
  }
  BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                (DMMVIDPNSOURCEMODESET *)v12,
                *v13,
                *((_DWORD *)a3 + 93),
                (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
  v24 = BestMatch;
  if ( !BestMatch )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
    v52[3] = (unsigned int)*v13;
    v52[4] = *((unsigned int *)a3 + 93);
    v52[5] = *((int *)a3 + 97);
    WdLogEvent5_WdError(v52);
    LODWORD(v18) = -1071774970;
    goto LABEL_29;
  }
  v25 = VIDPN_MGR::PinVidPnSourceMode(this, (struct DMMVIDPNSOURCEMODESET *const)v12, *((_DWORD *)BestMatch + 6), 1);
  v18 = v25;
  if ( v25 < 0 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
    v46[3] = v24;
    v46[4] = v7;
    goto LABEL_28;
  }
LABEL_15:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v56, 0LL);
  v29 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v57 + 312), v8);
  v30 = *(_QWORD *)(v29 + 104);
  if ( v30 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v30 + 96));
    v31 = *(DMMVIDPNTARGETMODESET **)(v29 + 104);
  }
  else
  {
    v31 = 0LL;
  }
  v58 = v31;
  v34 = DMMVIDPNTARGETMODESET::FindBestMatch(v31, (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
  if ( v34 )
  {
    v36 = *((_DWORD *)a3 + 118);
    v37 = *((_DWORD *)v34 + 6);
    *((_DWORD *)v34 + 34) = *((_DWORD *)a3 + 119);
    *((_DWORD *)v34 + 33) = v36;
    v38 = VIDPN_MGR::PinVidPnTargetMode(this, v31, v37, 1);
    v18 = v38;
    if ( v38 < 0 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
      v54[3] = v34;
      v54[4] = v8;
      v54[5] = v18;
      WdLogEvent5_WdError(v54);
    }
    else
    {
      LODWORD(v18) = 0;
    }
  }
  else
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v35);
    v53[3] = *((unsigned int *)a3 + 105);
    v53[4] = *((unsigned int *)a3 + 106);
    v53[5] = *((unsigned int *)a3 + 107);
    v53[6] = *((unsigned int *)a3 + 108);
    WdLogEvent5_WdError(v53);
    LODWORD(v18) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v58, 0LL);
  return (unsigned int)v18;
}
