/*
 * XREFs of ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C0149230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const GUID *a3,
        unsigned int *a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char **v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rcx
  const GUID *v21; // r8
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h]
  char v29; // [rsp+30h] [rbp-10h]
  unsigned int v30; // [rsp+78h] [rbp+38h] BYREF

  v27 = -1;
  v28 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 6019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6019);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 6019LL);
  if ( a4 )
  {
    *a4 = -1;
    v11 = (char **)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v15 = v11;
    if ( v11 )
    {
      v30 = -1;
      v16 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v11, (unsigned int)v7, (__int64)a3, &v30);
      v6 = v16;
      if ( v16 < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17);
        v25[3] = a3;
        v25[4] = v7;
        v25[5] = v15;
        v25[6] = v6;
      }
      else
      {
        v19 = v30;
        if ( v16 == 1075708748 && v30 != -1 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v18, v17);
          WdLogEvent5_WdAssertion(v26);
        }
        *a4 = v19;
        LODWORD(v6) = 0;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v24 + 24) = v6;
      WdLogEvent5_WdError(v24);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v23[3] = 0LL;
    v23[4] = a3;
    v23[5] = v6;
    v23[6] = v7;
    WdLogEvent5_WdError(v23);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v17);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v27);
  return (unsigned int)v6;
}
