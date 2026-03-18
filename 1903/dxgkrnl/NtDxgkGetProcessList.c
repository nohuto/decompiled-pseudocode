/*
 * XREFs of NtDxgkGetProcessList @ 0x1C0205FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00037B4 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z @ 0x1C01F5A5C (-QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@I@Z @ 0x1C0200170 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3.c)
 */

__int64 __fastcall NtDxgkGetProcessList(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 HighPart; // rdx
  __int64 v5; // r8
  ULONG64 v6; // rcx
  ULONG64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const GUID *v11; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  DXGADAPTER *v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  const GUID *v32; // r8
  int ProcessAdapterInfo; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  HANDLE *v38; // rsi
  __int64 v39; // r14
  _DWORD *v40; // rcx
  unsigned int v41; // eax
  size_t v42; // r8
  void *v43; // rcx
  int v44; // [rsp+20h] [rbp-2A8h] BYREF
  __int64 v45; // [rsp+28h] [rbp-2A0h]
  char v46; // [rsp+30h] [rbp-298h]
  struct _LUID v47[2]; // [rsp+38h] [rbp-290h] BYREF
  void *Src; // [rsp+48h] [rbp-280h]
  DXGADAPTER *v49[2]; // [rsp+50h] [rbp-278h] BYREF
  int v50; // [rsp+60h] [rbp-268h]
  _BYTE v51[8]; // [rsp+68h] [rbp-260h] BYREF
  DXGADAPTER *v52; // [rsp+70h] [rbp-258h]
  char v53; // [rsp+78h] [rbp-250h]
  void *v54; // [rsp+80h] [rbp-248h]
  PVOID P; // [rsp+90h] [rbp-238h] BYREF
  _BYTE v56[512]; // [rsp+98h] [rbp-230h] BYREF
  int v57; // [rsp+298h] [rbp-30h]

  v44 = -1;
  v45 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v46 = 1;
    v44 = 2203;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2203);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 2203LL);
  v54 = 0LL;
  v49[0] = 0LL;
  P = 0LL;
  v57 = 0;
  v6 = MmUserProbeAddress;
  v7 = a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  *(_OWORD *)&v47[0].LowPart = *(_OWORD *)v7;
  Src = *(void **)(v7 + 16);
  if ( Src )
  {
    HighPart = (unsigned int)v47[1].HighPart;
    if ( v47[1].HighPart )
    {
      v54 = Src;
      Src = PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::AllocateElements(&P, v47[1].HighPart);
      if ( !Src )
      {
        v8 = WdLogNewEntry5_WdError(v6, HighPart, v5);
        *(_QWORD *)(v8 + 24) = -1073741801LL;
        WdLogEvent5_WdError(v8);
        if ( P != v56 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v57 = 0;
        DXGADAPTER_REFERENCE::Assign(v49, 0LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v9);
        if ( v46 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v10, &EventProfilerExit, v11, v44);
        }
        return 3221225495LL;
      }
    }
  }
  if ( v47[1].LowPart != 1024 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v6, HighPart, v5);
    v13[3] = v47[1].LowPart;
    v13[4] = -1073741811LL;
    goto LABEL_19;
  }
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v49, v47);
  v20 = v49[0];
  if ( !v49[0] )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
    v13[3] = v47[0].HighPart;
    v13[4] = v47[0].LowPart;
    v13[5] = -1073741811LL;
LABEL_19:
    WdLogEvent5_WdError(v13);
    if ( P != v56 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v57 = 0;
    DXGADAPTER_REFERENCE::Assign(v49, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v14);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v44);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v49[0] + 320) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v21[3] = v47[0].HighPart;
    v21[4] = v47[0].LowPart;
    LODWORD(v22) = -1073741637;
    v21[5] = -1073741637LL;
    WdLogEvent5_WdWarning(v21);
LABEL_30:
    if ( P != v56 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v57 = 0;
    DXGADAPTER_REFERENCE::Assign(v49, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v23);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v24, &EventProfilerExit, v25, v44);
    return (unsigned int)v22;
  }
  v52 = v49[0];
  v53 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  if ( *((_DWORD *)v20 + 44) == 1 )
  {
    ProcessAdapterInfo = ADAPTER_RENDER::QueryProcessAdapterInfo(
                           *((ADAPTER_RENDER **)v20 + 320),
                           (void **)Src,
                           (unsigned int *)&v47[1].HighPart,
                           0x400u);
    v22 = ProcessAdapterInfo;
    v50 = ProcessAdapterInfo;
    if ( !ProcessAdapterInfo || ProcessAdapterInfo == -1073741789 )
    {
      v40 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v40 = (_DWORD *)MmUserProbeAddress;
      v41 = v47[1].HighPart;
      *v40 = v47[1].HighPart;
      if ( (int)v22 >= 0 && v41 )
      {
        v42 = 8LL * v41;
        v43 = v54;
        if ( (unsigned __int64)v54 + v42 > MmUserProbeAddress || (char *)v54 + v42 <= v54 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v43, Src, v42);
      }
    }
    else
    {
      v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
      *(_QWORD *)(v37 + 24) = v22;
      WdLogEvent5_WdWarning(v37);
      if ( v47[1].HighPart )
      {
        v38 = (HANDLE *)Src;
        v39 = (unsigned int)v47[1].HighPart;
        do
        {
          if ( *v38 )
            ZwClose(*v38);
          ++v38;
          --v39;
        }
        while ( v39 );
      }
    }
    if ( v53 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    goto LABEL_30;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
  v29[3] = v47[0].HighPart;
  v29[4] = v47[0].LowPart;
  v29[5] = -1073741811LL;
  WdLogEvent5_WdError(v29);
  if ( v53 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  if ( P != v56 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v57 = 0;
  DXGADAPTER_REFERENCE::Assign(v49, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v30);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v44);
  return 3221226166LL;
}
