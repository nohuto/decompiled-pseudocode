/*
 * XREFs of ?AcquireFirstTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C027F430
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C001FA88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedTargetInfo@V?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0282CB0 (--$AcquireDdiEnumeratorCachedTargetInfo@V-$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENT.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireFirstTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v24)(DMMVIDEOPRESENTTARGETSET *); // [rsp+20h] [rbp-30h] BYREF
  int v25; // [rsp+28h] [rbp-28h]
  int v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h]
  char v28; // [rsp+40h] [rbp-10h]
  __int64 v29; // [rsp+68h] [rbp+18h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 6045;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 6045);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 6045);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v9 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v9 )
    {
      v25 = 0;
      v29 = 0LL;
      v24 = DMMVIDEOPRESENTTARGETSET::GetFirstTarget;
      v11 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET>>(
              v9,
              &v24,
              &v29);
      v7 = v11;
      if ( v11 == -1071774971 )
      {
        v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v15 + 24) = v9;
        WdLogEvent5_WdWarning(v15);
        if ( v29 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v16);
          WdLogEvent5_WdAssertion(v17);
        }
        v7 = 1075708747;
      }
      else if ( v11 >= 0 )
      {
        v19 = v29;
        if ( !v29 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v20);
        }
        *(_QWORD *)a2 = v19;
        v7 = 0;
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v18 + 24) = v9;
        WdLogEvent5_WdError(v18);
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v10 + 24) = this;
      WdLogEvent5_WdError(v10);
      v7 = -1071774954;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = this;
    WdLogEvent5_WdError(v6);
    v7 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v26);
  return v7;
}
