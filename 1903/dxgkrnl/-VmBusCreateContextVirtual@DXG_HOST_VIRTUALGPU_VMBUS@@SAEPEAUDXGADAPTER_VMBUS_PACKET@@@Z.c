/*
 * XREFs of ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C8DC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C0120394 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateContextVirtual(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  const GUID *v8; // r8
  _DWORD *v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // r15d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r14
  _BYTE v20[24]; // [rsp+20h] [rbp-40h] BYREF
  _D3DKMT_CREATECONTEXTVIRTUAL v21; // [rsp+38h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v20,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 749LL;
LABEL_11:
    v12 = v6;
    goto LABEL_12;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v9 = (_DWORD *)v7;
  if ( v7 )
  {
    v10 = *(unsigned int *)(v7 + 48);
    v11 = *((unsigned int *)a1 + 22) - 55LL;
    if ( v11 < v10 )
    {
      v12 = WdLogNewEntry5_WdError(v11, v10, v8);
      *(_QWORD *)(v12 + 24) = *((unsigned int *)a1 + 22);
      *(_QWORD *)(v12 + 32) = 755LL;
LABEL_12:
      WdLogEvent5_WdError(v12);
      goto LABEL_13;
    }
    v13 = v10 + 55;
    v21.Flags.Value = *(_DWORD *)(v7 + 40);
    v21.hDevice = *(_DWORD *)(v7 + 28);
    v21.ClientHint = *(_DWORD *)(v7 + 44);
    v21.NodeOrdinal = *(_DWORD *)(v7 + 32);
    v21.EngineAffinity = *(_DWORD *)(v7 + 36);
    v21.pPrivateDriverData = 0LL;
    v21.PrivateDriverDataSize = 0;
    *(_QWORD *)&v21.hContext = 0LL;
    if ( (_DWORD)v10 )
    {
      v21.PrivateDriverDataSize = v10;
      v21.pPrivateDriverData = (void *)(v7 + 52);
    }
    *(_DWORD *)(v7 + 24) = 0;
    v14 = DxgkCreateContextVirtualImpl(&v21, 0, v8);
    v18 = v14;
    if ( v14 < 0 )
    {
      v6 = WdLogNewEntry5_WdError(v16, v15, v17);
      *(_QWORD *)(v6 + 24) = v18;
      *(_QWORD *)(v6 + 32) = 782LL;
      goto LABEL_11;
    }
    v9[6] = v21.hContext;
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v9, v13);
    v5 = 1;
  }
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v5;
}
