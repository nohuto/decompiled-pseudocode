/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1C02761B0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C0275744 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetPointerShapeData(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // r15
  ULONG64 v4; // rax
  PVOID v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  char *v16; // r14
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v22; // [rsp+28h] [rbp-70h] BYREF
  __int64 v23; // [rsp+30h] [rbp-68h]
  char v24; // [rsp+38h] [rbp-60h]
  PVOID v25; // [rsp+40h] [rbp-58h]
  size_t Size[7]; // [rsp+48h] [rbp-50h] BYREF

  v3 = a1;
  v22 = -1;
  v23 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 2065;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2065);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2065LL);
  memset(Size, 0, sizeof(Size));
  v4 = v3;
  if ( v3 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)Size = *(_OWORD *)v4;
  *(_OWORD *)&Size[2] = *(_OWORD *)(v4 + 16);
  *(_OWORD *)&Size[4] = *(_OWORD *)(v4 + 32);
  Size[6] = *(_QWORD *)(v4 + 48);
  v5 = operator new[](LODWORD(Size[1]), 0x674D444Fu, PagedPool);
  v10 = v5;
  v25 = v5;
  if ( v5 )
  {
    v16 = (char *)Size[2];
    Size[2] = (size_t)v5;
    v17 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
            LODWORD(Size[0]),
            HIDWORD(Size[0]),
            (__int64)Size,
            (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_);
    Size[2] = (size_t)v16;
    if ( (int)(v17 + 0x80000000) < 0 || v17 == -1073741789 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = *(_OWORD *)Size;
      *(_OWORD *)(v3 + 16) = *(_OWORD *)&Size[2];
      *(_OWORD *)(v3 + 32) = *(_OWORD *)&Size[4];
      *(_QWORD *)(v3 + 48) = Size[6];
    }
    if ( v17 >= 0 )
    {
      v18 = LODWORD(Size[3]);
      if ( LODWORD(Size[3]) )
      {
        if ( LODWORD(Size[1]) < LODWORD(Size[3]) )
          v18 = LODWORD(Size[1]);
        if ( (unsigned __int64)&v16[v18] > MmUserProbeAddress || &v16[v18] <= v16 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, v10, (unsigned int)v18);
      }
    }
    operator delete[](v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v19);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v22);
    return (unsigned int)v17;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = LODWORD(Size[1]);
    WdLogEvent5_WdLowResource(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v12);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v22);
    }
    return 3221225495LL;
  }
}
