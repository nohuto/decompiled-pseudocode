/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00E2010
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E0CB8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttq @ 0x1C003F3A4 (McTemplateK0ppqpttq.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E1C9C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C00E2504 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FFDD0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCountedBuffer@@@Z @ 0x1C0223A90 (-VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCo.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdi
  struct _KEVENT *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  ADAPTER_RENDER *v31; // r8
  __int64 v32; // rcx
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // r8d
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rsi
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _DWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int HostProcess; // eax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  unsigned int Device; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  unsigned int v67; // [rsp+50h] [rbp-11h]
  _QWORD v68[3]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v69[24]; // [rsp+70h] [rbp+Fh] BYREF
  _DXGKARG_CREATEDEVICE v70; // [rsp+88h] [rbp+27h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v69, Current);
  v7 = HMGRTABLE::AllocHandle(*((_QWORD *)this + 5) + 208LL, this, 3LL);
  *((_DWORD *)this + 83) = v7;
  v10 = v7;
  if ( !v7 )
  {
    v50 = WdLogNewEntry5_WdWarning(v8, 0LL, v9);
    *(_QWORD *)(v50 + 24) = this;
    *(_QWORD *)(v50 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v50);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v69);
    return 3221225495LL;
  }
  v11 = *((_QWORD *)this + 5);
  v12 = (v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(v11 + 224) )
  {
    v13 = *(_QWORD *)(v11 + 208);
    v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
    if ( ((v10 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      *(_DWORD *)(v13 + 16 * (((unsigned __int64)v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v69);
  v15 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
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
    v24 = (struct _KEVENT *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    *((_QWORD *)this + 220) = v24;
    if ( v24 )
    {
      KeInitializeEvent(v24, NotificationEvent, 1u);
      v25 = (_QWORD *)*((_QWORD *)this + 2);
      memset(&v70.8, 0, 24);
      v70.hDevice = this;
      if ( (*(_DWORD *)(v25[2] + 1912LL) & 1) != 0 )
      {
        if ( *((_DWORD *)this + 82) == 2 )
          v70.Flags.Value |= 2u;
      }
      else
      {
        v70.pInfo = (DXGK_DEVICEINFO *)((char *)this + 480);
      }
      if ( (*(_DWORD *)(v25[2] + 308LL) & 0x10) != 0 )
      {
        v49 = a3 << 31;
        a3 = 1;
        v70.Flags.Value = v70.Flags.Value & 0x7FFFFFFF | v49;
      }
      *((_BYTE *)this + 1745) = a2;
      *((_BYTE *)this + 1746) = a3;
      v26 = (*(__int64 (__fastcall **)(_QWORD, DXGDEVICE *))(*(_QWORD *)(v25[68] + 8LL) + 384LL))(v25[69], this);
      *((_QWORD *)this + 81) = v26;
      v16 = v26;
      if ( v26 )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL)
                                                    + 392LL))(v26);
        if ( (int)result < 0 )
          return result;
        LODWORD(v23) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
        if ( (int)v23 < 0 )
          goto LABEL_48;
        v31 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        *((_BYTE *)this + 1750) = 1;
        v32 = *((_QWORD *)v31 + 2);
        if ( (*(_DWORD *)(v32 + 1916) & 0x80u) != 0 )
        {
          v70.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)
                                              + 8LL * *(unsigned int *)(v32 + 208))
                                  + 8LL);
          v32 = *((_QWORD *)v31 + 2);
        }
        if ( (*(_DWORD *)(v32 + 1916) & 0x40) != 0 )
        {
          v47 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL) + 8LL * *(unsigned int *)(v32 + 208));
          if ( v47 )
            v47 = (_QWORD *)v47[2];
          v70.hKmdProcess = v47;
        }
        LODWORD(v23) = ADAPTER_RENDER::DdiCreateDevice(v31, &v70);
        if ( (int)v23 < 0 )
        {
LABEL_48:
          v53 = WdLogNewEntry5_WdWarning(v29, v28, v30);
          *(_QWORD *)(v53 + 24) = this;
          goto LABEL_49;
        }
        v33 = *((_DWORD *)this + 82);
        v34 = 0;
        *((_QWORD *)this + 59) = v70.hDevice;
        v68[0] = 0LL;
        v68[1] = 0LL;
        if ( v33 == 2 )
          v34 = 8;
        v35 = 0;
        if ( v33 == 1 )
          v35 = 32;
        v36 = v35 | v68[0] & 0xFFFFFFD1 | v34 & 0xFFFFFFDF | (2 * (a2 & 1 | (2 * (a3 & 1))));
        v68[2] = *((_QWORD *)this + 43);
        v37 = *((_QWORD *)this + 2);
        LODWORD(v68[0]) = v36;
        v38 = (*(__int64 (__fastcall **)(DXGDEVICE *, _QWORD *, char *))(*(_QWORD *)(*(_QWORD *)(v37 + 520) + 8LL)
                                                                       + 112LL))(
                this,
                v68,
                (char *)this + 656);
        v23 = v38;
        if ( v38 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 1080LL))(
            *((_QWORD *)this + 81),
            *((_QWORD *)this + 82));
          goto LABEL_29;
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
    v51 = WdLogNewEntry5_WdLowResource(v56, v55, v57, v58);
    *(_QWORD *)(v51 + 24) = 1009LL;
    WdLogEvent5_WdLowResource(v51);
    return 3221225495LL;
  }
  *v54 = 4;
  v54[1] = 1;
  *(_DWORD *)(*((_QWORD *)this + 43) + 8LL) = 0;
  HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
  if ( !HostProcess )
  {
    v62 = WdLogNewEntry5_WdError(v60, 0LL, v61);
    *(_QWORD *)(v62 + 24) = -1073741823LL;
LABEL_53:
    WdLogEvent5_WdError(v62);
    return 3221225473LL;
  }
  Device = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4144LL),
             HostProcess,
             *(struct _D3DKMT_CREATEDEVICEFLAGS *)((char *)this + 352),
             *((_DWORD *)this + 82) == 2,
             *((struct CRefCountedBuffer **)this + 43));
  *((_DWORD *)this + 84) = Device;
  if ( !Device )
  {
    v62 = WdLogNewEntry5_WdError(v65, v64, v66);
    *(_QWORD *)(v62 + 24) = 1030LL;
    goto LABEL_53;
  }
LABEL_29:
  v39 = *((_QWORD *)this + 5);
  v40 = *((unsigned int *)this + 83);
  *((_DWORD *)this + 116) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v39 + 184));
  v41 = ((unsigned int)v40 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v41 < *(_DWORD *)(v39 + 224) )
  {
    v42 = *(_QWORD *)(v39 + 208);
    v43 = ((unsigned int)v40 >> 25) & 0x60;
    if ( (((unsigned int)v40 >> 25) & 0x60) == (*(_BYTE *)(v42 + 16 * v41 + 8) & 0x60)
      && (*(_DWORD *)(v42 + 16 * v41 + 8) & 0x1F) != 0 )
    {
      v44 = 2 * ((v40 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v42 + 8 * v44 + 8) & 0x2000) == 0 )
      {
        v48 = WdLogNewEntry5_WdAssertion(v43, v42);
        *(_QWORD *)(v48 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v48);
        v42 = *(_QWORD *)(v39 + 208);
      }
      *(_DWORD *)(v42 + 8 * v44 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v39 + 192) = 0LL;
  ExReleasePushLockExclusiveEx(v39 + 184, 0LL);
  KeLeaveCriticalRegion();
  v46 = (_QWORD *)WdLogNewEntry5_WdEvent(v45);
  v46[3] = this;
  v46[4] = *((unsigned int *)this + 83);
  v46[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v46);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v67 = *((_DWORD *)this + 83);
      McTemplateK0ppqpttq(
        *((unsigned __int8 *)this + 1745),
        &EventCreateDevice,
        (const GUID *)v67,
        *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 82),
        this,
        *((unsigned __int8 *)this + 1745),
        *((unsigned __int8 *)this + 1746),
        v67);
    }
  }
  return 0LL;
}
