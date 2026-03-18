/*
 * XREFs of DxgkOutputDuplGetFrameInfo @ 0x1C0275DB0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C0275744 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetFrameInfo(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rdi
  ULONG64 v4; // rax
  ULONG64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  const GUID *v8; // r8
  int v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h]
  char v12; // [rsp+30h] [rbp-58h]
  unsigned int v13[14]; // [rsp+38h] [rbp-50h] BYREF

  v3 = a1;
  v10 = -1;
  v11 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v12 = 1;
    v10 = 2063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2063);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2063LL);
  memset(v13, 0, sizeof(v13));
  v4 = v3;
  if ( v3 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)v13 = *(_OWORD *)v4;
  *(_OWORD *)&v13[4] = *(_OWORD *)(v4 + 16);
  *(_OWORD *)&v13[8] = *(_OWORD *)(v4 + 32);
  *(_QWORD *)&v13[12] = *(_QWORD *)(v4 + 48);
  v6 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v13[0],
         v13[1],
         (__int64)v13,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_);
  if ( v6 >= 0 )
  {
    v5 = MmUserProbeAddress;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_OWORD *)v3 = *(_OWORD *)v13;
    *(_OWORD *)(v3 + 16) = *(_OWORD *)&v13[4];
    *(_OWORD *)(v3 + 32) = *(_OWORD *)&v13[8];
    *(_QWORD *)(v3 + 48) = *(_QWORD *)&v13[12];
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10, v5);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v8, v10);
  return (unsigned int)v6;
}
