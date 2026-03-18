/*
 * XREFs of ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0220010
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000C3A4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C9F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0131DD0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResident(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  char v6; // r12
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int *v10; // rdi
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  signed __int64 v15; // rcx
  __int64 v16; // r8
  struct _KTHREAD **v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  DXGDEVICE *v21; // r14
  __int64 v22; // rax
  struct DXGDEVICE *v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned int v29; // r15d
  __int64 v30; // r13
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rax
  struct _EX_RUNDOWN_REF *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  struct DXGDEVICE *v53; // [rsp+48h] [rbp-C0h] BYREF
  struct _EX_RUNDOWN_REF *v54; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+58h] [rbp-B0h]
  _QWORD v56[2]; // [rsp+60h] [rbp-A8h] BYREF
  DXGDEVICE *v57; // [rsp+70h] [rbp-98h] BYREF
  __int64 v58; // [rsp+78h] [rbp-90h] BYREF
  __int64 v59; // [rsp+80h] [rbp-88h] BYREF
  __int64 v60; // [rsp+88h] [rbp-80h] BYREF
  __int64 v61; // [rsp+90h] [rbp-78h]
  _BYTE v62[8]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v63[2]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int *v64; // [rsp+A8h] [rbp-60h]
  __int64 v65; // [rsp+B0h] [rbp-58h]
  unsigned int v66; // [rsp+B8h] [rbp-50h]
  _DWORD v67[5]; // [rsp+BCh] [rbp-4Ch] BYREF
  _BYTE v68[24]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v69; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-10h]
  _BYTE v71[8]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v72[64]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v73[88]; // [rsp+150h] [rbp+48h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v68,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v10 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( !v10 )
      goto LABEL_4;
    v69 = 0uLL;
    v70 = 0LL;
    v11 = v10[9];
    v6 = 1;
    if ( !(_DWORD)v11
      || (v8 = ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) % v11,
          ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) / v11 < 4) )
    {
      v52 = WdLogNewEntry5_WdError(v9, v8, v11);
      *(_QWORD *)(v52 + 24) = *((unsigned int *)a1 + 22);
      WdLogEvent5_WdError(v52);
      LODWORD(v70) = -1073741811;
      goto LABEL_49;
    }
    v12 = v10[6];
    if ( !(_DWORD)v12 )
    {
      v66 = v10[8];
      v63[1] = v11;
      v64 = v10 + 10;
      v63[0] = v10[7];
      v65 = 0LL;
      memset(v67, 0, sizeof(v67));
      LODWORD(v70) = DxgkMakeResidentInternal((ULONG64)v63, 0, (const GUID *)0xFFFFFFFFFFFFFFFFLL, 0LL);
      v69 = *(_OWORD *)&v67[1];
      goto LABEL_49;
    }
    if ( (_DWORD)v11 != 1 )
    {
      v13 = WdLogNewEntry5_WdError(v9, v12, v11);
      *(_QWORD *)(v13 + 24) = 3703LL;
      WdLogEvent5_WdError(v13);
      LODWORD(v70) = -1073741811;
LABEL_50:
      v5 = WdLogNewEntry5_WdError(v15, v14, v16);
      *(_QWORD *)(v5 + 24) = (int)v70;
      goto LABEL_3;
    }
    v17 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
    v57 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53, v12, v17, &v57);
    v21 = v57;
    if ( !v57 )
    {
      v22 = WdLogNewEntry5_WdError(v19, v18, v20);
      *(_QWORD *)(v22 + 24) = v10[6];
      WdLogEvent5_WdError(v22);
      v23 = v53;
      LODWORD(v70) = -1073741811;
      if ( !v53 )
        goto LABEL_50;
      goto LABEL_14;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56, v57);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v71, (__int64)v21, 0, v24, 0);
    LODWORD(v70) = COREDEVICEACCESS::AcquireShared((__int64)v71, 0xFFFFFFFF, 0LL);
    if ( (int)v70 < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = (int)v70;
      WdLogEvent5_WdError(v28);
      goto LABEL_18;
    }
    if ( !DXGDEVICE::UmdManagesResidency(v21) )
    {
LABEL_18:
      COREACCESS::~COREACCESS((COREACCESS *)v73);
      COREACCESS::~COREACCESS((COREACCESS *)v72);
      if ( v56[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
      v23 = v53;
      if ( !v53 )
      {
LABEL_49:
        if ( (int)v70 >= 0 )
        {
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v69, 0x18u);
          goto LABEL_5;
        }
        goto LABEL_50;
      }
LABEL_14:
      v15 = _InterlockedDecrement64((volatile signed __int64 *)v23 + 8);
      if ( !v15 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
      goto LABEL_49;
    }
    v29 = v10[10];
    v58 = 0LL;
    v60 = 0LL;
    v55 = *((_QWORD *)v21 + 2);
    v61 = *((_QWORD *)a1 + 6);
    v30 = v61 + 184;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v30, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v33 = *(_DWORD *)(v30 + 16);
        if ( v33 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v31, &EventBlockThread, v32, v33);
      }
      ExAcquirePushLockSharedEx(v30, 0LL);
    }
    v34 = (v29 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v34 < *(_DWORD *)(v61 + 224) )
    {
      v35 = *(_QWORD *)(v61 + 208);
      v36 = *(_DWORD *)(v35 + 16 * v34 + 8);
      if ( ((v29 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60) && (v36 & 0x2000) == 0 && (v36 & 0x1F) != 0 )
      {
        v37 = v36 & 0x1F;
        if ( (_BYTE)v37 == 5 )
        {
          v39 = *(struct _EX_RUNDOWN_REF **)(v35 + 16LL * (unsigned int)v34);
LABEL_36:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v54, v39);
          ExReleasePushLockSharedEx(v30, 0LL);
          KeLeaveCriticalRegion();
          if ( v54 )
          {
            v45 = *(_QWORD *)(v54[1].Count + 16);
            v46 = *(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL);
            if ( *(_QWORD *)(v45 + 16) == v46 )
            {
              v47 = v55;
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v55 + 544) + 8LL)
                                                                           + 976LL))(
                *((_QWORD *)v21 + 81),
                0LL,
                &v58,
                &v60);
              v59 = 0LL;
              v48 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v47 + 544) + 8LL) + 768LL))(
                      *(_QWORD *)(v47 + 552),
                      v58,
                      v54 + 3,
                      1LL,
                      3,
                      &v59,
                      v62);
              LODWORD(v70) = v48;
              if ( v48 >= 0 )
              {
                if ( v48 == 259 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v47 + 544)
                                                                                            + 8LL)
                                                                                + 984LL))(
                    *(_QWORD *)(v47 + 552),
                    &v60,
                    &v59,
                    1LL);
                  LODWORD(v70) = 0;
                }
              }
              else
              {
                v51 = WdLogNewEntry5_WdError(v49, v44, v50);
                *(_QWORD *)(v51 + 24) = (int)v70;
                WdLogEvent5_WdError(v51);
              }
              goto LABEL_39;
            }
            v43 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45, v42);
            v43[3] = v21;
            v43[4] = v54;
            v43[5] = -1073741811LL;
          }
          else
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40, v42);
            v43[3] = v10[10];
          }
          WdLogEvent5_WdError(v43);
          LODWORD(v70) = -1073741811;
LABEL_39:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54, v44);
          goto LABEL_18;
        }
        v38 = WdLogNewEntry5_WdError(v37, 2LL * (unsigned int)v34, v35);
        *(_QWORD *)(v38 + 24) = 267LL;
        WdLogEvent5_WdError(v38);
      }
    }
    v39 = 0LL;
    goto LABEL_36;
  }
  v5 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v5 + 24) = 3677LL;
LABEL_3:
  WdLogEvent5_WdError(v5);
LABEL_4:
  v6 = 0;
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v68);
  return v6;
}
