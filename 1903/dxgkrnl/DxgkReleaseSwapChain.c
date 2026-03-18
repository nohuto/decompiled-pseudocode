/*
 * XREFs of DxgkReleaseSwapChain @ 0x1C028A2D0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C02882B4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall DxgkReleaseSwapChain(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  void *v6; // r14
  void *v7; // rdi
  _OWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  SIZE_T v15; // rax
  PVOID v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  HANDLE v25; // r12
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  void *v33; // r8
  PVOID v34; // r12
  _DWORD *v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rdx
  __m128d v38; // xmm1
  _QWORD *v39; // rdx
  ULONG64 v40; // rcx
  __int64 v41; // rcx
  const GUID *v42; // r8
  int v43; // [rsp+30h] [rbp-88h] BYREF
  __int64 v44; // [rsp+38h] [rbp-80h]
  char v45; // [rsp+40h] [rbp-78h]
  HANDLE Handle[2]; // [rsp+50h] [rbp-68h] BYREF
  __m128d v47; // [rsp+60h] [rbp-58h]
  void *v48[2]; // [rsp+70h] [rbp-48h]
  void *Src[2]; // [rsp+80h] [rbp-38h]
  PVOID Object; // [rsp+D0h] [rbp+18h] BYREF

  v43 = -1;
  v44 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v45 = 1;
    v43 = 2112;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2112);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2112LL);
  v6 = 0LL;
  v7 = 0LL;
  v8 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v8;
  v47 = (__m128d)v8[1];
  *(_OWORD *)v48 = v8[2];
  *(_OWORD *)Src = v8[3];
  v9 = LODWORD(Src[0]);
  if ( LODWORD(Src[0]) > 0x32 )
  {
    v10 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4, v5);
    *(_QWORD *)(v10 + 24) = v9;
LABEL_9:
    WdLogEvent5_WdError(v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v11);
    if ( v45 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v43);
    }
    return 3221225485LL;
  }
  if ( LODWORD(Src[0]) )
  {
    v6 = Src[1];
    if ( !Src[1] )
    {
      v10 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4, v5);
      *(_QWORD *)(v10 + 24) = 1269LL;
      goto LABEL_9;
    }
    v15 = 4LL * LODWORD(Src[0]);
    if ( !is_mul_ok(LODWORD(Src[0]), 4uLL) )
      v15 = -1LL;
    v16 = operator new[](v15, 0x4B677844u, PagedPool);
    v7 = v16;
    if ( !v16 )
    {
      v21 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
      *(_QWORD *)(v21 + 24) = 1276LL;
      WdLogEvent5_WdLowResource(v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v22);
      if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v23, &EventProfilerExit, v24, v43);
      return 3221225495LL;
    }
    memset(v16, 0, 4 * v9);
    Src[1] = v7;
  }
  v25 = Handle[0];
  v26 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v30 = v26;
  if ( v26 >= 0 )
  {
    v33 = v48[1];
    v48[1] = 0LL;
    v34 = Object;
    LODWORD(v30) = SwapChainReleaseInternal(
                     *(struct DXGSWAPCHAIN **)Object,
                     (struct _D3DKMT_RELEASESWAPCHAIN *)Handle,
                     v33,
                     1);
    if ( (int)v30 >= 0 )
    {
      v35 = (_DWORD *)(a1 + 48);
      if ( a1 + 48 >= MmUserProbeAddress )
        v35 = (_DWORD *)MmUserProbeAddress;
      v36 = LODWORD(Src[0]);
      *v35 = Src[0];
      if ( *(_QWORD *)&v47.m128d_f64[0] )
      {
        v37 = (_QWORD *)(a1 + 16);
        if ( a1 + 16 >= MmUserProbeAddress )
          v37 = (_QWORD *)MmUserProbeAddress;
        v38 = v47;
        *v37 = *(_QWORD *)&v47.m128d_f64[0];
        v39 = (_QWORD *)(a1 + 24);
        if ( a1 + 24 >= MmUserProbeAddress )
          v39 = (_QWORD *)MmUserProbeAddress;
        *v39 = *(_OWORD *)&_mm_unpackhi_pd(v38, v38);
      }
      if ( (_DWORD)v36 )
      {
        v40 = (ULONG64)v6 + 4 * v36;
        if ( v40 > MmUserProbeAddress || v40 <= (unsigned __int64)v6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v6, Src[1], 4 * v36);
      }
    }
    ObfDereferenceObject(v34);
  }
  else
  {
    v31 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v31 + 24) = v25;
    *(_QWORD *)(v31 + 32) = v30;
    WdLogEvent5_WdWarning(v31);
  }
  if ( v7 )
    operator delete[](v7);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v32);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v41, &EventProfilerExit, v42, v43);
  return (unsigned int)v30;
}
