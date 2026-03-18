/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B8160
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0002164 (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C00062C4 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0006F28 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007060 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000B2E8 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00D4444 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00D887C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00D8EBC (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  __int64 v6; // rax
  __int64 Container; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  DMMVIDPNSOURCEMODE **v13; // r14
  int *v14; // rdi
  int NumPathsFromSource; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  DMMVIDPNSOURCEMODE *v18; // rbp
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v20; // rcx
  const struct DMMVIDPNSOURCEMODE *v21; // rbp
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  DMMVIDPNTARGETMODESET *v26; // rdi
  __int64 v27; // rcx
  const struct DMMVIDPNTARGETMODE *v28; // rbp
  int v29; // eax
  unsigned int v30; // r8d
  int v31; // eax
  __int64 v32; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  unsigned __int64 v43; // [rsp+80h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODE **v44; // [rsp+88h] [rbp+10h] BYREF
  __int64 v45; // [rsp+90h] [rbp+18h]
  DMMVIDPNTARGETMODESET *v46; // [rsp+98h] [rbp+20h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a2 )
  {
    v34 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !a3 )
  {
    v35 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v35);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v8 = *(unsigned int *)a3;
  v9 = *((unsigned int *)a3 + 1);
  v10 = *(_DWORD *)a3;
  v45 = Container;
  v11 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v10);
  v12 = *(_QWORD *)(v11 + 104);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
    v13 = *(DMMVIDPNSOURCEMODE ***)(v11 + 104);
  }
  else
  {
    v13 = 0LL;
  }
  v43 = 0LL;
  v44 = v13;
  v14 = (int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v8, &v43);
  v17 = NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v36[3] = v8;
    v36[4] = a2;
LABEL_29:
    v36[5] = v17;
    WdLogEvent5_WdError(v36);
    goto LABEL_30;
  }
  if ( !v43 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v37);
  }
  v18 = v13[18];
  if ( v18 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v13[18]);
    if ( operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
      goto LABEL_15;
    v17 = WdLogNewEntry5_WdError(v39);
    *(_QWORD *)(v17 + 24) = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v18);
    *(_QWORD *)(v17 + 32) = v14;
    *(_QWORD *)(v17 + 40) = v8;
    WdLogEvent5_WdError(v17);
    LODWORD(v17) = -1071774960;
LABEL_30:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v44, 0LL);
    return (unsigned int)v17;
  }
  BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                (DMMVIDPNSOURCEMODESET *)v13,
                *v14,
                *((_DWORD *)a3 + 93),
                (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
  v21 = BestMatch;
  if ( !BestMatch )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v40[3] = (unsigned int)*v14;
    v40[4] = *((unsigned int *)a3 + 93);
    v40[5] = *((int *)a3 + 97);
    WdLogEvent5_WdError(v40);
    LODWORD(v17) = -1071774970;
    goto LABEL_30;
  }
  v22 = VIDPN_MGR::PinVidPnSourceMode(this, (struct DMMVIDPNSOURCEMODESET *const)v13, *((_DWORD *)BestMatch + 6), 1);
  v17 = v22;
  if ( v22 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v36[3] = v21;
    v36[4] = v8;
    goto LABEL_29;
  }
LABEL_15:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v44, 0LL);
  v24 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v45 + 312), v9);
  v25 = *(_QWORD *)(v24 + 104);
  if ( v25 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 96));
    v26 = *(DMMVIDPNTARGETMODESET **)(v24 + 104);
  }
  else
  {
    v26 = 0LL;
  }
  v46 = v26;
  v28 = DMMVIDPNTARGETMODESET::FindBestMatch(v26, (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
  if ( v28 )
  {
    v29 = *((_DWORD *)a3 + 118);
    v30 = *((_DWORD *)v28 + 6);
    *((_DWORD *)v28 + 34) = *((_DWORD *)a3 + 119);
    *((_DWORD *)v28 + 33) = v29;
    v31 = VIDPN_MGR::PinVidPnTargetMode(this, v26, v30, 1);
    v17 = v31;
    if ( v31 < 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      v42[3] = v28;
      v42[4] = v9;
      v42[5] = v17;
      WdLogEvent5_WdError(v42);
    }
    else
    {
      LODWORD(v17) = 0;
    }
  }
  else
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    v41[3] = *((unsigned int *)a3 + 105);
    v41[4] = *((unsigned int *)a3 + 106);
    v41[5] = *((unsigned int *)a3 + 107);
    v41[6] = *((unsigned int *)a3 + 108);
    WdLogEvent5_WdError(v41);
    LODWORD(v17) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v46, 0LL);
  return (unsigned int)v17;
}
