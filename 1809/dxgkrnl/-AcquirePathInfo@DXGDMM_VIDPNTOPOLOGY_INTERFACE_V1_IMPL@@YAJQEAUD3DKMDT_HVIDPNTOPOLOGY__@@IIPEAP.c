/*
 * XREFs of ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00D9CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000B2E8 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C000B35C (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C000B610 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00D9B0C (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const GUID *a3,
        _QWORD *a4)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 Container; // rax
  __int64 v13; // rcx
  __int64 v14; // r10
  struct DMMVIDPNTARGET *v15; // rax
  __int64 v16; // rcx
  struct DMMVIDPNSOURCE *v17; // r11
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  unsigned int v25; // ebx
  __int64 v26; // rbx
  __int64 v27; // rcx
  const GUID *v28; // r8
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+30h] [rbp-D0h] BYREF
  int v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h]
  char v43; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v44)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+58h] [rbp-A8h]
  _BYTE *v46; // [rsp+60h] [rbp-A0h]
  _BYTE *v47; // [rsp+80h] [rbp-80h]
  _BYTE v48[80]; // [rsp+90h] [rbp-70h] BYREF
  int v49; // [rsp+E0h] [rbp-20h]

  v41 = -1;
  v42 = 0LL;
  v6 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 6021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6021);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 6021);
  if ( !a4 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v30[3] = 0LL;
    v30[4] = v7;
    v30[5] = v6;
    v30[6] = this;
    WdLogEvent5_WdError(v30);
    v25 = -1073741811;
    goto LABEL_14;
  }
  *a4 = 0LL;
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v11 = v9;
  if ( !v9 )
  {
    v31 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v31 + 24) = this;
    WdLogEvent5_WdError(v31);
    v25 = -1071774976;
    goto LABEL_14;
  }
  v40 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v9 + 160);
  if ( !IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v7) )
  {
    v32 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v32 + 24) = v7;
    WdLogEvent5_WdError(v32);
    v25 = -1071774972;
    goto LABEL_14;
  }
  v15 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v14 + 312), v6);
  if ( !v15 )
  {
    v33 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v33 + 24) = v6;
    WdLogEvent5_WdError(v33);
    v25 = -1071774971;
    goto LABEL_14;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v48,
    v17,
    v15,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v49 != 2 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v34);
  }
  v45 = 0;
  v44 = DMMVIDPNTOPOLOGY::FindByValue;
  v47 = v48;
  v46 = v48;
  v19 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v11,
          (__int64)&v44,
          &v40,
          0);
  v24 = v19;
  v25 = -1071774937;
  if ( v19 == -1071774937 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v35[3] = v7;
    v35[4] = v6;
    v35[5] = v11;
    WdLogEvent5_WdWarning(v35);
    if ( v40 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v36);
      WdLogEvent5_WdAssertion(v37);
    }
    goto LABEL_25;
  }
  if ( v19 < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21, v20, v22, v23);
    v38[3] = v7;
    v38[4] = v6;
    v38[5] = v11;
    v38[6] = v24;
    WdLogEvent5_WdDmmEvent(v38);
    v25 = v24;
LABEL_25:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v48);
    goto LABEL_14;
  }
  v26 = v40;
  if ( !v40 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v39);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v48);
  *a4 = v26;
  v25 = 0;
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v41);
  return v25;
}
