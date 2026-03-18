/*
 * XREFs of ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021CF60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C8DC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C011FE74 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreatePagingQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  const GUID *v8; // r8
  _DWORD *v9; // rdi
  int PagingQueueInternal; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbp
  struct VMBPACKETCOMPLETION__ *v15; // rcx
  _BYTE v17[24]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]
  __int64 v20; // [rsp+48h] [rbp-20h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v17,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 3341LL;
LABEL_7:
    WdLogEvent5_WdError(v6);
    goto LABEL_8;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v9 = (_DWORD *)v7;
  if ( v7 )
  {
    PagingQueueInternal = DxgkCreatePagingQueueInternal((struct _D3DKMT_CREATEPAGINGQUEUE *)(v7 + 24), 0, v8);
    v14 = PagingQueueInternal;
    if ( PagingQueueInternal < 0 )
    {
      v6 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v6 + 24) = v14;
      goto LABEL_7;
    }
    v15 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v18[0] = v9[8];
    v18[1] = v9[9];
    v20 = (unsigned int)v9[10];
    v19 = *((_QWORD *)v9 + 5);
    VmBusCompletePacket(v15, v18, 0x18u);
    v5 = 1;
  }
LABEL_8:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v5;
}
