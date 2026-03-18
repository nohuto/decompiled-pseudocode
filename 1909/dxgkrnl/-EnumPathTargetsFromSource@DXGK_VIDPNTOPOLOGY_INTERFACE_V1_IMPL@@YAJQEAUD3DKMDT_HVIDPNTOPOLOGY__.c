/*
 * XREFs of ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C02BDFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058A0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00EDB7C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
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
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rdx
  char **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char **v20; // r14
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rcx
  const GUID *v28; // r8
  int v30; // [rsp+20h] [rbp-20h] BYREF
  __int64 v31; // [rsp+28h] [rbp-18h]
  char v32; // [rsp+30h] [rbp-10h]
  unsigned int v33; // [rsp+78h] [rbp+38h] BYREF

  v30 = -1;
  v31 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 7033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7033);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 7033LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = a3;
  v10[4] = v7;
  v10[5] = v6;
  v10[6] = a4;
  if ( a4 )
  {
    *a4 = -1;
    v16 = (char **)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v20 = v16;
    if ( v16 )
    {
      v33 = v17;
      v22 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v16, (unsigned int)v7, (__int64)a3, &v33);
      v6 = v22;
      if ( v22 >= 0 )
      {
        v25 = v33;
        if ( v22 == 1075708748 && v33 != -1 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v23, v15);
          WdLogEvent5_WdAssertion(v26);
        }
        *a4 = v25;
        LODWORD(v6) = 0;
      }
      else
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v15);
        v24[3] = a3;
        v24[4] = v7;
        v24[5] = v20;
        v24[6] = v6;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v21 + 24) = v6;
      WdLogEvent5_WdError(v21);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v14[3] = 0LL;
    v14[4] = a3;
    v14[5] = v6;
    v14[6] = v7;
    WdLogEvent5_WdError(v14);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v15);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v30);
  return (unsigned int)v6;
}
