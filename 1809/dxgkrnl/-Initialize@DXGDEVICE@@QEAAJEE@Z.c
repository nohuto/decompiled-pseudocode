/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00E7260
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E7F78 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?VidMmInitDevice@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C000FD74 (-VidMmInitDevice@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C000FDF0 (-VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0ppqpttq @ 0x1C0039008 (McTemplateK0ppqpttq.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00E00B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E04F8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C00E6F60 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCountedBuffer@@@Z @ 0x1C01F36F0 (-VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCo.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  struct _KTHREAD **Current; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r8d
  struct _ERESOURCE *v15; // rax
  struct VIDMM_DEVICE *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdi
  struct _KEVENT *v24; // rax
  __int64 v25; // r8
  struct VIDMM_DEVICE *Device; // rax
  __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  ADAPTER_RENDER *v31; // r8
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // r8d
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rsi
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _DWORD *v54; // rax
  __int64 v55; // rcx
  unsigned int HostProcess; // edx
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rax
  _QWORD v62[3]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v63[24]; // [rsp+68h] [rbp-1h] BYREF
  _DXGKARG_CREATEDEVICE v64; // [rsp+80h] [rbp+17h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v63, Current);
  v7 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)this + 5) + 232LL), (__int64)this, 3, 0, 0);
  *((_DWORD *)this + 83) = v7;
  v10 = v7;
  if ( !v7 )
  {
    v50 = WdLogNewEntry5_WdWarning(v8, 0LL, v9);
    *(_QWORD *)(v50 + 24) = this;
    *(_QWORD *)(v50 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v50);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
    return 3221225495LL;
  }
  v11 = *((_QWORD *)this + 5);
  v12 = (v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(v11 + 248) )
  {
    v13 = *(_QWORD *)(v11 + 232);
    v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
    if ( ((v10 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      *(_DWORD *)(v13 + 16 * (((unsigned __int64)v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
  v15 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 13) = v15;
  if ( !v15 )
  {
LABEL_46:
    v52 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v52 + 24) = this;
    *(_QWORD *)(v52 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v52);
    return 3221225495LL;
  }
  v19 = ExInitializeResourceLite(v15);
  v23 = v19;
  if ( v19 < 0 )
    goto LABEL_47;
  if ( (*((_BYTE *)this + 1749) & 1) == 0 )
  {
    v24 = (struct _KEVENT *)operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    *((_QWORD *)this + 220) = v24;
    if ( v24 )
    {
      KeInitializeEvent(v24, NotificationEvent, 1u);
      memset(&v64, 0, sizeof(v64));
      v25 = *((_QWORD *)this + 2);
      v64.hDevice = this;
      if ( (*(_DWORD *)(*(_QWORD *)(v25 + 16) + 1888LL) & 1) != 0 )
      {
        if ( *((_DWORD *)this + 82) == 2 )
          v64.Flags.Value |= 2u;
      }
      else
      {
        v64.pInfo = (DXGK_DEVICEINFO *)((char *)this + 480);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v25 + 16) + 308LL) & 0x10) != 0 )
      {
        v49 = a3 << 31;
        a3 = 1;
        v64.Flags.Value = v64.Flags.Value & 0x7FFFFFFF | v49;
      }
      *((_BYTE *)this + 1745) = a2;
      *((_BYTE *)this + 1746) = a3;
      Device = VIDMM_EXPORT::VidMmCreateDevice(
                 *(VIDMM_EXPORT **)(v25 + 544),
                 *(struct VIDMM_GLOBAL **)(v25 + 552),
                 this);
      *((_QWORD *)this + 81) = Device;
      v16 = Device;
      if ( Device )
      {
        result = VIDMM_EXPORT::VidMmInitDevice(*(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL), Device);
        if ( (int)result < 0 )
          return result;
        LODWORD(v23) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
        if ( (int)v23 < 0 )
          goto LABEL_48;
        v31 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        *((_BYTE *)this + 1750) = 1;
        v32 = *((_QWORD *)v31 + 2);
        if ( (*(_DWORD *)(v32 + 1892) & 0x80u) != 0 )
        {
          v64.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)
                                              + 8LL * *(unsigned int *)(v32 + 208))
                                  + 8LL);
          v32 = *((_QWORD *)v31 + 2);
        }
        if ( (*(_DWORD *)(v32 + 1892) & 0x40) != 0 )
        {
          v33 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL) + 8LL * *(unsigned int *)(v32 + 208));
          if ( v33 )
            v33 = (_QWORD *)v33[2];
          v64.hKmdProcess = v33;
        }
        LODWORD(v23) = ADAPTER_RENDER::DdiCreateDevice(v31, &v64, (const GUID *)v31);
        if ( (int)v23 < 0 )
        {
LABEL_48:
          v53 = WdLogNewEntry5_WdWarning(v29, v28, v30);
          *(_QWORD *)(v53 + 24) = this;
          goto LABEL_49;
        }
        v34 = *((_DWORD *)this + 82);
        v35 = 0;
        *((_QWORD *)this + 59) = v64.hDevice;
        v62[0] = 0LL;
        v62[1] = 0LL;
        if ( v34 == 2 )
          v35 = 8;
        v36 = 0;
        if ( v34 == 1 )
          v36 = 32;
        v37 = v36 | v62[0] & 0xFFFFFFD1 | v35 & 0xFFFFFFDF | (2 * (a2 & 1 | (2 * (a3 & 1))));
        v62[2] = *((_QWORD *)this + 43);
        v38 = *((_QWORD *)this + 2);
        LODWORD(v62[0]) = v37;
        v39 = (*(__int64 (__fastcall **)(DXGDEVICE *, _QWORD *, char *))(*(_QWORD *)(*(_QWORD *)(v38 + 520) + 8LL)
                                                                       + 112LL))(
                this,
                v62,
                (char *)this + 656);
        v23 = v39;
        if ( v39 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 1080LL))(
            *((_QWORD *)this + 81),
            *((_QWORD *)this + 82));
          goto LABEL_32;
        }
LABEL_47:
        v53 = WdLogNewEntry5_WdWarning(v21, v20, v22);
        *(_QWORD *)(v53 + 24) = this;
        *(_QWORD *)(v53 + 32) = v23;
LABEL_49:
        WdLogEvent5_WdWarning(v53);
        return (unsigned int)v23;
      }
    }
    goto LABEL_46;
  }
  v54 = operator new(0xCuLL, 0x4B677844u, 1, (POOL_TYPE)512);
  *((_QWORD *)this + 43) = v54;
  if ( !v54 )
  {
    v51 = WdLogNewEntry5_WdLowResource(v55);
    *(_QWORD *)(v51 + 24) = 1003LL;
    WdLogEvent5_WdLowResource(v51);
    return 3221225495LL;
  }
  *v54 = 4;
  v54[1] = 1;
  *(_DWORD *)(*((_QWORD *)this + 43) + 8LL) = 0;
  HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
  if ( !HostProcess )
  {
    v58 = WdLogNewEntry5_WdError(v57);
    *(_QWORD *)(v58 + 24) = -1073741823LL;
LABEL_53:
    WdLogEvent5_WdError(v58);
    return 3221225473LL;
  }
  v59 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4152LL),
          HostProcess,
          *(struct _D3DKMT_CREATEDEVICEFLAGS *)((char *)this + 352),
          *((_DWORD *)this + 82) == 2,
          *((struct CRefCountedBuffer **)this + 43));
  *((_DWORD *)this + 84) = v59;
  if ( !v59 )
  {
    v58 = WdLogNewEntry5_WdError(v60);
    *(_QWORD *)(v58 + 24) = 1024LL;
    goto LABEL_53;
  }
LABEL_32:
  v40 = *((_QWORD *)this + 5);
  v41 = *((unsigned int *)this + 83);
  *((_DWORD *)this + 116) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v40 + 208));
  v42 = ((unsigned int)v41 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v42 < *(_DWORD *)(v40 + 248) )
  {
    v43 = *(_QWORD *)(v40 + 232);
    v44 = ((unsigned int)v41 >> 25) & 0x60;
    if ( (((unsigned int)v41 >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60)
      && (*(_DWORD *)(v43 + 16 * v42 + 8) & 0x1F) != 0 )
    {
      v45 = 2 * ((v41 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v43 + 8 * v45 + 8) & 0x2000) == 0 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v44);
        *(_QWORD *)(v61 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v61);
        v43 = *(_QWORD *)(v40 + 232);
      }
      *(_DWORD *)(v43 + 8 * v45 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v40 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v40 + 208, 0LL);
  KeLeaveCriticalRegion();
  v48 = (_QWORD *)WdLogNewEntry5_WdEvent(v47, v46);
  v48[3] = this;
  v48[4] = *((unsigned int *)this + 83);
  v48[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v48);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqpttq(
        *((unsigned __int8 *)this + 1746),
        &EventCreateDevice,
        *((const GUID **)this + 2),
        *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 82),
        this,
        *((unsigned __int8 *)this + 1745),
        *((unsigned __int8 *)this + 1746),
        *((_DWORD *)this + 83));
  }
  return 0LL;
}
