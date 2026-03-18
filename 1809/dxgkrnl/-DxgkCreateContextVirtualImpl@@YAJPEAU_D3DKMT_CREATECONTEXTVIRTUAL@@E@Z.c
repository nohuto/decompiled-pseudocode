/*
 * XREFs of ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00E9B5C
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C00EA100 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C013BB9C (DxgkCreateContextVirtualInternal.c)
 *     ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ECB20 (-VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C00105B4 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E6218 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C00EA0DC (-GetBitCount@@YAII@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateContextVirtualImpl(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1, char a2, const GUID *a3)
{
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // r13
  __int64 v14; // r10
  unsigned int v15; // r9d
  PVOID v16; // r14
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r15
  unsigned int v21; // r9d
  __int64 v22; // r10
  ADAPTER_RENDER *v23; // r11
  __int64 Value; // rcx
  PVOID v25; // r15
  unsigned int v26; // r12d
  __int64 v27; // r9
  int v28; // r13d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  ULONG64 v32; // rcx
  unsigned int v33; // r9d
  unsigned int v34; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS v35; // ecx
  int v36; // r8d
  _DWORD *p_hContext; // rdx
  ULONG64 v38; // rcx
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rcx
  const GUID *v46; // r8
  _QWORD *v47; // rax
  __int64 v48; // rcx
  const GUID *v49; // r8
  struct DXGDEVICE *v50; // [rsp+50h] [rbp-138h] BYREF
  int v51; // [rsp+58h] [rbp-130h] BYREF
  __int64 v52; // [rsp+60h] [rbp-128h]
  char v53; // [rsp+68h] [rbp-120h]
  unsigned int v54; // [rsp+70h] [rbp-118h]
  unsigned int v55; // [rsp+74h] [rbp-114h]
  DXGDEVICE *v56; // [rsp+78h] [rbp-110h]
  PVOID v57; // [rsp+80h] [rbp-108h]
  struct DXGCONTEXT *v58; // [rsp+88h] [rbp-100h] BYREF
  unsigned int v59[4]; // [rsp+90h] [rbp-F8h]
  void *Src[2]; // [rsp+A0h] [rbp-E8h]
  __int64 v61; // [rsp+B0h] [rbp-D8h]
  unsigned int v62; // [rsp+B8h] [rbp-D0h]
  struct DXGDEVICE *v63; // [rsp+C0h] [rbp-C8h] BYREF
  _QWORD v64[2]; // [rsp+C8h] [rbp-C0h] BYREF
  int v65; // [rsp+D8h] [rbp-B0h]
  __int64 v66; // [rsp+E0h] [rbp-A8h]
  DXGADAPTER *v67; // [rsp+E8h] [rbp-A0h]
  _BYTE v68[152]; // [rsp+F0h] [rbp-98h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS v71; // [rsp+1A0h] [rbp+18h]
  unsigned int v72; // [rsp+1A8h] [rbp+20h]

  v51 = -1;
  v52 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v53 = 1;
    v51 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2039);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v42 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v42);
LABEL_71:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v45, &EventProfilerExit, v46, v51);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (struct _D3DKMT_CREATECONTEXTVIRTUAL *)MmUserProbeAddress;
    *(_OWORD *)v59 = *(_OWORD *)&v7->hDevice;
    v8 = *(_OWORD *)&v7->pPrivateDriverData;
    v9 = *(_QWORD *)&v7->hContext;
  }
  else
  {
    *(_OWORD *)v59 = *(_OWORD *)&a1->hDevice;
    v8 = *(_OWORD *)&a1->pPrivateDriverData;
    v9 = *(_QWORD *)&a1->hContext;
  }
  v61 = v9;
  *(_OWORD *)Src = v8;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, v59[0], Current, &v63);
  v13 = v63;
  v56 = v63;
  if ( !v63 )
  {
    v43 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v43 + 24) = v59[0];
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v43);
LABEL_68:
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    goto LABEL_71;
  }
  v14 = *(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL);
  v15 = 0;
  v16 = (PVOID)v59[2];
  v72 = v59[2];
  v17 = v59[2];
  while ( 1 )
  {
    v17 >>= 1;
    if ( !v17 )
      break;
    ++v15;
  }
  if ( v15 >= *(_DWORD *)(v14 + 256) )
    goto LABEL_62;
  v18 = 352LL * v15;
  v19 = *(unsigned __int16 *)(v18 + *(_QWORD *)(v14 + 2416));
  v20 = v59[1];
  v54 = v59[1];
  if ( v59[1] >= (unsigned int)v19 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v19, v12);
    v44[3] = v20;
    v44[4] = -1073741811LL;
    goto LABEL_67;
  }
  if ( GetBitCount(v59[2]) > 1 )
  {
LABEL_62:
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v44[4] = -1073741811LL;
LABEL_66:
    v44[3] = v16;
    goto LABEL_67;
  }
  Value = v59[3];
  v71.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v59[3];
  if ( (v59[3] & 8) == 0 )
  {
    if ( (*(_DWORD *)(v22 + 1892) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v23, v21, v20) )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v10, v12);
      v44[3] = -1073741811LL;
      v44[4] = 297LL;
      goto LABEL_67;
    }
    Value = v71.Value;
  }
  v55 = *(_DWORD *)(v22 + 1712);
  v62 = v55;
  if ( v55 >= 0x7008 && (Value & 0xFFFFFFE0) != 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v10, v12);
    v44[3] = -1073741811LL;
    v44[4] = 307LL;
LABEL_67:
    WdLogEvent5_WdWarning(v44);
    goto LABEL_68;
  }
  v25 = 0LL;
  v57 = 0LL;
  v16 = Src[0];
  v26 = (unsigned int)Src[1];
  if ( Src[0] )
  {
    if ( LODWORD(Src[1]) )
      goto LABEL_22;
    goto LABEL_65;
  }
  if ( LODWORD(Src[1]) )
  {
LABEL_65:
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v10, v12);
    v44[4] = v26;
    v44[5] = -1073741811LL;
    goto LABEL_66;
  }
LABEL_22:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64, v13);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, (__int64)v13, 0, v27, 0);
  v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68);
  if ( v28 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
    if ( v64[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
    if ( !v50 )
      goto LABEL_50;
LABEL_48:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
LABEL_50:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v39, &EventProfilerExit, v40, v51);
    }
    return (unsigned int)v28;
  }
  if ( !v16 )
    goto LABEL_56;
  if ( !a2 )
  {
    v25 = v16;
    v57 = v16;
LABEL_56:
    v35.0 = v71.0;
    v34 = v54;
    v33 = v72;
    goto LABEL_30;
  }
  v58 = (struct DXGCONTEXT *)v26;
  v25 = operator new(v26, 0x4B677844u, PagedPool);
  v57 = v25;
  if ( v25 )
  {
    v32 = (ULONG64)v16 + v26;
    if ( v32 < (unsigned __int64)v16 || v32 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, v16, v26);
    v33 = v72;
    v34 = v54;
    v35.0 = v71.0;
LABEL_30:
    v58 = 0LL;
    v28 = DXGDEVICE::CreateContext(v56, &v58, v34, v33, v35, v25, v26, SHIDWORD(Src[1]), 1);
    if ( v28 >= 0 )
    {
      v36 = *((_DWORD *)v58 + 6);
      v65 = v36;
      p_hContext = &a1->hContext;
      if ( a2 )
      {
        if ( (unsigned __int64)p_hContext >= MmUserProbeAddress )
          p_hContext = (_DWORD *)MmUserProbeAddress;
        *p_hContext = v36;
        if ( v26 )
        {
          v66 = *((_QWORD *)v56 + 2);
          v67 = *(DXGADAPTER **)(v66 + 16);
          if ( DXGADAPTER::IsDxgmms2(v67) )
          {
            if ( v55 >= 0x7008 )
            {
              v38 = (ULONG64)v16 + v26;
              if ( v38 > MmUserProbeAddress || v38 <= (unsigned __int64)v16 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v16, v25, v26);
            }
          }
        }
      }
      else
      {
        *p_hContext = v36;
      }
    }
    if ( v25 != v16 )
      operator delete[](v25);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
    if ( v64[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
    if ( !v50 )
      goto LABEL_50;
    goto LABEL_48;
  }
  v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
  v47[3] = v56;
  v47[4] = v58;
  v47[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v47);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
  if ( v64[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
  if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v48, &EventProfilerExit, v49, v51);
  return 3221225495LL;
}
