/*
 * XREFs of ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0285250
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

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const GUID *a3,
        _QWORD *a4)
{
  __int64 v5; // r13
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 Container; // rax
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rax
  struct DMMVIDPNTARGET *v25; // rax
  __int64 v26; // rcx
  struct DMMVIDPNSOURCE *v27; // r11
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r15
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  const GUID *v43; // r8
  __int64 v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h]
  char v48; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v49)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+58h] [rbp-A8h]
  _BYTE *v51; // [rsp+60h] [rbp-A0h]
  _BYTE *v52; // [rsp+80h] [rbp-80h]
  _BYTE v53[80]; // [rsp+90h] [rbp-70h] BYREF
  int v54; // [rsp+E0h] [rbp-20h]

  v46 = -1;
  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  v47 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v48 = 1;
    v46 = 7035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7035);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 7035);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v14 = v7;
  v12[3] = v7;
  v12[4] = v5;
  v12[5] = this;
  v12[6] = a4;
  if ( !a4 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v15[3] = 0LL;
    v15[4] = v7;
    v15[5] = v5;
    v15[6] = this;
    WdLogEvent5_WdError(v15);
    v16 = -1073741811;
    goto LABEL_24;
  }
  *a4 = 0LL;
  v17 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v19 = v17;
  if ( !v17 )
  {
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    v16 = -1071774976;
    goto LABEL_24;
  }
  v45 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v17 + 160);
  if ( !IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v7) )
  {
    v24 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v24 + 24) = v7;
    WdLogEvent5_WdError(v24);
    v16 = -1071774972;
    goto LABEL_24;
  }
  v25 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v23 + 312), v5);
  if ( !v25 )
  {
    v28 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v28 + 24) = v5;
    WdLogEvent5_WdError(v28);
    v16 = -1071774971;
    goto LABEL_24;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v53,
    v27,
    v25,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v54 != 2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v29);
    WdLogEvent5_WdAssertion(v30);
  }
  v50 = 0;
  v49 = DMMVIDPNTOPOLOGY::FindByValue;
  v52 = v53;
  v51 = v53;
  v31 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v19,
          (__int64)&v49,
          &v45,
          1);
  v35 = v31;
  v16 = -1071774937;
  if ( v31 == -1071774937 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
    v36[3] = v14;
    v36[4] = v5;
    v36[5] = v19;
    WdLogEvent5_WdWarning(v36);
    if ( v45 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v37);
      WdLogEvent5_WdAssertion(v38);
    }
    goto LABEL_20;
  }
  if ( v31 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v39[3] = v14;
    v39[4] = v5;
    v39[5] = v19;
    v39[6] = v35;
    WdLogEvent5_WdError(v39);
    v16 = v35;
LABEL_20:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v53);
    goto LABEL_24;
  }
  v40 = v45;
  if ( !v45 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v33);
    WdLogEvent5_WdAssertion(v41);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v53);
  *a4 = v40;
  v16 = 0;
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v42, &EventProfilerExit, v43, v46);
  return v16;
}
