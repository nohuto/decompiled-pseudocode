/*
 * XREFs of ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229260
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C954 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00F66B0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C02171C8 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C02197CC (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalFenceNtSharedByRef(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int **v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  _BYTE v18[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[32]; // [rsp+38h] [rbp-20h] BYREF
  int v20; // [rsp+60h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v19,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( !v7 )
      goto LABEL_12;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, *((struct _KTHREAD ***)a1 + 7));
    v9 = *(unsigned int *)(v7 + 24);
    v10 = *((_QWORD *)a1 + 7);
    v11 = (*(_DWORD *)(v7 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v11 < *(_DWORD *)(v10 + 224) )
    {
      v8 = *(_QWORD *)(v10 + 208);
      v9 = ((unsigned int)v9 >> 25) & 0x60;
      v10 = *(unsigned int *)(v8 + 16 * v11 + 8);
      if ( (_BYTE)v9 == (*(_BYTE *)(v8 + 16 * v11 + 8) & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
      {
        v10 &= 0x1Fu;
        if ( (_BYTE)v10 == 13 )
        {
          v15 = *(unsigned int ***)(v8 + 16LL * (unsigned int)v11);
          if ( v15 && (*(_DWORD *)v15 == 11 || *(_DWORD *)v15 == 8) )
          {
            DXGSHAREDVMOBJECT::AddReference((DXGSHAREDVMOBJECT *)v15, v9);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
            v20 = DxgkSignalSynchronizationObjectFromGpuByReference(v15[1], *(_QWORD *)(v7 + 32), *(_DWORD *)(v7 + 28));
            DXGSHAREDVMOBJECT::ReleaseReference((int *)v15, v16, v17);
            goto LABEL_11;
          }
        }
        else
        {
          v12 = WdLogNewEntry5_WdError(v10, v9, v8);
          *(_QWORD *)(v12 + 24) = 267LL;
          WdLogEvent5_WdError(v12);
        }
      }
    }
    v13 = WdLogNewEntry5_WdError(v10, v9, v8);
    *(_QWORD *)(v13 + 24) = *(unsigned int *)(v7 + 24);
    WdLogEvent5_WdError(v13);
    v20 = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
LABEL_11:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v20, 4u);
    v5 = 1;
    goto LABEL_12;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 3063LL;
  WdLogEvent5_WdError(v6);
LABEL_12:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v5;
}
