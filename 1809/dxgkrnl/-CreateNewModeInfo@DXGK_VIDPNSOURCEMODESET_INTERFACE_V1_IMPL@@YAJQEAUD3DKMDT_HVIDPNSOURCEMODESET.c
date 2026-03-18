/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00D83C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@?$Set@VDMMVIDPNSOURCEMODE@@@@SAPEAV12@QEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0006FC8 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@-$Set@VDMMVIDPNSOURCEMODE@@@@SAPEA.c)
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  const GUID *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v13; // rdi
  _DWORD *v14; // r14
  __int64 v15; // rcx
  _QWORD *Instance; // rbx
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-28h] BYREF
  __int64 v28; // [rsp+28h] [rbp-20h]
  char v29; // [rsp+30h] [rbp-18h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 11);
  v27 = -1;
  v28 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 7005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v5, &EventProfilerEnter, v6, 7005);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 7005);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
      v13 = this;
    else
      v13 = 0LL;
    if ( v13 )
    {
      v14 = 0LL;
      Instance = Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>::CreateInstance(0LL);
      if ( Instance )
      {
        operator delete(0LL);
        ++*((_DWORD *)v13 + 20);
        v14 = Instance + 2;
        v17 = *((_DWORD *)v13 + 20);
        *((_DWORD *)Instance + 5) = 0;
        v18 = 0;
        *v14 = v17;
      }
      else
      {
        v25 = WdLogNewEntry5_WdLowResource(v15);
        WdLogEvent5_WdLowResource(v25);
        v18 = -1073741801;
      }
      operator delete(0LL);
      if ( v18 < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v26 + 24) = v18;
        WdLogEvent5_WdError(v26);
      }
      else
      {
        *(_QWORD *)a2 = v14;
        v18 = 0;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v24 + 24) = this;
      WdLogEvent5_WdError(v24);
      v18 = -1071774968;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v23 + 24) = 0LL;
    WdLogEvent5_WdError(v23);
    v18 = -1071774960;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v27);
  return (unsigned int)v18;
}
