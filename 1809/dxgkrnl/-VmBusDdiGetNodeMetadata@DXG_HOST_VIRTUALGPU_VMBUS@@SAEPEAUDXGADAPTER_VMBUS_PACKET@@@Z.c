/*
 * XREFs of ?VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EDD30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetNodeMetadata(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned __int16 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE v18[32]; // [rsp+20h] [rbp-89h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v20[32]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v21[40]; // [rsp+68h] [rbp-41h] BYREF
  _OWORD v22[5]; // [rsp+90h] [rbp-19h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v18,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = *((_QWORD *)a1 + 5);
  v4 = 0;
  if ( *(_BYTE *)(v3 + 157) )
  {
    v6 = *((_QWORD *)a1 + 10);
    memset(v22, 0, sizeof(v22));
    v7 = *(_QWORD *)(v3 + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, (struct DXGADAPTER *const)v7, 0LL);
    HIDWORD(v22[4]) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19);
    if ( v22[4] >= 0 )
    {
      v9 = *(_DWORD *)(v6 + 24);
      v10 = (unsigned __int16)v9;
      v11 = HIWORD(v9);
      if ( *(int *)(v7 + 2160) < 0x2000 )
        v12 = 1;
      else
        v12 = *(_DWORD *)(v7 + 256);
      if ( (unsigned int)v11 < v12 )
      {
        v14 = (unsigned __int16 *)(*(_QWORD *)(v7 + 2416) + 352LL * (unsigned int)v11);
        if ( (unsigned int)v10 < *v14 )
        {
          v15 = *((_QWORD *)v14 + 3);
          v16 = 74 * v10;
          v22[0] = *(_OWORD *)(v16 + v15);
          v22[1] = *(_OWORD *)(v16 + v15 + 16);
          v22[2] = *(_OWORD *)(v16 + v15 + 32);
          v22[3] = *(_OWORD *)(v16 + v15 + 48);
          *(_QWORD *)&v22[4] = *(_QWORD *)(v16 + v15 + 64);
          WORD4(v22[4]) = *(_WORD *)(v16 + v15 + 72);
          goto LABEL_13;
        }
        v13 = WdLogNewEntry5_WdWarning(v14, v10, v8);
        *(_QWORD *)(v13 + 24) = 3648LL;
      }
      else
      {
        v13 = WdLogNewEntry5_WdWarning(v11, v10, v8);
        *(_QWORD *)(v13 + 24) = 3640LL;
      }
      WdLogEvent5_WdWarning(v13);
      HIDWORD(v22[4]) = -1073741811;
    }
LABEL_13:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v22, 0x50u);
    v4 = 1;
    COREACCESS::~COREACCESS((COREACCESS *)v21);
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    goto LABEL_14;
  }
  v5 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v5 + 24) = 3627LL;
  WdLogEvent5_WdError(v5);
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v4;
}
