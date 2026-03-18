/*
 * XREFs of ?CompareVideoSignalInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0QEAE@Z @ 0x1C0280260
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CompareVideoSignalInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a2,
        const GUID *a3,
        unsigned __int8 *const a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // edx
  char Data1; // al
  __int64 v13; // rcx
  const GUID *v14; // r8
  int v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  char v18; // [rsp+30h] [rbp-18h]

  v16 = -1;
  v17 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v18 = 1;
    v16 = 6014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6014);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 6014);
  if ( a3 )
  {
    LOBYTE(a3->Data1) = 0;
    if ( this && a2 )
    {
      if ( *((_DWORD *)this + 3) == a2->ActiveSize.cx
        && *((_DWORD *)this + 4) == a2->ActiveSize.cy
        && *((_DWORD *)this + 5) == a2->VSyncFreq.Numerator
        && *((_DWORD *)this + 6) == a2->VSyncFreq.Denominator )
      {
        v11 = *((_DWORD *)this + 12);
        if ( (((unsigned __int8)v11 ^ *(_BYTE *)&a2->AdditionalSignalInfo) & 7) == 0 )
        {
          Data1 = a3->Data1;
          if ( (((unsigned __int16)v11 ^ (unsigned __int16)*(_DWORD *)&a2->AdditionalSignalInfo) & 0x1F8) == 0 )
            Data1 = 1;
          LOBYTE(a3->Data1) = Data1;
        }
      }
      v9 = 0;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v10 + 24) = 0LL;
      WdLogEvent5_WdError(v10);
      v9 = -1071774959;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdError(v8);
    v9 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v16);
  return v9;
}
