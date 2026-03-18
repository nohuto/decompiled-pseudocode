/*
 * XREFs of ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E5680
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0005530 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0006870 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C00069BC (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00E61D4 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const GUID *a3,
        _QWORD *a4)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 Container; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r10
  struct DMMVIDPNTARGET *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DMMVIDPNSOURCE *v25; // r11
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r15
  unsigned int v33; // ebx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  const GUID *v37; // r8
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // [rsp+30h] [rbp-D0h] BYREF
  int v51; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-C0h]
  char v53; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v54)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+50h] [rbp-B0h] BYREF
  int v55; // [rsp+58h] [rbp-A8h]
  _BYTE *v56; // [rsp+60h] [rbp-A0h]
  _BYTE *v57; // [rsp+80h] [rbp-80h]
  _BYTE v58[80]; // [rsp+90h] [rbp-70h] BYREF
  int v59; // [rsp+E0h] [rbp-20h]

  v51 = -1;
  v52 = 0LL;
  v6 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v53 = 1;
    v51 = 6021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6021);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v51, 6021LL);
  if ( !a4 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v39[3] = 0LL;
    v39[4] = v7;
    v39[5] = v6;
    v39[6] = this;
    WdLogEvent5_WdError(v39);
    v33 = -1073741811;
    goto LABEL_14;
  }
  *a4 = 0LL;
  v11 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v15 = v11;
  if ( !v11 )
  {
    v40 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v40 + 24) = this;
    WdLogEvent5_WdError(v40);
    v33 = -1071774976;
    goto LABEL_14;
  }
  v50 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v11 + 160, v12);
  if ( !IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 304), v7) )
  {
    v41 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v41 + 24) = v7;
    WdLogEvent5_WdError(v41);
    v33 = -1071774972;
    goto LABEL_14;
  }
  v21 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v20 + 312), v6);
  if ( !v21 )
  {
    v42 = WdLogNewEntry5_WdError(v23, v22, v24);
    *(_QWORD *)(v42 + 24) = v6;
    WdLogEvent5_WdError(v42);
    v33 = -1071774971;
    goto LABEL_14;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v58,
    v25,
    v21,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v59 != 2 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v27, v26);
    WdLogEvent5_WdAssertion(v43);
  }
  v55 = 0;
  v54 = DMMVIDPNTOPOLOGY::FindByValue;
  v57 = v58;
  v56 = v58;
  v28 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v15,
          &v54,
          &v50,
          0LL);
  v32 = v28;
  v33 = -1071774937;
  if ( v28 == -1071774937 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
    v44[3] = v7;
    v44[4] = v6;
    v44[5] = v15;
    WdLogEvent5_WdWarning(v44);
    if ( v50 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v46, v45);
      WdLogEvent5_WdAssertion(v47);
    }
    goto LABEL_25;
  }
  if ( v28 < 0 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30, v29);
    v48[3] = v7;
    v48[4] = v6;
    v48[5] = v15;
    v48[6] = v32;
    WdLogEvent5_WdDmmEvent(v48);
    v33 = v32;
LABEL_25:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v58);
    goto LABEL_14;
  }
  v34 = v50;
  if ( !v50 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v30, v29);
    WdLogEvent5_WdAssertion(v49);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v58);
  *a4 = v34;
  v33 = 0;
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v35);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v51);
  return v33;
}
