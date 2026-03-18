/*
 * XREFs of DxgkSetGammaRamp @ 0x1C02029B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0005CB4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1C00060B4 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C001096C (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00132A8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0038DBC (-SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2F54 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetGammaRamp(_OWORD *a1)
{
  struct _KTHREAD **Current; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGDEVICE *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  bool v15; // zf
  signed int updated; // edi
  enum _D3DDDI_GAMMARAMP_TYPE v17; // r13d
  unsigned int v18; // r12d
  _QWORD *v19; // rax
  bool v20; // zf
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r14
  _QWORD *v29; // rax
  DXGK_GAMMA_RAMP *v30; // rax
  __int64 v31; // rcx
  size_t *v32; // rbx
  __int64 v33; // rax
  void *v34; // rcx
  const void *v35; // rdx
  char *v36; // r9
  unsigned int VidPnSourceOwnerType; // eax
  struct _KTHREAD **v38; // r13
  char v39; // al
  _QWORD v40[3]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v41[4]; // [rsp+48h] [rbp-C0h]
  void *Src[2]; // [rsp+58h] [rbp-B0h]
  _BYTE v43[152]; // [rsp+70h] [rbp-98h] BYREF
  struct DXGDEVICE *v44; // [rsp+118h] [rbp+10h] BYREF
  struct _KTHREAD **v45; // [rsp+120h] [rbp+18h]
  struct DXGDEVICE *v46; // [rsp+128h] [rbp+20h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v45 = Current;
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v3);
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
    return v5;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v41 = *a1;
  *(_OWORD *)Src = a1[1];
  v7 = v41[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, v41[0], Current, &v46);
  v11 = v46;
  if ( !v46 )
  {
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = v41[0];
    v5 = -1073741811;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_39:
    if ( !v44 )
      return v5;
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_11;
  }
  v13 = *((_QWORD *)v46 + 216);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v14 + 24) = v41[0];
    v5 = -1073741637;
    *(_QWORD *)(v14 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v14);
    if ( !v44 )
      return v5;
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_11:
    if ( v15 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    return v5;
  }
  updated = 0;
  v17 = v41[2];
  v18 = (unsigned int)Src[1];
  v5 = -1073741811;
  if ( v41[2] == 2 )
  {
    updated = (*(_DWORD *)(v13 + 1872) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Src[1]) != 1536 )
      updated = -1073741811;
  }
  else if ( v41[2] != 3 || LODWORD(Src[1]) != 12324 )
  {
    updated = -1073741811;
  }
  if ( updated < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v41[2] - 2, v8, v10);
    v19[3] = (int)v41[2];
    v19[4] = v7;
    v19[5] = updated;
    WdLogEvent5_WdWarning(v19);
    if ( !v44 )
      return (unsigned int)updated;
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_23:
    if ( v20 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    return (unsigned int)updated;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40, v46);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v11, 1, v21, 0);
  if ( *(_BYTE *)(*(_QWORD *)(v13 + 2520) + 134LL) )
    v22 = COREDEVICEACCESS::AcquireExclusive((__int64)v43, 1LL);
  else
    v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v43);
  updated = v22;
  if ( v22 < 0 )
  {
LABEL_30:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    if ( v40[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    if ( !v44 )
      return (unsigned int)updated;
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_23;
  }
  v25 = *(unsigned int *)(*(_QWORD *)(v13 + 2520) + 80LL);
  v26 = *((_DWORD *)v11 + 434);
  if ( (_DWORD)v25 != v26 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v27 + 24) = 4088LL;
    WdLogEvent5_WdAssertion(v27);
    v26 = *((_DWORD *)v11 + 434);
  }
  v28 = v41[1];
  if ( v26 <= v41[1] )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v23, v24);
    v29[3] = v11;
    v29[4] = v28;
    v29[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    if ( v40[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    goto LABEL_39;
  }
  v30 = (DXGK_GAMMA_RAMP *)operator new(0x30uLL, 0x4B677844u, PagedPool);
  if ( v30 )
    v32 = (size_t *)DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v30);
  else
    v32 = 0LL;
  v40[2] = v32;
  if ( v32 )
  {
    updated = DXGK_GAMMA_RAMP::Initialize(v32, v17, 0LL);
    if ( updated < 0 )
    {
LABEL_52:
      ReferenceCounted::Release((ReferenceCounted *)v32);
      goto LABEL_30;
    }
    v34 = (void *)v32[4];
    v35 = Src[0];
    v36 = (char *)Src[0] + v18;
    if ( v36 < Src[0] || (unsigned __int64)v36 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v34, v35, v18);
    DXGDEVICE::SetDeviceGammaRamp(v11, v28, (const struct DXGK_GAMMA_RAMP *)v32);
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v13 + 2520), v11, v28) )
    {
      if ( ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(DXGADAPTER ***)(v13 + 2520), v11, v28) )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v13 + 2520), v28);
        v38 = v45;
        if ( VidPnSourceOwnerType <= 1
          && !(*((unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))v45[13] + 28))(0LL, 0LL, 0LL) )
        {
LABEL_62:
          updated = ADAPTER_DISPLAY::UpdateGammaRamp(*(DXGADAPTER ***)(v13 + 2520), v28);
          if ( updated < 0 )
            DXGDEVICE::SetDeviceGammaRamp(v11, v28, 0LL);
        }
      }
      else
      {
        v38 = v45;
      }
      v39 = *((_BYTE *)v38 + 325);
      *((_BYTE *)v38 + 325) = 1;
      if ( !v39 )
        DxgkLogCodePointPacket(0x5Eu, 3u, updated, 0, *(_QWORD *)(v13 + 276));
      goto LABEL_52;
    }
    v38 = v45;
    goto LABEL_62;
  }
  v33 = WdLogNewEntry5_WdLowResource(v31);
  *(_QWORD *)(v33 + 24) = v11;
  WdLogEvent5_WdLowResource(v33);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
  if ( v40[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
  if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
  return 3221225495LL;
}
