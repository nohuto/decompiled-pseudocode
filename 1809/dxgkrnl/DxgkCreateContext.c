/*
 * XREFs of DxgkCreateContext @ 0x1C00F56C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E6218 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C00EA0DC (-GetBitCount@@YAII@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateContext(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGDEVICE *v10; // r13
  int v11; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r15d
  PVOID v25; // r14
  char *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // r8d
  int v31; // r9d
  int v32; // r10d
  int v33; // r11d
  _DWORD *v34; // rdx
  _QWORD *v35; // rdx
  _QWORD *v36; // rdx
  _QWORD *v37; // rdx
  _DWORD *v38; // rdx
  _QWORD *v39; // rdx
  _DWORD *v40; // rdx
  __int64 v41; // rcx
  const GUID *v42; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r14
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  const GUID *v50; // r8
  _QWORD *v51; // rax
  __int64 v52; // rcx
  const GUID *v53; // r8
  struct DXGDEVICE *v54; // [rsp+50h] [rbp-178h] BYREF
  int v55; // [rsp+58h] [rbp-170h] BYREF
  __int64 v56; // [rsp+60h] [rbp-168h]
  char v57; // [rsp+68h] [rbp-160h]
  _QWORD v58[2]; // [rsp+70h] [rbp-158h] BYREF
  struct DXGDEVICE *v59; // [rsp+80h] [rbp-148h] BYREF
  PVOID v60; // [rsp+88h] [rbp-140h]
  struct DXGCONTEXT *v61; // [rsp+90h] [rbp-138h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS v62[4]; // [rsp+A0h] [rbp-128h]
  void *Src[2]; // [rsp+B0h] [rbp-118h]
  __int128 v64; // [rsp+C0h] [rbp-108h]
  __int128 v65; // [rsp+D0h] [rbp-F8h]
  __int128 v66; // [rsp+E0h] [rbp-E8h]
  __int128 v67; // [rsp+F0h] [rbp-D8h]
  int v68; // [rsp+100h] [rbp-C8h]
  __int64 v69; // [rsp+108h] [rbp-C0h]
  __int64 v70; // [rsp+110h] [rbp-B8h]
  __int64 v71; // [rsp+118h] [rbp-B0h]
  __int64 v72; // [rsp+120h] [rbp-A8h]
  _BYTE v73[152]; // [rsp+130h] [rbp-98h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v75; // [rsp+1D8h] [rbp+10h]
  size_t Size; // [rsp+1E0h] [rbp+18h]

  v55 = -1;
  v56 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v57 = 1;
    v55 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2039);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v44 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v44);
LABEL_70:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
    if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v49, &EventProfilerExit, v50, v55);
    return 3221225485LL;
  }
  v6 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v62[0].0 = *v6;
  *(_OWORD *)Src = v6[1];
  v64 = v6[2];
  v65 = v6[3];
  v66 = v6[4];
  v67 = v6[5];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v54, v62[0].Value, Current, &v59);
  v10 = v59;
  if ( !v59 )
  {
    v45 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v45 + 24) = v62[0].Value;
    *(_QWORD *)(v45 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v45);
LABEL_67:
    if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
    goto LABEL_70;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v59 + 2) + 16LL) + 1888LL) & 1) != 0 )
  {
    v11 = 0;
    Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v62[2].Value;
    while ( 1 )
    {
      Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)(*(unsigned int *)&Value >> 1);
      if ( !*(_DWORD *)&Value )
        break;
      ++v11;
    }
    if ( (unsigned int)GetBitCount(v62[2].Value) > 1 || (unsigned int)v15 >= *(_DWORD *)(v16 + 256) )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
      v47[3] = v62[2].Value;
    }
    else
    {
      v17 = 352LL * (unsigned int)v15;
      v18 = *(unsigned __int16 *)(v17 + *(_QWORD *)(v16 + 2416));
      v19 = v62[1].Value;
      v75 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v62[1].Value;
      if ( v62[1].Value < (unsigned int)v18 )
        goto LABEL_13;
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v18, v15);
      v47[3] = v19;
    }
    v47[4] = -1073741811LL;
    goto LABEL_54;
  }
  v46 = v62[1].Value;
  v75 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v62[1].Value;
  if ( v62[1].Value || v62[2].Value )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v47[3] = v46;
    v47[4] = v62[2].Value;
    v47[5] = -1073741811LL;
LABEL_54:
    WdLogEvent5_WdWarning(v47);
    goto LABEL_67;
  }
LABEL_13:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58, v10);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, (__int64)v10, 0, v20, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v73);
  if ( v24 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    if ( v58[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58);
    if ( !v54 )
      goto LABEL_43;
LABEL_41:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
LABEL_43:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
    if ( v57 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v41, &EventProfilerExit, v42, v55);
    }
    return (unsigned int)v24;
  }
  v25 = 0LL;
  v60 = 0LL;
  v26 = (char *)Src[0];
  if ( !Src[0] )
  {
    if ( !LODWORD(Src[1]) )
    {
      v30 = (unsigned int)v75;
      goto LABEL_21;
    }
    goto LABEL_65;
  }
  if ( !LODWORD(Src[1]) )
  {
LABEL_65:
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v48[3] = v26;
    v48[4] = LODWORD(Src[1]);
    v48[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v48);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    if ( v58[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58);
    goto LABEL_67;
  }
  Size = LODWORD(Src[1]);
  v25 = operator new(LODWORD(Src[1]), 0x4B677844u, PagedPool);
  v60 = v25;
  if ( v25 )
  {
    if ( &v26[Size] < v26 || (unsigned __int64)&v26[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, v26, Size);
    v30 = (unsigned int)v75;
LABEL_21:
    v61 = 0LL;
    v24 = DXGDEVICE::CreateContext(v10, &v61, v30, v62[2].Value, v62[3], v25, (unsigned int)Src[1], SHIDWORD(Src[1]), 0);
    if ( v24 >= 0 )
    {
      v31 = *((_DWORD *)v61 + 6);
      v69 = *((_QWORD *)v61 + 7);
      v70 = *((_QWORD *)v61 + 6);
      v71 = *((_QWORD *)v61 + 11);
      v32 = *((_DWORD *)v61 + 18);
      v72 = *((_QWORD *)v61 + 15);
      v33 = *((_DWORD *)v61 + 26);
      v68 = v33;
      v34 = (_DWORD *)(a1 + 32);
      if ( a1 + 32 >= MmUserProbeAddress )
        v34 = (_DWORD *)MmUserProbeAddress;
      *v34 = v31;
      v35 = (_QWORD *)(a1 + 40);
      if ( a1 + 40 >= MmUserProbeAddress )
        v35 = (_QWORD *)MmUserProbeAddress;
      *v35 = v69;
      v36 = (_QWORD *)(a1 + 48);
      if ( a1 + 48 >= MmUserProbeAddress )
        v36 = (_QWORD *)MmUserProbeAddress;
      *v36 = v70;
      v37 = (_QWORD *)(a1 + 56);
      if ( a1 + 56 >= MmUserProbeAddress )
        v37 = (_QWORD *)MmUserProbeAddress;
      *v37 = v71;
      v38 = (_DWORD *)(a1 + 64);
      if ( a1 + 64 >= MmUserProbeAddress )
        v38 = (_DWORD *)MmUserProbeAddress;
      *v38 = v32;
      v39 = (_QWORD *)(a1 + 72);
      if ( a1 + 72 >= MmUserProbeAddress )
        v39 = (_QWORD *)MmUserProbeAddress;
      *v39 = v72;
      v40 = (_DWORD *)(a1 + 80);
      if ( a1 + 80 >= MmUserProbeAddress )
        v40 = (_DWORD *)MmUserProbeAddress;
      *v40 = v33;
    }
    operator delete[](v25);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    if ( v58[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58);
    if ( !v54 )
      goto LABEL_43;
    goto LABEL_41;
  }
  v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
  v51[3] = v10;
  v51[4] = Size;
  v51[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v51);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
  if ( v58[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58);
  if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v52, &EventProfilerExit, v53, v55);
  return 3221225495LL;
}
