/*
 * XREFs of ?AcquireFirstSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C02B7690
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C002241C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedSourceInfo@V?$mem_fun_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@@KM_STL@@@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C02BFD38 (--$AcquireDdiEnumeratorCachedSourceInfo@V-$mem_fun_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENT.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireFirstSourceInfo(
        DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v28)(DMMVIDEOPRESENTTARGETSET *); // [rsp+20h] [rbp-30h] BYREF
  int v29; // [rsp+28h] [rbp-28h]
  int v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+38h] [rbp-18h]
  char v32; // [rsp+40h] [rbp-10h]
  __int64 v33; // [rsp+68h] [rbp+18h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 6041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 6041);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 6041LL);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v13 = ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
    if ( v13 )
    {
      v29 = 0;
      v33 = 0LL;
      v28 = DMMVIDEOPRESENTTARGETSET::GetFirstTarget;
      v16 = DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET>>(
              v13,
              &v28,
              &v33);
      v10 = v16;
      if ( v16 == -1071774972 )
      {
        v19 = WdLogNewEntry5_WdWarning(v17, v9, v18);
        *(_QWORD *)(v19 + 24) = v13;
        WdLogEvent5_WdWarning(v19);
        if ( v33 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v20, v9);
          WdLogEvent5_WdAssertion(v21);
        }
        v10 = 1075708747;
      }
      else if ( v16 >= 0 )
      {
        v23 = v33;
        if ( !v33 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v17, v9);
          WdLogEvent5_WdAssertion(v24);
        }
        *(_QWORD *)a2 = v23;
        v10 = 0;
      }
      else
      {
        v22 = WdLogNewEntry5_WdError(v17, v9, v18);
        *(_QWORD *)(v22 + 24) = v13;
        WdLogEvent5_WdError(v22);
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v12, v11, v14);
      *(_QWORD *)(v15 + 24) = this;
      WdLogEvent5_WdError(v15);
      v10 = -1071774955;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    v10 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v9);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v30);
  return v10;
}
