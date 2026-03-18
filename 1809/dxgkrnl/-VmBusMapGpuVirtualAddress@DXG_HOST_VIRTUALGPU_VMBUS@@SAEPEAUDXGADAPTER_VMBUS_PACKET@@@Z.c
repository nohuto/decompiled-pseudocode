/*
 * XREFs of ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F09E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00120CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003665C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTU.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C01093F0 (DxgkMapGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rax
  const GUID *v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx
  _BOOL8 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  struct _KTHREAD **Current; // rax
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r13
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _EX_RUNDOWN_REF *v24; // rdx
  __int64 v25; // rcx
  struct DXGDEVICE *v26; // rbx
  _QWORD *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rcx
  _QWORD *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rax
  int v36; // [rsp+28h] [rbp-A9h]
  struct DXGDEVICE *v37; // [rsp+48h] [rbp-89h] BYREF
  _BYTE v38[8]; // [rsp+50h] [rbp-81h] BYREF
  struct _EX_RUNDOWN_REF *v39; // [rsp+58h] [rbp-79h] BYREF
  _BYTE v40[16]; // [rsp+60h] [rbp-71h] BYREF
  _BYTE v41[24]; // [rsp+70h] [rbp-61h] BYREF
  _BYTE v42[96]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v43; // [rsp+E8h] [rbp+17h] BYREF
  __int64 v44; // [rsp+F0h] [rbp+1Fh]
  __int64 v45; // [rsp+F8h] [rbp+27h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v41,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)a1);
    v7 = v5;
    if ( !v5 )
      goto LABEL_39;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v8 = *(unsigned int *)(v5 + 128);
    v9 = (_DWORD)v8 == 0;
    if ( v9 == (*(_DWORD *)(v5 + 24) == 0) )
    {
      LODWORD(v45) = -1073741811;
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = 4129LL;
LABEL_37:
      WdLogEvent5_WdError(v10);
      goto LABEL_38;
    }
    if ( !(_DWORD)v8 )
    {
      v33 = DxgkMapGpuVirtualAddress(v5 + 24, v8, v6);
      v31 = v33;
      LODWORD(v45) = v33;
      goto LABEL_34;
    }
    v11 = *(_QWORD *)(v5 + 80);
    if ( v11 >= 0x20 || (v11 & 0xC) != 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v32[3] = *(_QWORD *)(v7 + 80);
      v32[4] = *((_QWORD *)a1 + 6);
      v32[5] = 4144LL;
      WdLogEvent5_WdError(v32);
      LODWORD(v45) = -1073741811;
      goto LABEL_38;
    }
    v37 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v38, *(_DWORD *)(v7 + 128), Current, &v37);
    v14 = v37;
    if ( *(_DWORD *)(v7 + 128) && !v37 )
    {
      LODWORD(v45) = -1073741811;
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = (int)v45;
      *(_QWORD *)(v15 + 32) = *(unsigned int *)(v7 + 128);
      WdLogEvent5_WdError(v15);
LABEL_12:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v38);
LABEL_38:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v43, 0x18u);
      v3 = 1;
      goto LABEL_39;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v40,
      v37);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v14, 0, v16, 0);
    LODWORD(v45) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
    if ( (int)v45 < 0 )
    {
LABEL_14:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v40);
      goto LABEL_12;
    }
    v17 = *((_QWORD *)a1 + 6);
    v18 = *(_DWORD *)(v7 + 56);
    v37 = 0LL;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v17 + 208));
    v19 = (v18 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < *(_DWORD *)(v17 + 248) )
    {
      v20 = *(_QWORD *)(v17 + 232);
      v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
      if ( ((v18 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60) && (v21 & 0x2000) == 0 && (v21 & 0x1F) != 0 )
      {
        v22 = v21 & 0x1F;
        if ( (_BYTE)v22 == 5 )
        {
          v24 = *(struct _EX_RUNDOWN_REF **)(v20 + 16LL * (unsigned int)v19);
          goto LABEL_22;
        }
        v23 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v23 + 24) = 316LL;
        WdLogEvent5_WdError(v23);
      }
    }
    v24 = 0LL;
LABEL_22:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39, v24);
    ExReleasePushLockSharedEx(v17 + 208, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v37, (struct DXGALLOCATION **)&v39);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
    v26 = v37;
    if ( !v37 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v27[3] = -1073741811LL;
      v27[4] = *(unsigned int *)(v7 + 56);
      v27[5] = *((_QWORD *)a1 + 6);
LABEL_24:
      WdLogEvent5_WdError(v27);
      LODWORD(v45) = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v37);
      goto LABEL_14;
    }
    LOBYTE(v28) = EvaluateCurrentState((int **)&g_Feature_29581626_58994398_FeatureDescriptorDetails);
    if ( v28 )
    {
      v30 = *((_QWORD *)v26 + 1) == (_QWORD)v14;
    }
    else
    {
      v29 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
      v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 1) + 16LL) + 16LL) == v29;
    }
    if ( !v30 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v29);
      v27[3] = v14;
      v27[4] = v26;
      v27[5] = -1073741811LL;
      goto LABEL_24;
    }
    LOBYTE(v36) = 0;
    LODWORD(v45) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, _DWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 544LL) + 8LL)
                                                                                           + 792LL))(
                     *(_QWORD *)(*((_QWORD *)v14 + 2) + 552LL),
                     0LL,
                     *((_QWORD *)v26 + 3),
                     v7 + 24,
                     v36,
                     0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v37);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v40);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v38);
    v31 = (unsigned int)v45;
LABEL_34:
    v44 = *(_QWORD *)(v7 + 120);
    v34 = *(_QWORD *)(v7 + 112);
    v43 = v34;
    if ( (int)v31 >= 0 && v34 )
      goto LABEL_38;
    v10 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v10 + 24) = (int)v45;
    *(_QWORD *)(v10 + 32) = v43;
    goto LABEL_37;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 4120LL;
  WdLogEvent5_WdError(v4);
LABEL_39:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
  return v3;
}
