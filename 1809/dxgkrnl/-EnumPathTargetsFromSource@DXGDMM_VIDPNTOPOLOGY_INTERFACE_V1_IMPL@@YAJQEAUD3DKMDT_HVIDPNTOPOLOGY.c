/*
 * XREFs of ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C0136E70
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const GUID *a3,
        unsigned int *a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rcx
  char **v9; // rax
  __int64 v10; // rcx
  char **v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  __int64 v18; // rcx
  const GUID *v19; // r8
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+28h] [rbp-18h]
  char v27; // [rsp+30h] [rbp-10h]
  unsigned int v28; // [rsp+78h] [rbp+38h] BYREF

  v25 = -1;
  v26 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 6019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6019);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 6019);
  if ( a4 )
  {
    *a4 = -1;
    v9 = (char **)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v11 = v9;
    if ( v9 )
    {
      v28 = -1;
      v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v9, v7, (__int64)a3, &v28);
      v6 = v12;
      if ( v12 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
        v23[3] = a3;
        v23[4] = v7;
        v23[5] = v11;
        v23[6] = v6;
      }
      else
      {
        v17 = v28;
        if ( v12 == 1075708748 && v28 != -1 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v24);
        }
        *a4 = v17;
        LODWORD(v6) = 0;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v22 + 24) = v6;
      WdLogEvent5_WdError(v22);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v21[3] = 0LL;
    v21[4] = a3;
    v21[5] = v6;
    v21[6] = v7;
    WdLogEvent5_WdError(v21);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v25);
  return (unsigned int)v6;
}
