/*
 * XREFs of ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C0122F1C
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C0123520 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C0133450 (DxgkCreateContextVirtualInternal.c)
 *     ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021CB20 (-VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C000C9A0 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C0122484 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C0123500 (-GetBitCount@@YAII@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtualImpl(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1, char a2, const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // r8
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGDEVICE *v15; // r8
  __int64 v16; // r10
  unsigned int v17; // r9d
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r15
  unsigned int v23; // r9d
  __int64 v24; // r10
  ADAPTER_RENDER *v25; // r11
  __int64 Value; // rcx
  _QWORD *v27; // r15
  _QWORD *v28; // rdi
  unsigned int v29; // r12d
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  ULONG64 v35; // rcx
  unsigned int v36; // r9d
  unsigned int v37; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v38; // edx
  D3DKMT_HANDLE v39; // r8d
  _DWORD *p_hContext; // rdx
  ULONG64 v41; // rcx
  unsigned int v42; // r12d
  __int64 v43; // rdx
  __int64 v44; // rcx
  const GUID *v45; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  const GUID *v50; // r8
  __int64 v51; // rax
  _QWORD *v52; // rax
  unsigned int v53; // edi
  __int64 v54; // rdx
  __int64 v55; // rcx
  const GUID *v56; // r8
  _QWORD *v57; // rax
  struct DXGDEVICE *v58; // [rsp+50h] [rbp-198h] BYREF
  int v59; // [rsp+58h] [rbp-190h]
  int v60; // [rsp+60h] [rbp-188h] BYREF
  __int64 v61; // [rsp+68h] [rbp-180h]
  char v62; // [rsp+70h] [rbp-178h]
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v63; // [rsp+78h] [rbp-170h]
  struct _D3DDDI_CREATECONTEXTFLAGS v64; // [rsp+80h] [rbp-168h]
  unsigned int v65; // [rsp+84h] [rbp-164h]
  unsigned int v66; // [rsp+88h] [rbp-160h]
  DXGDEVICE *v67; // [rsp+90h] [rbp-158h]
  unsigned int v68; // [rsp+98h] [rbp-150h]
  _QWORD *v69; // [rsp+A0h] [rbp-148h]
  struct DXGCONTEXT *v70; // [rsp+A8h] [rbp-140h] BYREF
  unsigned int v71[4]; // [rsp+B0h] [rbp-138h]
  void *Src[2]; // [rsp+C0h] [rbp-128h]
  __int64 v73; // [rsp+D0h] [rbp-118h]
  unsigned int v74; // [rsp+D8h] [rbp-110h]
  struct DXGDEVICE *v75; // [rsp+E0h] [rbp-108h] BYREF
  _QWORD v76[2]; // [rsp+E8h] [rbp-100h] BYREF
  D3DKMT_HANDLE v77; // [rsp+F8h] [rbp-F0h]
  DXGADAPTER *v78; // [rsp+100h] [rbp-E8h]
  __int64 v79; // [rsp+108h] [rbp-E0h]
  _BYTE v80[160]; // [rsp+110h] [rbp-D8h] BYREF

  v63 = a1;
  v60 = -1;
  v61 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v62 = 1;
    v60 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2039);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v60, 2039LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v47 = WdLogNewEntry5_WdError(v8, v7, 0LL);
    v53 = -1073741811;
    *(_QWORD *)(v47 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v47);
LABEL_61:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v48);
    if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v49, &EventProfilerExit, v50, v60);
    return v53;
  }
  if ( a2 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (struct _D3DKMT_CREATECONTEXTVIRTUAL *)MmUserProbeAddress;
    *(_OWORD *)v71 = *(_OWORD *)&v10->hDevice;
    v11 = *(_OWORD *)&v10->pPrivateDriverData;
    v12 = *(_QWORD *)&v10->hContext;
  }
  else
  {
    *(_OWORD *)v71 = *(_OWORD *)&a1->hDevice;
    v11 = *(_OWORD *)&a1->pPrivateDriverData;
    v12 = *(_QWORD *)&a1->hContext;
  }
  v73 = v12;
  *(_OWORD *)Src = v11;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v58, v71[0], Current, &v75);
  v15 = v75;
  v67 = v75;
  if ( !v75 )
  {
    v51 = WdLogNewEntry5_WdError(v14, v13, 0LL);
    *(_QWORD *)(v51 + 24) = v71[0];
    v53 = -1073741811;
    *(_QWORD *)(v51 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v51);
LABEL_66:
    if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
    goto LABEL_61;
  }
  v16 = *(_QWORD *)(*((_QWORD *)v75 + 2) + 16LL);
  v17 = 0;
  v18 = v71[2];
  v65 = v71[2];
  v19 = v71[2];
  while ( 1 )
  {
    v19 >>= 1;
    if ( !v19 )
      break;
    ++v17;
  }
  if ( v17 >= *(_DWORD *)(v16 + 256) )
    goto LABEL_70;
  v20 = 352LL * v17;
  v21 = *(unsigned __int16 *)(v20 + *(_QWORD *)(v16 + 2440));
  v22 = v71[1];
  v66 = v71[1];
  if ( v71[1] >= (unsigned int)v21 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v21, v75);
    v52[3] = v22;
    goto LABEL_72;
  }
  if ( GetBitCount(v71[2]) > 1 )
  {
LABEL_70:
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v52[3] = v18;
LABEL_72:
    v53 = -1073741811;
    v52[4] = -1073741811LL;
    goto LABEL_74;
  }
  Value = v71[3];
  v64.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v71[3];
  if ( (v71[3] & 8) == 0 )
  {
    if ( (*(_DWORD *)(v24 + 1916) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v25, v23, v22) )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v13, v15);
      v53 = -1073741811;
      v52[3] = -1073741811LL;
      v52[4] = 297LL;
      goto LABEL_74;
    }
    v15 = v67;
    Value = v64.Value;
  }
  v68 = *(_DWORD *)(v24 + 1728);
  v74 = v68;
  if ( v68 >= 0x7008 && (Value & 0xFFFFFFE0) != 0 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v13, v15);
    v53 = -1073741811;
    v52[3] = -1073741811LL;
    v52[4] = 307LL;
LABEL_74:
    WdLogEvent5_WdWarning(v52);
    goto LABEL_66;
  }
  v27 = 0LL;
  v69 = 0LL;
  v28 = Src[0];
  v29 = (unsigned int)Src[1];
  if ( Src[0] )
  {
    if ( LODWORD(Src[1]) )
      goto LABEL_22;
LABEL_73:
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v13, v15);
    v52[3] = v28;
    v52[4] = v29;
    v53 = -1073741811;
    v52[5] = -1073741811LL;
    goto LABEL_74;
  }
  if ( LODWORD(Src[1]) )
    goto LABEL_73;
LABEL_22:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76, v15);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, (__int64)v67, 0, v30, 0);
  v31 = COREDEVICEACCESS::AcquireShared((__int64)v80, 0xFFFFFFFF, 0LL);
  v59 = v31;
  if ( v31 >= 0 )
  {
    if ( v28 )
    {
      if ( a2 )
      {
        v70 = (struct DXGCONTEXT *)v29;
        v27 = operator new[](v29, 0x4B677844u, PagedPool);
        v69 = v27;
        if ( !v27 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
          v57[3] = v67;
          v57[4] = v70;
          v53 = -1073741801;
          v57[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v57);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
          if ( v76[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76);
          goto LABEL_66;
        }
        v35 = (ULONG64)v28 + v29;
        if ( v35 < (unsigned __int64)v28 || v35 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v27, v28, v29);
        v31 = v59;
        v36 = v65;
        v37 = v66;
        v38 = v64.0;
        goto LABEL_30;
      }
      v27 = v28;
      v69 = v28;
    }
    v38 = v64.0;
    v37 = v66;
    v36 = v65;
LABEL_30:
    v70 = 0LL;
    if ( v31 < 0
      || (v59 = DXGDEVICE::CreateContext(
                  v67,
                  &v70,
                  v37,
                  v36,
                  (struct _D3DDDI_CREATECONTEXTFLAGS)v38,
                  v27,
                  v29,
                  SHIDWORD(Src[1]),
                  1),
          v59 < 0) )
    {
      v42 = v59;
    }
    else
    {
      v39 = *((_DWORD *)v70 + 6);
      v77 = v39;
      if ( a2 )
      {
        p_hContext = &a1->hContext;
        if ( (unsigned __int64)&a1->hContext >= MmUserProbeAddress )
          p_hContext = (_DWORD *)MmUserProbeAddress;
        *p_hContext = v39;
        if ( v29 )
        {
          v79 = *((_QWORD *)v67 + 2);
          v78 = *(DXGADAPTER **)(v79 + 16);
          if ( DXGADAPTER::IsDxgmms2(v78) )
          {
            if ( v68 >= 0x7008 )
            {
              v41 = (ULONG64)v28 + v29;
              if ( v41 > MmUserProbeAddress || v41 <= (unsigned __int64)v28 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v28, v27, v29);
            }
          }
        }
      }
      else
      {
        a1->hContext = v39;
      }
      v42 = v59;
    }
    if ( v27 != v28 )
      operator delete[](v27);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    if ( v76[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76);
    if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v43);
    if ( v62 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v44, &EventProfilerExit, v45, v60);
    }
    return v42;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
  if ( v76[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v76);
  if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v54);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v55, &EventProfilerExit, v56, v60);
  return (unsigned int)v59;
}
