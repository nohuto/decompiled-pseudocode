/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CDC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CA3C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0107E60 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0249948 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C026AE18 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // di
  __int64 v6; // rax
  unsigned int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int *v10; // rbx
  __int64 v11; // rcx
  void *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  char v15; // r13
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // r15d
  _QWORD *PoolWithTag; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int *v27; // r12
  UINT64 *v28; // r15
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // r9d
  unsigned int v37; // r11d
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r12
  UINT v45; // eax
  struct _KTHREAD **v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct DXGDEVICE *v50; // r15
  __int64 v51; // rax
  struct DXGDEVICE *v52; // rax
  __int64 v53; // r9
  char v55; // [rsp+68h] [rbp-A0h]
  int v56; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct DXGDEVICE *v57; // [rsp+70h] [rbp-98h] BYREF
  void *v58; // [rsp+78h] [rbp-90h] BYREF
  struct DXGDEVICE *v59; // [rsp+80h] [rbp-88h] BYREF
  __int64 v60; // [rsp+88h] [rbp-80h] BYREF
  char v61; // [rsp+90h] [rbp-78h]
  _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v62; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v63[24]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v64[24]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v65[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v66[64]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v67[88]; // [rsp+130h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v64,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v56 = -1073741811;
    v7 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
    v10 = v7;
    if ( !v7 )
      goto LABEL_69;
    v11 = v7[6];
    v12 = 0LL;
    v58 = 0LL;
    LOBYTE(v9) = 2;
    if ( !(_DWORD)v11 && (v7[7] & 2) == 0 || (v8 = 0xFFFFLL, (unsigned int)v11 > 0xFFFF) )
    {
      v13 = WdLogNewEntry5_WdError(v11, v8, v9);
      v14 = v10[6];
LABEL_63:
      *(_QWORD *)(v13 + 24) = v14;
      goto LABEL_64;
    }
    if ( !v7[12] || (v7[7] & 2) != 0 )
    {
      v17 = v7[8];
      v15 = 0;
      if ( !v17 || v17 > 0xFFFF )
      {
        v13 = WdLogNewEntry5_WdError(v11, 0xFFFFLL, v9);
        v14 = v10[8];
        goto LABEL_63;
      }
    }
    else
    {
      v15 = 1;
      if ( v7[8] )
      {
        v16 = WdLogNewEntry5_WdError(v11, 0xFFFFLL, v9);
        *(_QWORD *)(v16 + 24) = 2901LL;
LABEL_12:
        v13 = v16;
LABEL_64:
        WdLogEvent5_WdError(v13);
        goto LABEL_65;
      }
      v17 = 0;
    }
    LODWORD(v57) = 8 * v11;
    v18 = *((unsigned int *)a1 + 22);
    v19 = 4 * (v11 + v17) + 56;
    if ( (unsigned int)v18 < v19 )
      goto LABEL_65;
    if ( (v10[7] & 2) != 0 )
    {
      if ( !*((_QWORD *)v10 + 6) )
      {
        v16 = WdLogNewEntry5_WdError(v11, v18, v9);
        *(_QWORD *)(v16 + 24) = 2926LL;
        goto LABEL_12;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
      v58 = PoolWithTag;
      v12 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v25 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
        *(_QWORD *)(v25 + 24) = 2932LL;
        WdLogEvent5_WdLowResource(v25);
        v56 = -1073741801;
        goto LABEL_68;
      }
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *((_BYTE *)PoolWithTag + 16) = 1;
      *PoolWithTag = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 96LL) + 88LL);
      PoolWithTag[1] = *((_QWORD *)v10 + 6);
      v11 = v10[6];
      LODWORD(v18) = *((_DWORD *)a1 + 22);
    }
    v26 = (unsigned int)v18 - v19;
    v27 = &v10[(unsigned int)v11 + 14];
    if ( (unsigned int)v26 >= (unsigned int)v57 )
      v28 = (UINT64 *)&v27[v10[8]];
    else
      v28 = 0LL;
    v55 = 0;
    if ( v15 )
    {
      v44 = v10[12];
      v45 = v10[6];
      v62.ObjectHandleArray = v10 + 14;
      v46 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
      *(_QWORD *)&v62.Flags.0 = 0LL;
      v62.hDevice = v44;
      v62.ObjectCount = v45;
      v62.FenceValueArray = v28;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v57, v44, v46, &v59);
      v50 = v59;
      if ( v59 )
      {
        DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v60, v59);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v50, 0, v53, 0);
        v56 = COREDEVICEACCESS::AcquireShared((__int64)v65, 0xFFFFFFFF, 0LL);
        if ( v56 >= 0 )
          v56 = SignalSynchronizationObjectFromCpu(&v62, *((struct DXGPROCESS **)a1 + 6), v50);
        COREACCESS::~COREACCESS((COREACCESS *)v67);
        COREACCESS::~COREACCESS((COREACCESS *)v66);
        if ( v60 && v61 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v60 + 104));
          KeLeaveCriticalRegion();
        }
        v52 = v57;
        if ( !v57 )
        {
LABEL_65:
          if ( v56 < 0 )
          {
LABEL_66:
            if ( v12 )
              ExFreePoolWithTag(v12, 0);
          }
LABEL_68:
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v56, 4u);
          v5 = 1;
          goto LABEL_69;
        }
      }
      else
      {
        v51 = WdLogNewEntry5_WdError(v48, v47, v49);
        *(_QWORD *)(v51 + 24) = v44;
        *(_QWORD *)(v51 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v51);
        v52 = v57;
        if ( !v57 )
          goto LABEL_66;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
    }
    else
    {
      v29 = *((_QWORD *)a1 + 6);
      if ( !v29 )
      {
        v30 = WdLogNewEntry5_WdError(v11, v26, v10 + 14);
        *(_QWORD *)(v30 + 24) = PsGetCurrentProcess(v32, v31);
        v33 = v30;
        goto LABEL_29;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v63,
        *((struct _KTHREAD ***)a1 + 6));
      v36 = *v27;
      v37 = *(_DWORD *)(v29 + 224);
      v38 = (*v27 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v38 >= v37 )
      {
LABEL_42:
        v40 = WdLogNewEntry5_WdError(v35, v34, v38);
        *(_QWORD *)(v40 + 24) = *v27;
        WdLogEvent5_WdError(v40);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
        goto LABEL_65;
      }
      v57 = *(struct DXGDEVICE **)(v29 + 208);
      v34 = *((unsigned int *)v57 + 4 * (unsigned int)v38 + 2);
      v35 = (v36 >> 25) & 0x60;
      if ( ((v36 >> 25) & 0x60) != (*((_BYTE *)v57 + 16 * (unsigned int)v38 + 8) & 0x60)
        || (v34 & 0x2000) != 0
        || (v34 & 0x1F) == 0
        || (v34 &= 0x1Fu, (_BYTE)v34 != 7)
        || !*((_QWORD *)v57 + 2 * (unsigned int)v38) )
      {
        if ( (unsigned int)v38 >= v37 )
          goto LABEL_42;
        v34 = (unsigned int)v38;
        v38 = *(_QWORD *)(v29 + 208);
        v35 = *(unsigned int *)(v38 + 16LL * (unsigned int)v34 + 8);
        if ( ((v36 >> 25) & 0x60) != (*(_BYTE *)(v38 + 16LL * (unsigned int)v34 + 8) & 0x60)
          || (v35 & 0x2000) != 0
          || (v35 & 0x1F) == 0 )
        {
          goto LABEL_42;
        }
        v34 *= 2LL;
        v35 &= 0x1Fu;
        if ( (_BYTE)v35 != 15 )
        {
          v39 = WdLogNewEntry5_WdError(v35, v34, v38);
          *(_QWORD *)(v39 + 24) = 267LL;
          WdLogEvent5_WdError(v39);
          goto LABEL_42;
        }
        if ( !*(_QWORD *)(v38 + 8 * v34) )
          goto LABEL_42;
        v55 = 1;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
      if ( v55 )
      {
        if ( v28 )
        {
          v56 = SubmitSignalSyncObjectsToHwQueue(
                  v10[6],
                  v10 + 14,
                  (struct _D3DDDICB_SIGNALFLAGS)v10[7],
                  v10[8],
                  v27,
                  v28,
                  *((struct DXGPROCESS **)a1 + 6),
                  0,
                  0);
          goto LABEL_65;
        }
        v33 = WdLogNewEntry5_WdError(v42, v41, v43);
        *(_QWORD *)(v33 + 24) = 3011LL;
LABEL_29:
        WdLogEvent5_WdError(v33);
        goto LABEL_66;
      }
      v56 = SignalSynchronizationObjectInternal(
              v10[6],
              v10 + 14,
              v10[7],
              v10[8],
              v27,
              v28,
              *((_QWORD *)v10 + 5),
              &v58,
              *((struct DXGPROCESS **)a1 + 6),
              0,
              0);
    }
    v12 = v58;
    goto LABEL_65;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 2886LL;
  WdLogEvent5_WdError(v6);
LABEL_69:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v64);
  return v5;
}
