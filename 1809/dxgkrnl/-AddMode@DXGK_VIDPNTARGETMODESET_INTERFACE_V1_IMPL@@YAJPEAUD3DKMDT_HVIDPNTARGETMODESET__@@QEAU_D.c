/*
 * XREFs of ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D93E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C00041D8 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000A58C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000A8C4 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C000AA54 (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93A0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00D95E0 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00DC5E8 (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  DMMVIDPNTARGETMODESET *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  unsigned int v22; // eax
  unsigned __int8 v23; // al
  int v24; // edx
  int v25; // edi
  DMMVIDPNTARGETMODE *v26; // rax
  __int64 v27; // rcx
  DMMVIDPNTARGETMODE *v28; // rdi
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  UINT Numerator; // edx
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  int v54; // [rsp+20h] [rbp-20h] BYREF
  __int64 v55; // [rsp+28h] [rbp-18h]
  char v56; // [rsp+30h] [rbp-10h]
  DMMVIDPNTARGETMODE *v57; // [rsp+70h] [rbp+30h] BYREF
  DMMVIDPNTARGETMODE *v58; // [rsp+78h] [rbp+38h] BYREF

  v54 = -1;
  v55 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v56 = 1;
    v54 = 7014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7014);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54, 7014);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  if ( !a2 )
  {
    v43 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v43 + 24) = 0LL;
    *(_QWORD *)(v43 + 32) = this;
    WdLogEvent5_WdError(v43);
    LODWORD(v34) = -1071774959;
    goto LABEL_25;
  }
  v11 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v13 = (DMMVIDPNTARGETMODESET *)v11;
  if ( !v11 )
  {
    v44 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v44 + 24) = this;
    WdLogEvent5_WdError(v44);
    LODWORD(v34) = -1071774967;
    goto LABEL_25;
  }
  v14 = *(_QWORD *)(v11 + 112);
  v15 = *(_QWORD *)(v14 + 40);
  if ( !v15 )
  {
    v45 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v45);
    v15 = *(_QWORD *)(v14 + 40);
  }
  v18 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v15 + 64) + 48);
  v21 = *(_QWORD *)(v18 + 8);
  if ( !v21 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v46);
    v21 = *(_QWORD *)(v18 + 8);
    if ( !v21 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v47);
    }
  }
  if ( a2->VideoSignalInfo.VSyncFreq.Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v17 = *(_QWORD *)(v21 + 16);
    if ( (*(_DWORD *)(v17 + 308) & 0x100) == 0 && !*(_QWORD *)(v17 + 568) )
      goto LABEL_54;
    if ( a2->VideoSignalInfo.HSyncFreq.Numerator == -2 && a2->VideoSignalInfo.HSyncFreq.Denominator == -2 )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedHSync )
        goto LABEL_49;
      a2->VideoSignalInfo.HSyncFreq.Numerator = 1000;
      a2->VideoSignalInfo.HSyncFreq.Denominator = 1;
    }
    if ( a2->VideoSignalInfo.PixelRate != 4294967294 )
      goto LABEL_13;
    if ( VIDPN_MGR::_bAllowUnspecifiedPixelRate )
    {
      a2->VideoSignalInfo.PixelRate = 1000000LL;
      goto LABEL_13;
    }
LABEL_49:
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v49[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v49[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v49[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v49[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
    WdLogEvent5_WdError(v49);
    LODWORD(v34) = -1071774966;
    goto LABEL_25;
  }
  if ( a2->VideoSignalInfo.HSyncFreq.Numerator != -2
    || a2->VideoSignalInfo.HSyncFreq.Denominator != -2
    || a2->VideoSignalInfo.PixelRate != 4294967294 )
  {
    goto LABEL_54;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v21 + 16) + 568LL) )
  {
    if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      goto LABEL_54;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v19, v20) + 24) = *(_QWORD *)(v21 + 16);
  }
  else
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v19, v20);
    v48[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v48[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v48[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v48[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
  }
LABEL_13:
  v17 = *(_QWORD *)(*((_QWORD *)v13 + 14) + 96LL);
  v22 = *(_DWORD *)(v17 + 84);
  if ( (v22 < 0xF || v22 > 0x11) && (*(_DWORD *)(*(_QWORD *)(v21 + 16) + 308LL) & 0x200) == 0 )
  {
    if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) == 0 )
      goto LABEL_16;
LABEL_54:
    v51 = WdLogNewEntry5_WdError(v17);
    LODWORD(v34) = -1071774966;
    *(_QWORD *)(v51 + 24) = *(_QWORD *)(v21 + 16);
    *(_QWORD *)(v51 + 32) = -1071774966LL;
    WdLogEvent5_WdError(v51);
    goto LABEL_25;
  }
  if ( ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F) == 0 )
    goto LABEL_54;
  Numerator = a2->VideoSignalInfo.VSyncFreq.Numerator;
  if ( Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v17 = ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F)
        * a2->VideoSignalInfo.VSyncFreq.Denominator;
    if ( 10 * Numerator / (unsigned int)v17 < 0xEF )
      goto LABEL_54;
  }
LABEL_16:
  v23 = DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v21 + 16));
  v25 = v24 & 3;
  if ( v23 )
    v25 = v24;
  v26 = (DMMVIDPNTARGETMODE *)operator new(0x90uLL, 0x4E506456u, PagedPool);
  if ( v26 )
    v28 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(v26, a2->Id, (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE)v25);
  else
    v28 = 0LL;
  v57 = v28;
  if ( !v28 )
  {
    v52 = WdLogNewEntry5_WdLowResource(v27);
    *(_QWORD *)(v52 + 24) = this;
    WdLogEvent5_WdLowResource(v52);
    LODWORD(v34) = -1073741801;
    goto LABEL_24;
  }
  v29 = DMMVIDEOSIGNALMODE::Initialize((DMMVIDPNTARGETMODE *)((char *)v28 + 72), &a2->VideoSignalInfo);
  v34 = v29;
  if ( v29 < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v30, v32, v33);
    v53[3] = v28;
LABEL_59:
    v53[5] = v34;
    v53[4] = this;
    goto LABEL_24;
  }
  v57 = 0LL;
  v58 = v28;
  v35 = DMMVIDPNTARGETMODESET::AddMode(v13, &v58);
  v34 = v35;
  if ( v35 < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v36, v38, v39);
    v53[3] = a2;
    goto LABEL_59;
  }
  LODWORD(v34) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(v13, a2);
LABEL_24:
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v57);
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, v54);
  return (unsigned int)v34;
}
