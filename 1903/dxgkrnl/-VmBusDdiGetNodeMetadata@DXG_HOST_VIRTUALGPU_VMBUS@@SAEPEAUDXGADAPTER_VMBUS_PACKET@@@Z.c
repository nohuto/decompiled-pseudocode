/*
 * XREFs of ?VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D700
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetNodeMetadata(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rsi
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned __int16 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  _BYTE v21[32]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v22[5]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v24[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v25[72]; // [rsp+D8h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v21,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = *((_QWORD *)a1 + 5);
  v6 = 0;
  if ( *(_BYTE *)(v5 + 157) )
  {
    v8 = *((_QWORD *)a1 + 10);
    memset(v22, 0, sizeof(v22));
    v9 = *(_QWORD *)(v5 + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, (struct DXGADAPTER *const)v9, 0LL);
    HIDWORD(v22[4]) = COREADAPTERACCESS::AcquireShared((__int64)v23, 0xFFFFFFFFLL, v10);
    if ( v22[4] >= 0 )
    {
      v12 = *(_DWORD *)(v8 + 24);
      v13 = (unsigned __int16)v12;
      v14 = HIWORD(v12);
      if ( *(int *)(v9 + 2184) < 0x2000 )
        v15 = 1;
      else
        v15 = *(_DWORD *)(v9 + 256);
      if ( (unsigned int)v14 < v15 )
      {
        v17 = (unsigned __int16 *)(*(_QWORD *)(v9 + 2440) + 352LL * (unsigned int)v14);
        if ( (unsigned int)v13 < *v17 )
        {
          v18 = *((_QWORD *)v17 + 3);
          v19 = 74 * v13;
          v22[0] = *(_OWORD *)(v19 + v18);
          v22[1] = *(_OWORD *)(v19 + v18 + 16);
          v22[2] = *(_OWORD *)(v19 + v18 + 32);
          v22[3] = *(_OWORD *)(v19 + v18 + 48);
          *(_QWORD *)&v22[4] = *(_QWORD *)(v19 + v18 + 64);
          WORD4(v22[4]) = *(_WORD *)(v19 + v18 + 72);
          goto LABEL_13;
        }
        v16 = WdLogNewEntry5_WdWarning(v17, v13, v11);
        *(_QWORD *)(v16 + 24) = 3608LL;
      }
      else
      {
        v16 = WdLogNewEntry5_WdWarning(v14, v13, v11);
        *(_QWORD *)(v16 + 24) = 3600LL;
      }
      WdLogEvent5_WdWarning(v16);
      HIDWORD(v22[4]) = -1073741811;
    }
LABEL_13:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v22, 0x50u);
    v6 = 1;
    COREACCESS::~COREACCESS((COREACCESS *)v25);
    COREACCESS::~COREACCESS((COREACCESS *)v24);
    goto LABEL_14;
  }
  v7 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v7 + 24) = 3587LL;
  WdLogEvent5_WdError(v7);
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return v6;
}
