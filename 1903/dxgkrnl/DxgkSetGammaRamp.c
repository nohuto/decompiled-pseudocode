/*
 * XREFs of DxgkSetGammaRamp @ 0x1C02331C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1C0002AE4 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CDD4 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000D294 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C003F1B4 (-SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E8738 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C02C9918 (MonitorNotifyDXGIGammaRampChange.c)
 */

__int64 __fastcall DxgkSetGammaRamp(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rbx
  struct _KTHREAD **Current; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // r14
  __int64 v14; // rax
  struct DXGDEVICE *v15; // rax
  bool v16; // zf
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // r12d
  _QWORD *v21; // rax
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  enum _D3DDDI_GAMMARAMP_TYPE v27; // eax
  __int64 v28; // rax
  __int64 v29; // rsi
  _QWORD *v30; // rax
  DXGK_GAMMA_RAMP *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  DXGK_GAMMA_RAMP *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  void *v40; // rcx
  const void *v41; // rdx
  char *v42; // r9
  unsigned int v43; // r12d
  __int64 v44; // r14
  unsigned __int64 i; // r8
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  char v51; // al
  struct DXGDEVICE *v52; // [rsp+30h] [rbp-128h] BYREF
  struct _KTHREAD **v53; // [rsp+38h] [rbp-120h]
  unsigned int v54; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v55[2]; // [rsp+48h] [rbp-110h] BYREF
  unsigned int v56; // [rsp+58h] [rbp-100h]
  struct DXGDEVICE *v57[2]; // [rsp+60h] [rbp-F8h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v58[4]; // [rsp+70h] [rbp-E8h]
  void *Src[2]; // [rsp+80h] [rbp-D8h]
  _BYTE v60[160]; // [rsp+90h] [rbp-C8h] BYREF

  v2 = (_OWORD *)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v53 = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4, 0LL, v5);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return v7;
  }
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v58 = *v2;
  *(_OWORD *)Src = v2[1];
  v9 = (unsigned int)v58[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v52, v58[0], Current, v57);
  v13 = v57[0];
  if ( !v57[0] )
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = v9;
    v7 = -1073741811;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    v15 = v52;
    if ( !v52 )
      return v7;
    goto LABEL_8;
  }
  v17 = *((_QWORD *)v57[0] + 216);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v18 + 24) = v9;
    v7 = -1073741637;
    *(_QWORD *)(v18 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v18);
    if ( !v52 )
      return v7;
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_9:
    if ( v16 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
    return v7;
  }
  LODWORD(v19) = 0;
  v20 = (unsigned int)Src[1];
  v7 = -1073741811;
  if ( v58[2] == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    LODWORD(v19) = (*(_DWORD *)(v17 + 1896) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Src[1]) != 1536 )
      LODWORD(v19) = -1073741811;
  }
  else if ( v58[2] != D3DDDI_GAMMARAMP_DXGI_1 || LODWORD(Src[1]) != 12324 )
  {
    LODWORD(v19) = -1073741811;
  }
  if ( (int)v19 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning((unsigned int)(v58[2] - 2), v10, v12);
    v21[3] = v58[2];
    v21[4] = v9;
    v21[5] = (int)v19;
    WdLogEvent5_WdWarning(v21);
    if ( !v52 )
      return (unsigned int)v19;
LABEL_23:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
    return (unsigned int)v19;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55, v57[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v60, (__int64)v13, 1, v22, 0);
  if ( *(_BYTE *)(*(_QWORD *)(v17 + 2552) + 235LL) )
    v23 = COREDEVICEACCESS::AcquireExclusive((__int64)v60, 1LL);
  else
    v23 = COREDEVICEACCESS::AcquireShared((__int64)v60, 0xFFFFFFFF, 0LL);
  LODWORD(v19) = v23;
  if ( v23 < 0 )
  {
LABEL_30:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v60);
    if ( v55[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
    if ( !v52 )
      return (unsigned int)v19;
    goto LABEL_23;
  }
  v26 = *(unsigned int *)(*(_QWORD *)(v17 + 2552) + 80LL);
  v27 = *((_DWORD *)v13 + 434);
  if ( (_DWORD)v26 != v27 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v26, v24);
    *(_QWORD *)(v28 + 24) = 4110LL;
    WdLogEvent5_WdAssertion(v28);
    v27 = *((_DWORD *)v13 + 434);
  }
  v29 = (unsigned int)v58[1];
  v56 = v58[1];
  if ( (unsigned int)v27 <= v58[1] )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v24, v25);
    v30[3] = v13;
    v30[4] = v29;
    v30[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v60);
    if ( v55[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
    v15 = v52;
    if ( !v52 )
      return v7;
LABEL_8:
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_9;
  }
  v31 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  if ( v31 )
    v36 = DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v31);
  else
    v36 = 0LL;
  v57[1] = v36;
  if ( v36 )
  {
    LODWORD(v19) = DXGK_GAMMA_RAMP::Initialize((size_t *)v36, (unsigned int)v58[2], 0LL);
    if ( (int)v19 >= 0 )
    {
      v40 = (void *)*((_QWORD *)v36 + 4);
      v41 = Src[0];
      v42 = (char *)Src[0] + v20;
      if ( v42 < Src[0] || (unsigned __int64)v42 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v40, v41, v20);
      v43 = v56;
      DXGDEVICE::SetDeviceGammaRamp(v13, v56, v36);
      v54 = -1;
      v44 = 1LL;
      for ( i = 0LL; (int)DmmEnumClientVidPnPathTargetsFromSource((DXGADAPTER *)v17, v43, i, &v54) >= 0; i = v44++ )
      {
        v38 = v54;
        if ( v54 == -1 )
          break;
        v46 = MonitorNotifyDXGIGammaRampChange(v17);
        v19 = v46;
        if ( v46 < 0 )
        {
          v50 = WdLogNewEntry5_WdError(v48, v47, v49);
          *(_QWORD *)(v50 + 24) = v19;
          WdLogEvent5_WdError(v50);
          break;
        }
      }
      v51 = *((_BYTE *)v53 + 301);
      *((_BYTE *)v53 + 301) = 1;
      if ( !v51 )
        DxgkLogCodePointPacket(0x5Eu, 3u, v19, 0, *(_QWORD *)(v17 + 276));
    }
    ReferenceCounted::Release(v36, v38, v39);
    goto LABEL_30;
  }
  v37 = WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
  *(_QWORD *)(v37 + 24) = v13;
  WdLogEvent5_WdLowResource(v37);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v60);
  if ( v55[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
  if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
  return 3221225495LL;
}
