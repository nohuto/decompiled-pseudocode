/*
 * XREFs of ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0220C30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EE8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CBA4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTU.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0107704 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0139AA0 (DxgkMapGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  const GUID *v8; // r8
  __int64 v9; // r14
  __int64 v10; // rdx
  _BOOL8 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  struct _KTHREAD **Current; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGDEVICE *v18; // r13
  __int64 v19; // rax
  struct DXGDEVICE *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // r12d
  __int64 v24; // rbx
  __int64 v25; // rcx
  const GUID *v26; // r8
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _EX_RUNDOWN_REF *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _EX_RUNDOWN_REF *v38; // rbx
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  signed __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // rax
  __int64 v48; // rax
  int v50; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE *v51; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h]
  struct _EX_RUNDOWN_REF *v53; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v54; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v55; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v56[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v57[24]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  __int64 v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  _BYTE v61[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v62[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v63[88]; // [rsp+F8h] [rbp-8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v57,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)a1);
    v9 = v7;
    if ( !v7 )
      goto LABEL_46;
    v58 = 0LL;
    v59 = 0LL;
    v60 = 0LL;
    v10 = *(unsigned int *)(v7 + 128);
    v11 = (_DWORD)v10 == 0;
    if ( v11 == (*(_DWORD *)(v7 + 24) == 0) )
    {
      LODWORD(v60) = -1073741811;
      v12 = WdLogNewEntry5_WdError(v11, v10, v8);
      *(_QWORD *)(v12 + 24) = 4074LL;
LABEL_44:
      WdLogEvent5_WdError(v12);
      goto LABEL_45;
    }
    if ( !(_DWORD)v10 )
    {
      LODWORD(v60) = DxgkMapGpuVirtualAddress(v7 + 24, v10, v8);
      goto LABEL_41;
    }
    v13 = *(_QWORD *)(v7 + 80);
    if ( v13 >= 0x20 || (v13 & 0xC) != 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v8);
      v47[3] = *(_QWORD *)(v9 + 80);
      v47[4] = *((_QWORD *)a1 + 6);
      v47[5] = 4089LL;
      WdLogEvent5_WdError(v47);
      LODWORD(v60) = -1073741811;
      goto LABEL_45;
    }
    v54 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v11, v10);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v51, *(_DWORD *)(v9 + 128), Current, &v54);
    v18 = v54;
    if ( *(_DWORD *)(v9 + 128) && !v54 )
    {
      LODWORD(v60) = -1073741811;
      v19 = WdLogNewEntry5_WdError(v16, v15, v17);
      *(_QWORD *)(v19 + 24) = (int)v60;
      *(_QWORD *)(v19 + 32) = *(unsigned int *)(v9 + 128);
      WdLogEvent5_WdError(v19);
      v20 = v51;
      if ( v51 )
        goto LABEL_12;
      goto LABEL_45;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v56,
      v54);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v18, 0, v21, 0);
    LODWORD(v60) = COREDEVICEACCESS::AcquireShared((__int64)v61, 0xFFFFFFFF, 0LL);
    if ( (int)v60 < 0 )
    {
LABEL_15:
      COREACCESS::~COREACCESS((COREACCESS *)v63);
      COREACCESS::~COREACCESS((COREACCESS *)v62);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v56);
      v20 = v51;
      if ( v51 )
      {
LABEL_12:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
      }
LABEL_45:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v58, 0x18u);
      v5 = 1;
      goto LABEL_46;
    }
    v22 = *((_QWORD *)a1 + 6);
    v23 = *(_DWORD *)(v9 + 56);
    v53 = 0LL;
    v52 = v22;
    v24 = v22 + 184;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v24, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = *(_DWORD *)(v24 + 16);
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v25, &EventBlockThread, v26, v27);
      }
      ExAcquirePushLockSharedEx(v24, 0LL);
    }
    v28 = (v23 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *(_DWORD *)(v52 + 224) )
    {
      v29 = *(_QWORD *)(v52 + 208);
      v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
      if ( ((v23 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60) && (v30 & 0x2000) == 0 && (v30 & 0x1F) != 0 )
      {
        v31 = v30 & 0x1F;
        if ( (_BYTE)v31 == 5 )
        {
          v33 = *(struct _EX_RUNDOWN_REF **)(v29 + 16LL * (unsigned int)v28);
          goto LABEL_30;
        }
        v32 = WdLogNewEntry5_WdError(v31, 2LL * (unsigned int)v28, v29);
        *(_QWORD *)(v32 + 24) = 267LL;
        WdLogEvent5_WdError(v32);
      }
    }
    v33 = 0LL;
LABEL_30:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v55, v33);
    ExReleasePushLockSharedEx(v24, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v53, &v55);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v55, v34);
    v38 = v53;
    if ( !v53 )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35, v37);
      v39[3] = -1073741811LL;
      v39[4] = *(unsigned int *)(v9 + 56);
      v39[5] = *((_QWORD *)a1 + 6);
LABEL_32:
      WdLogEvent5_WdError(v39);
      LODWORD(v60) = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53, v40);
      goto LABEL_15;
    }
    v41 = (_QWORD *)*((_QWORD *)v18 + 2);
    v42 = *(_QWORD *)(v53[1].Count + 16);
    if ( *(_QWORD *)(v42 + 16) != v41[2] )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41, v37);
      v39[3] = v18;
      v39[4] = v38;
      v39[5] = -1073741811LL;
      goto LABEL_32;
    }
    LOBYTE(v50) = 0;
    LODWORD(v60) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, __int64, int, _DWORD))(*(_QWORD *)(v41[68] + 8LL)
                                                                                              + 792LL))(
                     v41[69],
                     0LL,
                     v53[3].Count,
                     v9 + 24,
                     v50,
                     0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53, v43);
    COREACCESS::~COREACCESS((COREACCESS *)v63);
    COREACCESS::~COREACCESS((COREACCESS *)v62);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v56);
    if ( v51 )
    {
      v45 = _InterlockedDecrement64((volatile signed __int64 *)v51 + 8);
      if ( !v45 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
    }
LABEL_41:
    v59 = *(_QWORD *)(v9 + 120);
    v48 = *(_QWORD *)(v9 + 112);
    v58 = v48;
    if ( (int)v60 >= 0 && v48 )
      goto LABEL_45;
    v12 = WdLogNewEntry5_WdError(v45, v44, v46);
    *(_QWORD *)(v12 + 24) = (int)v60;
    *(_QWORD *)(v12 + 32) = v58;
    goto LABEL_44;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 4065LL;
  WdLogEvent5_WdError(v6);
LABEL_46:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
  return v5;
}
