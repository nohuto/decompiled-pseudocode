/*
 * XREFs of ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00E64A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C00042F8 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0005DA0 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C0005F60 (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00060BC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00E66A0 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6778 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00FBD2C (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  DMMVIDPNTARGETMODESET *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rdi
  unsigned int v23; // eax
  unsigned __int8 v24; // al
  int v25; // edx
  int v26; // edi
  DMMVIDPNTARGETMODE *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  DMMVIDPNTARGETMODE *v32; // rdi
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  const GUID *v42; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  UINT Numerator; // edx
  unsigned int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  int v56; // [rsp+20h] [rbp-20h] BYREF
  __int64 v57; // [rsp+28h] [rbp-18h]
  char v58; // [rsp+30h] [rbp-10h]
  DMMVIDPNTARGETMODE *v59; // [rsp+70h] [rbp+30h] BYREF
  DMMVIDPNTARGETMODE *v60; // [rsp+78h] [rbp+38h] BYREF

  v56 = -1;
  v57 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v58 = 1;
    v56 = 7014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7014);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v56, 7014LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( !a2 )
  {
    v44 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v44 + 24) = 0LL;
    *(_QWORD *)(v44 + 32) = this;
    WdLogEvent5_WdError(v44);
    LODWORD(v36) = -1071774959;
    goto LABEL_25;
  }
  v11 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v15 = (DMMVIDPNTARGETMODESET *)v11;
  if ( !v11 )
  {
    v45 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v45 + 24) = this;
    WdLogEvent5_WdError(v45);
    LODWORD(v36) = -1071774967;
    goto LABEL_25;
  }
  v16 = *(_QWORD *)(v11 + 112);
  v17 = *(_QWORD *)(v16 + 40);
  if ( !v17 )
  {
    v46 = WdLogNewEntry5_WdAssertion(0LL, v12);
    WdLogEvent5_WdAssertion(v46);
    v17 = *(_QWORD *)(v16 + 40);
  }
  v20 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v17 + 64, v12) + 48);
  v22 = *(_QWORD *)(v20 + 8);
  if ( !v22 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v47);
    v22 = *(_QWORD *)(v20 + 8);
    if ( !v22 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v19, v18);
      WdLogEvent5_WdAssertion(v48);
    }
  }
  if ( a2->VideoSignalInfo.VSyncFreq.Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v19 = *(_QWORD *)(v22 + 16);
    if ( (*(_DWORD *)(v19 + 308) & 0x100) == 0 && !*(_QWORD *)(v19 + 560) )
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
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v21);
    v50[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v50[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v50[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v50[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
    WdLogEvent5_WdError(v50);
    LODWORD(v36) = -1071774966;
    goto LABEL_25;
  }
  if ( a2->VideoSignalInfo.HSyncFreq.Numerator != -2
    || a2->VideoSignalInfo.HSyncFreq.Denominator != -2
    || a2->VideoSignalInfo.PixelRate != 4294967294 )
  {
    goto LABEL_54;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v22 + 16) + 560LL) )
  {
    if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      goto LABEL_54;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = *(_QWORD *)(v22 + 16);
  }
  else
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
    v49[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v49[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v49[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v49[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
  }
LABEL_13:
  v19 = *(_QWORD *)(*((_QWORD *)v15 + 14) + 96LL);
  v23 = *(_DWORD *)(v19 + 84);
  if ( (v23 < 0xF || v23 > 0x11) && (*(_DWORD *)(*(_QWORD *)(v22 + 16) + 308LL) & 0x200) == 0 )
  {
    if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) == 0 )
      goto LABEL_16;
LABEL_54:
    v53 = WdLogNewEntry5_WdError(v19, v18, v21);
    LODWORD(v36) = -1071774966;
    *(_QWORD *)(v53 + 24) = *(_QWORD *)(v22 + 16);
    *(_QWORD *)(v53 + 32) = -1071774966LL;
    WdLogEvent5_WdError(v53);
    goto LABEL_25;
  }
  if ( ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F) == 0 )
    goto LABEL_54;
  Numerator = a2->VideoSignalInfo.VSyncFreq.Numerator;
  if ( Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v19 = ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F)
        * a2->VideoSignalInfo.VSyncFreq.Denominator;
    v52 = 10 * Numerator;
    v18 = 10 * Numerator % (unsigned int)v19;
    if ( v52 / (unsigned int)v19 < 0xEF )
      goto LABEL_54;
  }
LABEL_16:
  v24 = DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v22 + 16));
  v26 = v25 & 3;
  if ( v24 )
    v26 = v25;
  v27 = (DMMVIDPNTARGETMODE *)operator new[](0x90uLL, 0x4E506456u, PagedPool);
  if ( v27 )
    v32 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(v27, a2->Id, (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE)v26);
  else
    v32 = 0LL;
  v59 = v32;
  if ( !v32 )
  {
    v54 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
    *(_QWORD *)(v54 + 24) = this;
    WdLogEvent5_WdLowResource(v54);
    LODWORD(v36) = -1073741801;
    goto LABEL_24;
  }
  v33 = DMMVIDEOSIGNALMODE::Initialize((DMMVIDPNTARGETMODE *)((char *)v32 + 72), &a2->VideoSignalInfo);
  v36 = v33;
  if ( v33 < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34);
    v55[3] = v32;
LABEL_59:
    v55[5] = v36;
    v55[4] = this;
    goto LABEL_24;
  }
  v59 = 0LL;
  v60 = v32;
  v37 = DMMVIDPNTARGETMODESET::AddMode(v15, &v60);
  v36 = v37;
  if ( v37 < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdTrace(v39, v38);
    v55[3] = a2;
    goto LABEL_59;
  }
  LODWORD(v36) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(v15, a2);
LABEL_24:
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v59);
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v40);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v41, &EventProfilerExit, v42, v56);
  return (unsigned int)v36;
}
