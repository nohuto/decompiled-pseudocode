/*
 * XREFs of ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EAA20
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0011C28 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00120CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00364CC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223C84 (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  struct _KTHREAD **Current; // rax
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // r14
  __int64 v14; // rax
  struct _KTHREAD **v15; // rax
  __int64 v16; // rcx
  struct DXGDEVICE *v17; // r15
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  struct tagRECT v24; // xmm1
  unsigned int v25; // edx
  int v26; // eax
  char *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v31; // [rsp+38h] [rbp-C8h]
  _BYTE v32[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v33[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v34[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  char v36; // [rsp+80h] [rbp-80h]
  struct tagRECT v37; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v38; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v39[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v40[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v41[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v42[104]; // [rsp+F8h] [rbp-8h] BYREF
  int v43; // [rsp+170h] [rbp+70h] BYREF
  char v44; // [rsp+178h] [rbp+78h] BYREF
  struct DXGDEVICE *v45; // [rsp+180h] [rbp+80h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v39,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    if ( !v5 )
      goto LABEL_26;
    v6 = *((_QWORD *)a1 + 5);
    v43 = 0;
    v7 = *(_QWORD *)(v6 + 16);
    v8 = 16LL * *(unsigned int *)(v5 + 72);
    if ( v8 > 0xFFFFFFFF
      || (v9 = v8 + 80, (unsigned int)(16 * *(_DWORD *)(v5 + 72)) >= 0xFFFFFFB0)
      || (v10 = v9 + *(_DWORD *)(v5 + 76), v10 < v9)
      || v10 > *((_DWORD *)a1 + 22) )
    {
      v43 = -1073741811;
      goto LABEL_25;
    }
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, *(_DWORD *)(v5 + 24), Current, &v45);
    v13 = v45;
    if ( !v45 )
    {
      v14 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v14 + 24) = *(unsigned int *)(v5 + 24);
      WdLogEvent5_WdError(v14);
      v43 = -1073741811;
LABEL_10:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v44);
LABEL_25:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v43, 4u);
      v3 = 1;
      goto LABEL_26;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33, v45);
    v15 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v32, *(_DWORD *)(v5 + 28), v15, &v45, 0);
    v17 = v45;
    if ( v45 )
    {
      LOBYTE(v19) = EvaluateCurrentState((int **)&g_Feature_543987001_58279190_FeatureDescriptorDetails);
      if ( !v19 || *((struct DXGDEVICE **)v17 + 2) == v13 )
      {
        DXGPUSHLOCK::AcquireExclusive((struct DXGDEVICE *)((char *)v17 + 440));
        v35 = v7;
        v36 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v13, 0, v21, 0);
        v43 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40);
        if ( v43 >= 0 )
        {
          v23 = *(_DWORD *)(v5 + 36);
          v24 = *(struct tagRECT *)(v5 + 40);
          v25 = *(_DWORD *)(v5 + 32);
          v31 = *(_DWORD *)(v5 + 72);
          v37 = *(struct tagRECT *)(v5 + 56);
          v38 = v24;
          v26 = DXGCONTEXT::BltFromVm(
                  v17,
                  v25,
                  v23,
                  v22,
                  &v45,
                  &v38,
                  &v37,
                  v31,
                  (const struct tagRECT *)(v5 + 80),
                  (struct COREDEVICEACCESS *)v40);
          v27 = (char *)v45 + 440;
          v43 = v26;
          *((_QWORD *)v45 + 56) = 0LL;
          ExReleasePushLockExclusiveEx(v27, 0LL);
          KeLeaveCriticalRegion();
          if ( v43 < 0 )
          {
            v29 = WdLogNewEntry5_WdError(v28);
            *(_QWORD *)(v29 + 24) = v43;
            WdLogEvent5_WdError(v29);
          }
        }
        else
        {
          *((_QWORD *)v17 + 56) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v17 + 440, 0LL);
          KeLeaveCriticalRegion();
        }
        COREACCESS::~COREACCESS((COREACCESS *)v42);
        COREACCESS::~COREACCESS((COREACCESS *)v41);
        if ( v36 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
        goto LABEL_14;
      }
      v18 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v18 + 24) = v17;
      *(_QWORD *)(v18 + 32) = v13;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v18 + 24) = *(unsigned int *)(v5 + 24);
    }
    WdLogEvent5_WdError(v18);
    v43 = -1073741811;
LABEL_14:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v32);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
    goto LABEL_10;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 1388LL;
  WdLogEvent5_WdError(v4);
LABEL_26:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
  return v3;
}
