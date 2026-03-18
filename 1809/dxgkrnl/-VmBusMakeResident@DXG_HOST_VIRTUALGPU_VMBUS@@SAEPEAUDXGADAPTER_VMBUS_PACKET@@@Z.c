/*
 * XREFs of ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F04D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0011B74 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0011C28 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00120CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003660C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C01235A0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResident(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  char v4; // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct _KTHREAD **v12; // r8
  __int64 v13; // rcx
  DXGDEVICE *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct _EX_RUNDOWN_REF *v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  bool v32; // zf
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  const GUID *v36; // r8
  __int64 v37; // rax
  DXGDEVICE *v38; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v43[24]; // [rsp+70h] [rbp-98h] BYREF
  D3DDDI_MAKERESIDENT v44; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v45[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v46[24]; // [rsp+F0h] [rbp-18h] BYREF
  UINT64 PagingFenceValue; // [rsp+108h] [rbp+0h] BYREF
  UINT64 NumBytesToTrim; // [rsp+110h] [rbp+8h]
  __int64 v49; // [rsp+118h] [rbp+10h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v46,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( !v7 )
      goto LABEL_4;
    v49 = 0LL;
    PagingFenceValue = 0LL;
    NumBytesToTrim = 0LL;
    v4 = 1;
    v8 = *(unsigned int *)(v7 + 36);
    if ( (_DWORD)v8 && ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) / v8 >= 4 )
    {
      v9 = *(_DWORD *)(v7 + 24);
      if ( v9 )
      {
        if ( (_DWORD)v8 != 1 )
        {
          v10 = WdLogNewEntry5_WdError(v6);
          *(_QWORD *)(v10 + 24) = 3743LL;
          WdLogEvent5_WdError(v10);
          LODWORD(v49) = -1073741811;
LABEL_43:
          v3 = WdLogNewEntry5_WdError(v11);
          *(_QWORD *)(v3 + 24) = (int)v49;
          goto LABEL_3;
        }
        v12 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
        v38 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, v9, v12, &v38);
        v14 = v38;
        if ( !v38 )
        {
          v15 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v15 + 24) = *(unsigned int *)(v7 + 24);
          WdLogEvent5_WdError(v15);
          LODWORD(v49) = -1073741811;
LABEL_14:
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v39);
          goto LABEL_42;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43, v38);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v44, (__int64)v14, 0, v16, 0);
        LODWORD(v49) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v44);
        if ( (int)v49 < 0 )
        {
          v18 = WdLogNewEntry5_WdError(v17);
          *(_QWORD *)(v18 + 24) = (int)v49;
          WdLogEvent5_WdError(v18);
LABEL_17:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)&v44);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
          goto LABEL_14;
        }
        if ( !DXGDEVICE::UmdManagesResidency(v14) )
          goto LABEL_17;
        v19 = *(_DWORD *)(v7 + 40);
        v40 = 0LL;
        v42 = 0LL;
        v20 = *((_QWORD *)a1 + 6);
        v21 = *((_QWORD *)v14 + 2);
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 208));
        v22 = (v19 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v22 < *(_DWORD *)(v20 + 248) )
        {
          v23 = *(_QWORD *)(v20 + 232);
          v24 = *(_DWORD *)(v23 + 16 * v22 + 8);
          if ( ((v19 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60)
            && (v24 & 0x2000) == 0
            && (v24 & 0x1F) != 0 )
          {
            v25 = v24 & 0x1F;
            if ( (_BYTE)v25 == 5 )
            {
              v27 = *(struct _EX_RUNDOWN_REF **)(v23 + 16LL * (unsigned int)v22);
LABEL_26:
              DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38, v27);
              ExReleasePushLockSharedEx(v20 + 208, 0LL);
              KeLeaveCriticalRegion();
              if ( v38 )
              {
                LOBYTE(v30) = EvaluateCurrentState((int **)&g_Feature_29581626_58994398_FeatureDescriptorDetails);
                if ( v30 )
                {
                  v32 = *((_QWORD *)v38 + 1) == (_QWORD)v14;
                }
                else
                {
                  v31 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
                  v32 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 1) + 16LL) + 16LL) == v31;
                }
                if ( v32 )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v21 + 544) + 8LL)
                                                                               + 976LL))(
                    *((_QWORD *)v14 + 81),
                    0LL,
                    &v40,
                    &v42);
                  v41 = 0LL;
                  v33 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v21 + 544) + 8LL) + 768LL))(
                          *(_QWORD *)(v21 + 552),
                          v40,
                          (char *)v38 + 24,
                          1LL,
                          3,
                          &v41,
                          v45);
                  LODWORD(v49) = v33;
                  if ( v33 >= 0 )
                  {
                    if ( v33 == 259 )
                    {
                      (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v21 + 544)
                                                                                                + 8LL)
                                                                                    + 984LL))(
                        *(_QWORD *)(v21 + 552),
                        &v42,
                        &v41,
                        1LL);
                      LODWORD(v49) = 0;
                    }
                  }
                  else
                  {
                    v35 = WdLogNewEntry5_WdError(v34);
                    *(_QWORD *)(v35 + 24) = (int)v49;
                    WdLogEvent5_WdError(v35);
                  }
                  goto LABEL_29;
                }
                v29 = (_QWORD *)WdLogNewEntry5_WdError(v31);
                v29[3] = v14;
                v29[4] = v38;
                v29[5] = -1073741811LL;
              }
              else
              {
                v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
                v29[3] = *(unsigned int *)(v7 + 40);
              }
              WdLogEvent5_WdError(v29);
              LODWORD(v49) = -1073741811;
LABEL_29:
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v38);
              goto LABEL_17;
            }
            v26 = WdLogNewEntry5_WdError(v25);
            *(_QWORD *)(v26 + 24) = 316LL;
            WdLogEvent5_WdError(v26);
          }
        }
        v27 = 0LL;
        goto LABEL_26;
      }
      memset(&v44, 0, sizeof(v44));
      v44.Flags.Value = *(_DWORD *)(v7 + 32);
      v44.NumAllocations = v8;
      v44.AllocationList = (const D3DKMT_HANDLE *)(v7 + 40);
      v44.hPagingQueue = *(_DWORD *)(v7 + 28);
      LODWORD(v49) = DxgkMakeResidentInternal(&v44, 0, v36);
      NumBytesToTrim = v44.NumBytesToTrim;
      PagingFenceValue = v44.PagingFenceValue;
    }
    else
    {
      v37 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v37 + 24) = *((unsigned int *)a1 + 22);
      WdLogEvent5_WdError(v37);
      LODWORD(v49) = -1073741811;
    }
LABEL_42:
    if ( (int)v49 >= 0 )
    {
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &PagingFenceValue, 0x18u);
      goto LABEL_5;
    }
    goto LABEL_43;
  }
  v3 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v3 + 24) = 3717LL;
LABEL_3:
  WdLogEvent5_WdError(v3);
LABEL_4:
  v4 = 0;
LABEL_5:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
  return v4;
}
