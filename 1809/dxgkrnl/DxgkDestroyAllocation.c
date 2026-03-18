/*
 * XREFs of DxgkDestroyAllocation @ 0x1C012AD10
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FE8E0 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyAllocation(ULONG64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r10
  unsigned int v6; // ebx
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v10; // rax
  int v11; // [rsp+40h] [rbp-98h] BYREF
  __int64 v12; // [rsp+48h] [rbp-90h]
  char v13; // [rsp+50h] [rbp-88h]
  unsigned int *v14[2]; // [rsp+58h] [rbp-80h]
  unsigned int v15[2]; // [rsp+68h] [rbp-70h]
  _QWORD v16[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v16[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[3]) = 51;
  LOBYTE(v16[6]) = -1;
  v11 = -1;
  v12 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v13 = 1;
    v11 = 2006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2006);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2006);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)v14 = *(_OWORD *)a1;
    *(_QWORD *)v15 = *(_QWORD *)(a1 + 16);
    v6 = DxgkDestroyAllocationHelper(
           Current,
           (unsigned int)v14[0],
           HIDWORD(v14[0]),
           v14[1],
           v15[0],
           0,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v16,
           1);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v4);
    v6 = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v8, v11);
  return v6;
}
