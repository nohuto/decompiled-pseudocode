/*
 * XREFs of ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021A360
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000D348 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000D3B8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C8B4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C025844C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct _KTHREAD **Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // rdi
  __int64 v18; // rax
  struct DXGDEVICE *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KTHREAD **v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGCONTEXT *v26; // r13
  __int64 v27; // rax
  __int64 v28; // r9
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  struct tagRECT v31; // xmm1
  unsigned int v32; // edx
  int v33; // eax
  char *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  unsigned int v40; // [rsp+40h] [rbp-C8h]
  __int64 v41; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v42; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGDEVICE *v43; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGCONTEXT *v44; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v45[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v46[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h]
  char v48; // [rsp+98h] [rbp-70h]
  _BYTE v49[24]; // [rsp+A0h] [rbp-68h] BYREF
  struct tagRECT v50; // [rsp+B8h] [rbp-50h] BYREF
  struct tagRECT v51; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v52[32]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v53[8]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v54[64]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v55[88]; // [rsp+140h] [rbp+38h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v52,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    v8 = v7;
    if ( !v7 )
      goto LABEL_28;
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
    v10 = 16LL * *(unsigned int *)(v7 + 72);
    if ( v10 > 0xFFFFFFFF
      || (v11 = (unsigned int)(v10 + 80), (unsigned int)v10 >= 0xFFFFFFB0)
      || (v12 = (unsigned int)(v11 + *(_DWORD *)(v8 + 76)), (unsigned int)v12 < (unsigned int)v11)
      || (unsigned int)v12 > *((_DWORD *)a1 + 22) )
    {
      LODWORD(v41) = -1073741811;
    }
    else
    {
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v11, v12);
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, *(_DWORD *)(v8 + 24), Current, &v43);
      v17 = v43;
      if ( v43 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v43);
        v22 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v21, v20);
        DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v49, *(_DWORD *)(v8 + 28), v22, &v44, 0);
        v26 = v44;
        if ( v44 )
        {
          DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v44 + 456));
          v47 = v9;
          v48 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v17, 0, v28, 0);
          LODWORD(v41) = COREDEVICEACCESS::AcquireShared((__int64)v53, 0xFFFFFFFF, 0LL);
          if ( (int)v41 >= 0 )
          {
            v30 = *(_DWORD *)(v8 + 36);
            v31 = *(struct tagRECT *)(v8 + 40);
            v32 = *(_DWORD *)(v8 + 32);
            v40 = *(_DWORD *)(v8 + 72);
            v50 = *(struct tagRECT *)(v8 + 56);
            v51 = v31;
            v33 = DXGCONTEXT::BltFromVm(
                    v26,
                    v32,
                    v30,
                    v29,
                    &v44,
                    &v51,
                    &v50,
                    v40,
                    (const struct tagRECT *)(v8 + 80),
                    (struct COREDEVICEACCESS *)v53);
            v34 = (char *)v44 + 456;
            LODWORD(v41) = v33;
            *((_QWORD *)v44 + 58) = 0LL;
            ExReleasePushLockExclusiveEx(v34, 0LL);
            KeLeaveCriticalRegion();
            if ( (int)v41 < 0 )
            {
              v38 = WdLogNewEntry5_WdError(v36, v35, v37);
              *(_QWORD *)(v38 + 24) = (int)v41;
              WdLogEvent5_WdError(v38);
            }
          }
          else
          {
            *((_QWORD *)v26 + 58) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v26 + 456, 0LL);
            KeLeaveCriticalRegion();
          }
          COREACCESS::~COREACCESS((COREACCESS *)v55);
          COREACCESS::~COREACCESS((COREACCESS *)v54);
          if ( v48 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v49);
          if ( v45[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
          v19 = v42;
          if ( !v42 )
            goto LABEL_27;
          goto LABEL_11;
        }
        v27 = WdLogNewEntry5_WdError(v24, v23, v25);
        *(_QWORD *)(v27 + 24) = *(unsigned int *)(v8 + 24);
        WdLogEvent5_WdError(v27);
        LODWORD(v41) = -1073741811;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v49);
        if ( v45[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v15, v14, v16);
        *(_QWORD *)(v18 + 24) = *(unsigned int *)(v8 + 24);
        WdLogEvent5_WdError(v18);
        LODWORD(v41) = -1073741811;
      }
      v19 = v42;
      if ( v42 )
      {
LABEL_11:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
      }
    }
LABEL_27:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v41, 4u);
    v5 = 1;
    goto LABEL_28;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 1383LL;
  WdLogEvent5_WdError(v6);
LABEL_28:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
  return v5;
}
