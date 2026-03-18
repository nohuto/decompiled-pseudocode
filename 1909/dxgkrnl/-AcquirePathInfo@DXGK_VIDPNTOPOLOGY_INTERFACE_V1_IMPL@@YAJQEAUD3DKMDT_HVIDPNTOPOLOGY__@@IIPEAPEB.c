/*
 * XREFs of ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02BD680
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C00054F0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058A0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0005A84 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C0005BD0 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00E67F4 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
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
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 Container; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r10
  __int64 v29; // rax
  struct DMMVIDPNTARGET *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DMMVIDPNSOURCE *v34; // r11
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r15
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rcx
  const GUID *v52; // r8
  __int64 v54; // [rsp+30h] [rbp-D0h] BYREF
  int v55; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+40h] [rbp-C0h]
  char v57; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v58)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+50h] [rbp-B0h] BYREF
  int v59; // [rsp+58h] [rbp-A8h]
  _BYTE *v60; // [rsp+60h] [rbp-A0h]
  _BYTE *v61; // [rsp+80h] [rbp-80h]
  _BYTE v62[80]; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+E0h] [rbp-20h]

  v55 = -1;
  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  v56 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v57 = 1;
    v55 = 7035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7035);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v55, 7035LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v14 = v7;
  v10[3] = v7;
  v10[4] = v5;
  v10[5] = this;
  v10[6] = a4;
  if ( !a4 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v15[3] = 0LL;
    v15[4] = v7;
    v15[5] = v5;
    v15[6] = this;
    WdLogEvent5_WdError(v15);
    v17 = -1073741811;
    goto LABEL_24;
  }
  *a4 = 0LL;
  v18 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v22 = v18;
  if ( !v18 )
  {
    v23 = WdLogNewEntry5_WdError(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    v17 = -1071774976;
    goto LABEL_24;
  }
  v54 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v18 + 160, v19);
  if ( !IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 304), v7) )
  {
    v29 = WdLogNewEntry5_WdError(v26, v25, v27);
    *(_QWORD *)(v29 + 24) = v7;
    WdLogEvent5_WdError(v29);
    v17 = -1071774972;
    goto LABEL_24;
  }
  v30 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v28 + 312), v5);
  if ( !v30 )
  {
    v35 = WdLogNewEntry5_WdError(v32, v31, v33);
    *(_QWORD *)(v35 + 24) = v5;
    WdLogEvent5_WdError(v35);
    v17 = -1071774971;
    goto LABEL_24;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v62,
    v34,
    v30,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v63 != 2 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37, v36);
    WdLogEvent5_WdAssertion(v38);
  }
  v59 = 0;
  v58 = DMMVIDPNTOPOLOGY::FindByValue;
  v61 = v62;
  v60 = v62;
  v39 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v22,
          (__int64)&v58,
          &v54,
          1);
  v43 = v39;
  v17 = -1071774937;
  if ( v39 == -1071774937 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
    v44[3] = v14;
    v44[4] = v5;
    v44[5] = v22;
    WdLogEvent5_WdWarning(v44);
    if ( v54 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v46, v45);
      WdLogEvent5_WdAssertion(v47);
    }
    goto LABEL_20;
  }
  if ( v39 < 0 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40, v42);
    v48[3] = v14;
    v48[4] = v5;
    v48[5] = v22;
    v48[6] = v43;
    WdLogEvent5_WdError(v48);
    v17 = v43;
LABEL_20:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v62);
    goto LABEL_24;
  }
  v49 = v54;
  if ( !v54 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v41, v40);
    WdLogEvent5_WdAssertion(v50);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v62);
  *a4 = v49;
  v17 = 0;
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v16);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v51, &EventProfilerExit, v52, v55);
  return v17;
}
