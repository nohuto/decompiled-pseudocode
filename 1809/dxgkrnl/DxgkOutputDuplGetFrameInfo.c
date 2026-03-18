/*
 * XREFs of DxgkOutputDuplGetFrameInfo @ 0x1C02405A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C023FC64 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetFrameInfo(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rdi
  ULONG64 v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  const GUID *v7; // r8
  int v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h]
  char v11; // [rsp+30h] [rbp-58h]
  unsigned int v12[4]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v13; // [rsp+48h] [rbp-40h]
  __int128 v14; // [rsp+58h] [rbp-30h]
  __int64 v15; // [rsp+68h] [rbp-20h]

  v3 = a1;
  v9 = -1;
  v10 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v11 = 1;
    v9 = 2063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2063);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v9, 2063);
  v4 = v3;
  if ( v3 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)v12 = *(_OWORD *)v4;
  v13 = *(_OWORD *)(v4 + 16);
  v14 = *(_OWORD *)(v4 + 32);
  v15 = *(_QWORD *)(v4 + 48);
  v5 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v12[0],
         v12[1],
         (__int64)v12,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_);
  if ( v5 >= 0 )
  {
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_OWORD *)v3 = *(_OWORD *)v12;
    *(_OWORD *)(v3 + 16) = v13;
    *(_OWORD *)(v3 + 32) = v14;
    *(_QWORD *)(v3 + 48) = v15;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, v9);
  return (unsigned int)v5;
}
