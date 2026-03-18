/*
 * XREFs of ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02BD920
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0004594 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00045CC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E5A2C (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00FBD88 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C012E888 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        const GUID *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DMMVIDPNTOPOLOGY *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v34; // [rsp+20h] [rbp-20h] BYREF
  __int64 v35; // [rsp+28h] [rbp-18h]
  char v36; // [rsp+30h] [rbp-10h]
  struct DMMVIDPNPRESENTPATH *v37; // [rsp+78h] [rbp+38h] BYREF
  struct DMMVIDPNPRESENTPATH *v38; // [rsp+80h] [rbp+40h] BYREF

  v34 = -1;
  v4 = (__int64)this;
  v35 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 7041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7041);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 7041LL);
  if ( a2 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v10[3] = *(_DWORD *)a2;
    v10[4] = *((unsigned int *)a2 + 1);
    v10[5] = a2;
    v10[6] = v4;
    v14 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4);
    if ( v14 )
    {
      if ( !*((_DWORD *)a2 + 16) )
      {
        v16 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v16 + 24) = a2;
        WdLogEvent5_WdWarning(v16);
        *((_DWORD *)a2 + 16) = 255;
      }
      if ( !*((_DWORD *)a2 + 17) )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v17[3] = *(_DWORD *)a2;
        v17[4] = *((unsigned int *)a2 + 1);
        v17[5] = v4;
        WdLogEvent5_WdWarning(v17);
        memset(a2 + 19, 0, 0x100uLL);
        *((_DWORD *)a2 + 83) = 0;
        *((_DWORD *)a2 + 83) |= 1u;
        *(_QWORD *)(a2 + 17) = 1LL;
      }
      if ( *((_DWORD *)a2 + 84) != 1 || *((_QWORD *)a2 + 43) || *((_QWORD *)a2 + 44) )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v18[3] = *((int *)a2 + 84);
        v18[4] = *(_DWORD *)a2;
        v18[5] = *((unsigned int *)a2 + 1);
        v18[6] = v4;
        WdLogEvent5_WdWarning(v18);
        *((_DWORD *)a2 + 84) = 1;
        *((_QWORD *)a2 + 43) = 0LL;
        *((_QWORD *)a2 + 44) = 0LL;
      }
      v37 = 0LL;
      v38 = 0LL;
      v19 = DMMVIDPNTOPOLOGY::CreateNewPath(v14, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2, &v38);
      v23 = v19;
      LODWORD(v4) = -1071774970;
      if ( v19 == -1071774970 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
        v24[3] = *(_DWORD *)a2;
        v24[4] = *((unsigned int *)a2 + 1);
        v24[5] = -1071774970LL;
        WdLogEvent5_WdError(v24);
      }
      else if ( v19 >= 0 )
      {
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))&v37,
          (__int64 (__fastcall ***)(_QWORD, __int64))v38);
        v26 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPNTOPOLOGY **)v14, v37, D3DKMDT_MCC_ENFORCE);
        v4 = v26;
        if ( v26 >= 0 )
        {
          v37 = 0LL;
          LODWORD(v4) = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v14, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2, v29);
        }
        else
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v28, v27);
          v30[3] = *(_DWORD *)a2;
          v30[4] = *((unsigned int *)a2 + 1);
          v30[5] = v14;
          v30[6] = v4;
          WdLogEvent5_WdDmmEvent(v30);
        }
      }
      else
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20);
        LODWORD(v4) = v23;
        v25[3] = *(_DWORD *)a2;
        v25[4] = *((unsigned int *)a2 + 1);
        v25[5] = v23;
      }
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v37);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = v4;
      WdLogEvent5_WdError(v15);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = v4;
    WdLogEvent5_WdError(v8);
    LODWORD(v4) = -1071774951;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v9);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v34);
  return (unsigned int)v4;
}
