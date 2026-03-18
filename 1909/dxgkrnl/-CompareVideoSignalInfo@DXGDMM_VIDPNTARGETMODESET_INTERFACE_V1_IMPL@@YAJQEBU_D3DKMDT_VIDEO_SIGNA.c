/*
 * XREFs of ?CompareVideoSignalInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0QEAE@Z @ 0x1C02B86B0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CompareVideoSignalInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a2,
        const GUID *a3,
        unsigned __int8 *const a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  char Data1; // al
  __int64 v14; // rcx
  const GUID *v15; // r8
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  char v19; // [rsp+30h] [rbp-18h]

  v17 = -1;
  v18 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v19 = 1;
    v17 = 6014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6014);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 6014LL);
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
        v7 = *((unsigned int *)this + 12);
        if ( (((unsigned __int8)v7 ^ *(_BYTE *)&a2->AdditionalSignalInfo) & 7) == 0 )
        {
          Data1 = a3->Data1;
          if ( (((unsigned __int16)v7 ^ (unsigned __int16)*(_DWORD *)&a2->AdditionalSignalInfo) & 0x1F8) == 0 )
            Data1 = 1;
          LOBYTE(a3->Data1) = Data1;
        }
      }
      v11 = 0;
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v8, v7, v9);
      *(_QWORD *)(v12 + 24) = 0LL;
      WdLogEvent5_WdError(v12);
      v11 = -1071774959;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = 0LL;
    WdLogEvent5_WdError(v10);
    v11 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, v7);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v17);
  return v11;
}
