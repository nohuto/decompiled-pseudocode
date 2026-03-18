/*
 * XREFs of ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x1C02B8B70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02BC7C0 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::FindFirstAvailableTarget(
        __int64 a1,
        unsigned int a2,
        const GUID *a3,
        _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  int FirstAvailableTarget; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h]
  char v28; // [rsp+50h] [rbp-10h]
  int v29; // [rsp+98h] [rbp+38h] BYREF

  v26 = -1;
  v27 = 0LL;
  v5 = a1;
  v6 = (int)a3;
  v7 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 6031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 6031);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 6031LL);
  if ( a4 )
  {
    *a4 = -1;
    if ( (_DWORD)v6 )
    {
      v14 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
      v18 = v14;
      if ( v14 )
      {
        v29 = v15;
        FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
                                 v14,
                                 (unsigned int)v7,
                                 (unsigned int)v6,
                                 &v29,
                                 0LL,
                                 0LL,
                                 0LL);
        v5 = FirstAvailableTarget;
        if ( FirstAvailableTarget >= 0 )
        {
          LODWORD(v5) = 0;
          *a4 = v29;
        }
        else
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v12);
          v22[3] = v18;
          v22[4] = v7;
          v22[5] = v6;
          v22[6] = v5;
        }
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v16, v15, v17);
        *(_QWORD *)(v19 + 24) = v5;
        WdLogEvent5_WdError(v19);
        LODWORD(v5) = -1071774976;
      }
    }
    else
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v9, 0xFFFFFFFFLL, v10);
      v13[3] = 0LL;
      v13[4] = a4;
      v13[5] = v5;
      v13[6] = v7;
      WdLogEvent5_WdError(v13);
      LODWORD(v5) = -1071774929;
    }
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v11[3] = 0LL;
    v11[4] = v5;
    v11[5] = v7;
    WdLogEvent5_WdError(v11);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v12);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v26);
  return (unsigned int)v5;
}
