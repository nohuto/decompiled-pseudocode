/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1C0240980
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C023FC64 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetPointerShapeData(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // r14
  ULONG64 v4; // rax
  PVOID v5; // rax
  __int64 v6; // rcx
  void *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  const GUID *v10; // r8
  char *v12; // r15
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v17; // [rsp+28h] [rbp-70h] BYREF
  __int64 v18; // [rsp+30h] [rbp-68h]
  char v19; // [rsp+38h] [rbp-60h]
  PVOID v20; // [rsp+40h] [rbp-58h]
  size_t Size[2]; // [rsp+48h] [rbp-50h] BYREF
  void *v22[2]; // [rsp+58h] [rbp-40h]
  __int128 v23; // [rsp+68h] [rbp-30h]
  __int64 v24; // [rsp+78h] [rbp-20h]

  v3 = a1;
  v17 = -1;
  v18 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v19 = 1;
    v17 = 2065;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2065);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2065);
  v4 = v3;
  if ( v3 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)Size = *(_OWORD *)v4;
  *(_OWORD *)v22 = *(_OWORD *)(v4 + 16);
  v23 = *(_OWORD *)(v4 + 32);
  v24 = *(_QWORD *)(v4 + 48);
  v5 = operator new(LODWORD(Size[1]), 0x674D444Fu, PagedPool);
  v7 = v5;
  v20 = v5;
  if ( v5 )
  {
    v12 = (char *)v22[0];
    v22[0] = v5;
    v13 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
            Size[0],
            HIDWORD(Size[0]),
            (__int64)Size,
            (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_);
    v22[0] = v12;
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -1073741789 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = *(_OWORD *)Size;
      *(_OWORD *)(v3 + 16) = *(_OWORD *)v22;
      *(_OWORD *)(v3 + 32) = v23;
      *(_QWORD *)(v3 + 48) = v24;
    }
    if ( v13 >= 0 )
    {
      v14 = LODWORD(v22[1]);
      if ( LODWORD(v22[1]) )
      {
        if ( LODWORD(Size[1]) < LODWORD(v22[1]) )
          v14 = LODWORD(Size[1]);
        if ( (unsigned __int64)&v12[v14] > MmUserProbeAddress || &v12[v14] <= v12 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v12, v7, (unsigned int)v14);
      }
    }
    operator delete[](v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v17);
    return (unsigned int)v13;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v8 + 24) = LODWORD(Size[1]);
    WdLogEvent5_WdLowResource(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v17);
    }
    return 3221225495LL;
  }
}
