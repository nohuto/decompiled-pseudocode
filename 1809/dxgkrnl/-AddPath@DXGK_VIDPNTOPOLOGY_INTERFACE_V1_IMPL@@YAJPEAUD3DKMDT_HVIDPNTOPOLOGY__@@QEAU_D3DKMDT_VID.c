/*
 * XREFs of ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02855B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00037E8 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0003930 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BB28C (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BDDC0 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DC758 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
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
  __int64 v8; // r9
  __int64 v9; // rax
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
  __int64 v23; // r9
  __int64 v24; // rsi
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  __int64 v34; // rcx
  const GUID *v35; // r8
  int v37; // [rsp+20h] [rbp-20h] BYREF
  __int64 v38; // [rsp+28h] [rbp-18h]
  char v39; // [rsp+30h] [rbp-10h]
  struct DMMVIDPNPRESENTPATH *v40; // [rsp+78h] [rbp+38h] BYREF
  struct DMMVIDPNPRESENTPATH *v41; // [rsp+80h] [rbp+40h] BYREF

  v37 = -1;
  v4 = (__int64)this;
  v38 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v39 = 1;
    v37 = 7041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7041);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 7041);
  if ( a2 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
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
      v40 = 0LL;
      v41 = 0LL;
      v19 = DMMVIDPNTOPOLOGY::CreateNewPath(v14, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2, &v41);
      v24 = v19;
      LODWORD(v4) = -1071774970;
      if ( v19 == -1071774970 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v25[3] = *(_DWORD *)a2;
        v25[4] = *((unsigned int *)a2 + 1);
        v25[5] = -1071774970LL;
        WdLogEvent5_WdError(v25);
      }
      else if ( v19 >= 0 )
      {
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))&v40,
          (__int64 (__fastcall ***)(_QWORD, __int64))v41);
        v28 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPNTOPOLOGY **)v14, v40, 2LL, v27);
        v4 = v28;
        if ( v28 >= 0 )
        {
          v40 = 0LL;
          LODWORD(v4) = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v14, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2);
        }
        else
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30, v29, v31, v32);
          v33[3] = *(_DWORD *)a2;
          v33[4] = *((unsigned int *)a2 + 1);
          v33[5] = v14;
          v33[6] = v4;
          WdLogEvent5_WdDmmEvent(v33);
        }
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
        LODWORD(v4) = v24;
        v26[3] = *(_DWORD *)a2;
        v26[4] = *((unsigned int *)a2 + 1);
        v26[5] = v24;
      }
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v40);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v15 + 24) = v4;
      WdLogEvent5_WdError(v15);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = v4;
    WdLogEvent5_WdError(v9);
    LODWORD(v4) = -1071774951;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v37);
  return (unsigned int)v4;
}
