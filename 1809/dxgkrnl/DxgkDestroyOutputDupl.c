/*
 * XREFs of DxgkDestroyOutputDupl @ 0x1C0240400
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C023FC64 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkDestroyOutputDupl(__int64 a1, int a2, const GUID *a3)
{
  ULONG64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  const GUID *v9; // r8
  int v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  char v13; // [rsp+30h] [rbp-28h]
  unsigned int v14[2]; // [rsp+38h] [rbp-20h] BYREF
  int v15; // [rsp+40h] [rbp-18h]

  v4 = a1;
  v11 = -1;
  v12 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v13 = 1;
    v11 = 2062;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2062);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2062);
  if ( a2 )
  {
    if ( v4 <= MmUserProbeAddress )
    {
      v6 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v6 + 24) = 3329LL;
      WdLogEvent5_WdAssertion(v6);
    }
    *(_QWORD *)v14 = *(_QWORD *)v4;
    v15 = *(_DWORD *)(v4 + 8);
  }
  else
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_QWORD *)v14 = *(_QWORD *)v4;
    v15 = *(_DWORD *)(v4 + 8);
  }
  v7 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v14[0],
         v14[1],
         (__int64)v14,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, v11);
  return v7;
}
