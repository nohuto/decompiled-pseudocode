/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F93A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00109E8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0011D38 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00364F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0103B30 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0214F1C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0235EBC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 v4; // rax
  unsigned int *v5; // rax
  unsigned int *v6; // rbx
  __int64 v7; // rcx
  void *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // r13
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // r15d
  _QWORD *PoolWithTag; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int *v19; // r12
  UINT64 *v20; // r15
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // r9d
  unsigned int v28; // r11d
  unsigned int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r12
  struct _KTHREAD **v39; // r8
  __int64 v40; // rcx
  struct DXGDEVICE *v41; // rbx
  __int64 v42; // rax
  struct DXGDEVICE *v43; // rax
  __int64 v44; // r9
  __int64 v45; // rcx
  PERESOURCE *Global; // rax
  int v47; // eax
  __int64 v49; // [rsp+60h] [rbp-A0h] BYREF
  char v50; // [rsp+68h] [rbp-98h]
  _BYTE v51[16]; // [rsp+70h] [rbp-90h] BYREF
  _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v52; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v53[24]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v54[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v55[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v56[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v57[120]; // [rsp+F8h] [rbp-8h] BYREF
  struct DXGDEVICE *v58; // [rsp+180h] [rbp+80h] BYREF
  int v59; // [rsp+188h] [rbp+88h] BYREF
  void *v60; // [rsp+190h] [rbp+90h] BYREF
  struct DXGDEVICE *v61; // [rsp+198h] [rbp+98h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v54,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v59 = -1073741811;
    v5 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
    v6 = v5;
    if ( !v5 )
      goto LABEL_73;
    v7 = v5[6];
    v8 = 0LL;
    v60 = 0LL;
    if ( !(_DWORD)v7 && (v5[7] & 2) == 0 || (unsigned int)v7 > 0xFFFF )
    {
      v9 = WdLogNewEntry5_WdError(v7);
      v10 = v6[6];
LABEL_67:
      *(_QWORD *)(v9 + 24) = v10;
      goto LABEL_68;
    }
    if ( !v5[12] || (v5[7] & 2) != 0 )
    {
      v13 = v5[8];
      v11 = 0;
      if ( !v13 || v13 > 0xFFFF )
      {
        v9 = WdLogNewEntry5_WdError(v7);
        v10 = v6[8];
        goto LABEL_67;
      }
    }
    else
    {
      v11 = 1;
      if ( v5[8] )
      {
        v12 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v12 + 24) = 2938LL;
LABEL_12:
        v9 = v12;
LABEL_68:
        WdLogEvent5_WdError(v9);
        goto LABEL_69;
      }
      v13 = 0;
    }
    LODWORD(v58) = 8 * v7;
    v14 = *((_DWORD *)a1 + 22);
    v15 = 4 * (v7 + v13) + 56;
    if ( v14 < v15 )
      goto LABEL_69;
    if ( (v6[7] & 2) != 0 )
    {
      if ( !*((_QWORD *)v6 + 6) )
      {
        v12 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v12 + 24) = 2963LL;
        goto LABEL_12;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
      v60 = PoolWithTag;
      v8 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v18 = WdLogNewEntry5_WdLowResource(v17);
        *(_QWORD *)(v18 + 24) = 2969LL;
        WdLogEvent5_WdLowResource(v18);
        v59 = -1073741801;
        goto LABEL_72;
      }
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *((_BYTE *)PoolWithTag + 16) = 1;
      *PoolWithTag = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 96LL) + 88LL);
      PoolWithTag[1] = *((_QWORD *)v6 + 6);
      v7 = v6[6];
      v14 = *((_DWORD *)a1 + 22);
    }
    v19 = &v6[(unsigned int)v7 + 14];
    if ( v14 - v15 >= (unsigned int)v58 )
      v20 = (UINT64 *)&v19[v6[8]];
    else
      v20 = 0LL;
    LOBYTE(v58) = 0;
    if ( v11 )
    {
      if ( !v20 )
      {
        v37 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v37 + 24) = 3020LL;
LABEL_51:
        v25 = v37;
        goto LABEL_29;
      }
      memset(&v52, 0, sizeof(v52));
      v38 = v6[12];
      v39 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
      v52.ObjectCount = v6[6];
      v52.ObjectHandleArray = v6 + 14;
      v52.hDevice = v38;
      v52.FenceValueArray = v20;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v58, v38, v39, &v61);
      v41 = v61;
      if ( v61 )
      {
        DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v49, v61);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v41, 0, v44, 0);
        v59 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55);
        if ( v59 >= 0 )
        {
          Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v45);
          DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v51, Global);
          LOBYTE(v47) = EvaluateCurrentState((int **)&reg_FeatureDescriptors_a);
          if ( v47 )
            DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v51);
          v59 = SignalSynchronizationObjectFromCpu(&v52, *((struct DXGPROCESS **)a1 + 6), v41);
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v51);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v57);
        COREACCESS::~COREACCESS((COREACCESS *)v56);
        if ( v49 && v50 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v49 + 104));
          KeLeaveCriticalRegion();
        }
        v43 = v58;
        if ( !v58 )
        {
LABEL_69:
          if ( v59 < 0 )
          {
LABEL_70:
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
          }
LABEL_72:
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v59, 4u);
          v3 = 1;
          goto LABEL_73;
        }
      }
      else
      {
        v42 = WdLogNewEntry5_WdError(v40);
        *(_QWORD *)(v42 + 24) = v38;
        *(_QWORD *)(v42 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v42);
        v43 = v58;
        v59 = -1073741811;
        if ( !v58 )
          goto LABEL_70;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
    }
    else
    {
      v21 = *((_QWORD *)a1 + 6);
      if ( !v21 )
      {
        v22 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v22 + 24) = PsGetCurrentProcess(v24, v23);
        v25 = v22;
LABEL_29:
        WdLogEvent5_WdError(v25);
        v59 = -1073741811;
        goto LABEL_70;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v53,
        *((struct _KTHREAD ***)a1 + 6));
      v27 = *v19;
      v28 = *(_DWORD *)(v21 + 248);
      v29 = (*v19 >> 6) & 0xFFFFFF;
      if ( v29 >= v28 )
      {
LABEL_41:
        v35 = WdLogNewEntry5_WdError(v26);
        *(_QWORD *)(v35 + 24) = *v19;
        WdLogEvent5_WdError(v35);
        v59 = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v53);
        goto LABEL_69;
      }
      v61 = *(struct DXGDEVICE **)(v21 + 232);
      v30 = *((_DWORD *)v61 + 4 * v29 + 2);
      v26 = (v27 >> 25) & 0x60;
      if ( ((v27 >> 25) & 0x60) != (*((_BYTE *)v61 + 16 * v29 + 8) & 0x60)
        || (v30 & 0x2000) != 0
        || (v30 & 0x1F) != 7
        || !*((_QWORD *)v61 + 2 * v29) )
      {
        if ( v29 >= v28 )
          goto LABEL_41;
        v31 = v29;
        v32 = *(_QWORD *)(v21 + 232);
        v26 = *(unsigned int *)(v32 + 16LL * (unsigned int)v31 + 8);
        if ( ((v27 >> 25) & 0x60) != (*(_BYTE *)(v32 + 16LL * (unsigned int)v31 + 8) & 0x60)
          || (v26 & 0x2000) != 0
          || (v26 & 0x1F) == 0 )
        {
          goto LABEL_41;
        }
        v33 = 2 * v31;
        v26 &= 0x1Fu;
        if ( (_BYTE)v26 != 15 )
        {
          v34 = WdLogNewEntry5_WdError(v26);
          *(_QWORD *)(v34 + 24) = 316LL;
          WdLogEvent5_WdError(v34);
          goto LABEL_41;
        }
        if ( !*(_QWORD *)(v32 + 8 * v33) )
          goto LABEL_41;
        LOBYTE(v58) = 1;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v53);
      if ( (_BYTE)v58 )
      {
        if ( v20 )
        {
          v59 = SubmitSignalSyncObjectsToHwQueue(
                  v6[6],
                  v6 + 14,
                  (struct _D3DDDICB_SIGNALFLAGS)v6[7],
                  v6[8],
                  v19,
                  v20,
                  *((struct DXGPROCESS **)a1 + 6),
                  0,
                  0);
          goto LABEL_69;
        }
        v37 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v37 + 24) = 3064LL;
        goto LABEL_51;
      }
      v59 = SignalSynchronizationObjectInternal(
              v6[6],
              v6 + 14,
              (struct _D3DDDICB_SIGNALFLAGS)v6[7],
              v6[8],
              v19,
              v20,
              *((_QWORD *)v6 + 5),
              &v60,
              *((struct DXGPROCESS **)a1 + 6),
              0,
              0);
    }
    v8 = v60;
    goto LABEL_69;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 2923LL;
  WdLogEvent5_WdError(v4);
LABEL_73:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
  return v3;
}
