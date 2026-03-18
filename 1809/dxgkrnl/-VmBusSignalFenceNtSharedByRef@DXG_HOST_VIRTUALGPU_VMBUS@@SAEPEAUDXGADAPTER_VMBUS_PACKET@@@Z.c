/*
 * XREFs of ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F9080
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C011CFBC (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E7A58 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E9E9C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalFenceNtSharedByRef(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rbp
  struct _KTHREAD **v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int **v13; // rdi
  _BYTE v14[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v15,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( !v5 )
      goto LABEL_12;
    v6 = (struct _KTHREAD **)*((_QWORD *)a1 + 7);
    v16 = 0;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v14, v6);
    v7 = *((_QWORD *)a1 + 7);
    v8 = (*(_DWORD *)(v5 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v8 < *(_DWORD *)(v7 + 248) )
    {
      v9 = *(_QWORD *)(v7 + 232);
      v7 = *(unsigned int *)(v9 + 16 * v8 + 8);
      if ( ((*(_DWORD *)(v5 + 24) >> 25) & 0x60) == (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60)
        && (v7 & 0x2000) == 0
        && (v7 & 0x1F) != 0 )
      {
        v7 &= 0x1Fu;
        if ( (_BYTE)v7 == 13 )
        {
          v13 = *(unsigned int ***)(v9 + 16LL * (unsigned int)v8);
          if ( v13 && (*(_DWORD *)v13 == 11 || *(_DWORD *)v13 == 8) )
          {
            DXGSHAREDVMOBJECT::AddReference((DXGSHAREDVMOBJECT *)v13);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
            v16 = DxgkSignalSynchronizationObjectFromGpuByReference(v13[1], *(_QWORD *)(v5 + 32), *(_DWORD *)(v5 + 28));
            DXGSHAREDVMOBJECT::ReleaseReference((int *)v13);
            goto LABEL_11;
          }
        }
        else
        {
          v10 = WdLogNewEntry5_WdError(v7);
          *(_QWORD *)(v10 + 24) = 316LL;
          WdLogEvent5_WdError(v10);
        }
      }
    }
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = *(unsigned int *)(v5 + 24);
    WdLogEvent5_WdError(v11);
    v16 = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
LABEL_11:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v16, 4u);
    v3 = 1;
    goto LABEL_12;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 3116LL;
  WdLogEvent5_WdError(v4);
LABEL_12:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v3;
}
