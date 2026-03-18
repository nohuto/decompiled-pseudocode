/*
 * XREFs of DxgkOutputDuplGetMetaData @ 0x1C0240780
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C023FC64 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetMetaData(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rsi
  _OWORD *v4; // rax
  char *v5; // r14
  int v6; // edi
  const void *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  const GUID *v10; // r8
  int v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  char v14; // [rsp+30h] [rbp-38h]
  size_t Size[2]; // [rsp+38h] [rbp-30h] BYREF
  void *Src[2]; // [rsp+48h] [rbp-20h]

  v3 = (_OWORD *)a1;
  v12 = -1;
  v13 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v14 = 1;
    v12 = 2064;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2064);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 2064);
  v4 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  *(_OWORD *)Src = v4[1];
  v5 = (char *)Src[0];
  LODWORD(Src[1]) = 0;
  Src[0] = 0LL;
  v6 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         Size[0],
         HIDWORD(Size[0]),
         (__int64)Size,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_2348832400fa9218d4247e5b02438479_::_lambda_invoker_cdecl_);
  v7 = Src[0];
  Src[0] = v5;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741789 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *v3 = *(_OWORD *)Size;
    v3[1] = *(_OWORD *)Src;
  }
  if ( v6 >= 0 )
  {
    v8 = LODWORD(Src[1]);
    if ( LODWORD(Src[1]) )
    {
      if ( HIDWORD(Size[1]) < LODWORD(Src[1]) )
        v8 = HIDWORD(Size[1]);
      if ( (unsigned __int64)&v5[v8] > MmUserProbeAddress || &v5[v8] <= v5 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v5, v7, (unsigned int)v8);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v12);
  return (unsigned int)v6;
}
