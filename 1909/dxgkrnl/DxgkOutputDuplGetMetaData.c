/*
 * XREFs of DxgkOutputDuplGetMetaData @ 0x1C0275FA0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C0275744 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
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
  size_t Size[5]; // [rsp+38h] [rbp-30h] BYREF

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
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2064LL);
  memset(Size, 0, 0x20uLL);
  v4 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  *(_OWORD *)&Size[2] = v4[1];
  v5 = (char *)Size[2];
  LODWORD(Size[3]) = 0;
  Size[2] = 0LL;
  v6 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         LODWORD(Size[0]),
         HIDWORD(Size[0]),
         (__int64)Size,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_2348832400fa9218d4247e5b02438479_::_lambda_invoker_cdecl_);
  v7 = (const void *)Size[2];
  Size[2] = (size_t)v5;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741789 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *v3 = *(_OWORD *)Size;
    v3[1] = *(_OWORD *)&Size[2];
  }
  if ( v6 >= 0 )
  {
    v8 = LODWORD(Size[3]);
    if ( LODWORD(Size[3]) )
    {
      if ( HIDWORD(Size[1]) < LODWORD(Size[3]) )
        v8 = HIDWORD(Size[1]);
      if ( (unsigned __int64)&v5[v8] > MmUserProbeAddress || &v5[v8] <= v5 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v5, v7, (unsigned int)v8);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12, (__int64)v7);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v12);
  return (unsigned int)v6;
}
