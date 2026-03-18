/*
 * XREFs of ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C0285BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const GUID *a3,
        unsigned int *a4)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char **v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  char **v18; // r14
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  unsigned int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rcx
  const GUID *v29; // r8
  int v31; // [rsp+20h] [rbp-20h] BYREF
  __int64 v32; // [rsp+28h] [rbp-18h]
  char v33; // [rsp+30h] [rbp-10h]
  unsigned int v34; // [rsp+78h] [rbp+38h] BYREF

  v31 = -1;
  v32 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 7033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7033);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 7033);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = a3;
  v12[4] = v7;
  v12[5] = v6;
  v12[6] = a4;
  if ( a4 )
  {
    *a4 = -1;
    v15 = (char **)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v18 = v15;
    if ( v15 )
    {
      v34 = v16;
      v20 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v15, v7, (__int64)a3, &v34);
      v6 = v20;
      if ( v20 >= 0 )
      {
        v26 = v34;
        if ( v20 == 1075708748 && v34 != -1 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v27);
        }
        *a4 = v26;
        LODWORD(v6) = 0;
      }
      else
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
        v25[3] = a3;
        v25[4] = v7;
        v25[5] = v18;
        v25[6] = v6;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v19 + 24) = v6;
      WdLogEvent5_WdError(v19);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v14[3] = 0LL;
    v14[4] = a3;
    v14[5] = v6;
    v14[6] = v7;
    WdLogEvent5_WdError(v14);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v31);
  return (unsigned int)v6;
}
