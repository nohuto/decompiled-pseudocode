/*
 * XREFs of NtDxgkGetProcessList @ 0x1C01D7CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C0004F34 (-InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGADAPTERREFERENCE@@QEAA@XZ @ 0x1C001A340 (--1DXGADAPTERREFERENCE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z @ 0x1C01C6E40 (-QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAA@XZ @ 0x1C01D21A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@I@Z @ 0x1C01D21E8 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3.c)
 */

__int64 __fastcall NtDxgkGetProcessList(ULONG64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v4; // rcx
  ULONG64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  const GUID *v8; // r8
  _QWORD *v10; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // rcx
  const GUID *v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  const GUID *v25; // r8
  int ProcessAdapterInfo; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  HANDLE *v31; // rsi
  __int64 v32; // r14
  _DWORD *v33; // rcx
  unsigned int HighPart; // eax
  size_t v35; // r8
  void *v36; // rcx
  int v37; // [rsp+20h] [rbp-2A8h] BYREF
  __int64 v38; // [rsp+28h] [rbp-2A0h]
  char v39; // [rsp+30h] [rbp-298h]
  struct _LUID v40[2]; // [rsp+38h] [rbp-290h] BYREF
  void *Src; // [rsp+48h] [rbp-280h]
  DXGADAPTER *v42[2]; // [rsp+50h] [rbp-278h] BYREF
  int v43; // [rsp+60h] [rbp-268h]
  _BYTE v44[8]; // [rsp+68h] [rbp-260h] BYREF
  struct DXGADAPTER *v45; // [rsp+70h] [rbp-258h]
  char v46; // [rsp+78h] [rbp-250h]
  void *v47; // [rsp+80h] [rbp-248h]
  _QWORD v48[65]; // [rsp+90h] [rbp-238h] BYREF
  int v49; // [rsp+298h] [rbp-30h]

  v37 = -1;
  v38 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v39 = 1;
    v37 = 2203;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2203);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 2203);
  v47 = 0LL;
  v42[0] = 0LL;
  v48[0] = 0LL;
  v49 = 0;
  v4 = MmUserProbeAddress;
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)&v40[0].LowPart = *(_OWORD *)v5;
  Src = *(void **)(v5 + 16);
  if ( Src )
  {
    if ( v40[1].HighPart )
    {
      v47 = Src;
      Src = PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::AllocateElements(v48, v40[1].HighPart);
      if ( !Src )
      {
        v6 = WdLogNewEntry5_WdError(v4);
        *(_QWORD *)(v6 + 24) = -1073741801LL;
        WdLogEvent5_WdError(v6);
        PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::~PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>((__int64)v48);
        DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(v42);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( v39 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v7, &EventProfilerExit, v8, v37);
        }
        return 3221225495LL;
      }
    }
  }
  if ( v40[1].LowPart != 1024 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v10[3] = v40[1].LowPart;
    v10[4] = -1073741811LL;
    goto LABEL_18;
  }
  v11 = DXGADAPTERREFERENCE::InitByLuid((DXGADAPTERREFERENCE *)v42, v40[0]);
  v15 = v11;
  if ( !v11 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v10[3] = v40[0].HighPart;
    v10[4] = v40[0].LowPart;
    v10[5] = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdError(v10);
    PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::~PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>((__int64)v48);
    DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v37);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v11 + 316) )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v18[3] = v40[0].HighPart;
    v18[4] = v40[0].LowPart;
    LODWORD(v19) = -1073741637;
    v18[5] = -1073741637LL;
    WdLogEvent5_WdWarning(v18);
LABEL_24:
    PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::~PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>((__int64)v48);
    DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v37);
    return (unsigned int)v19;
  }
  v45 = v11;
  v46 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
  if ( *((_DWORD *)v15 + 44) == 1 )
  {
    ProcessAdapterInfo = ADAPTER_RENDER::QueryProcessAdapterInfo(
                           *((ADAPTER_RENDER **)v15 + 316),
                           (void **)Src,
                           (unsigned int *)&v40[1].HighPart,
                           0x400u);
    v19 = ProcessAdapterInfo;
    v43 = ProcessAdapterInfo;
    if ( !ProcessAdapterInfo || ProcessAdapterInfo == -1073741789 )
    {
      v33 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v33 = (_DWORD *)MmUserProbeAddress;
      HighPart = v40[1].HighPart;
      *v33 = v40[1].HighPart;
      if ( (int)v19 >= 0 )
      {
        v35 = 8LL * HighPart;
        v36 = v47;
        if ( (unsigned __int64)v47 + v35 > MmUserProbeAddress || (char *)v47 + v35 <= v47 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v36, Src, v35);
      }
    }
    else
    {
      v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v30 + 24) = v19;
      WdLogEvent5_WdWarning(v30);
      if ( v40[1].HighPart )
      {
        v31 = (HANDLE *)Src;
        v32 = (unsigned int)v40[1].HighPart;
        do
        {
          if ( *v31 )
            ZwClose(*v31);
          ++v31;
          --v32;
        }
        while ( v32 );
      }
    }
    if ( v46 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
    goto LABEL_24;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
  v23[3] = v40[0].HighPart;
  v23[4] = v40[0].LowPart;
  v23[5] = -1073741811LL;
  WdLogEvent5_WdError(v23);
  if ( v46 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
  PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::~PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>((__int64)v48);
  DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v37);
  return 3221226166LL;
}
