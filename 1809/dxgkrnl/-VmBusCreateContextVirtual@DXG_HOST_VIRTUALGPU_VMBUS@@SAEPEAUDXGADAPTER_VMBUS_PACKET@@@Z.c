/*
 * XREFs of ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ECB20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00364F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00E9B5C (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateContextVirtual(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // r15d
  const GUID *v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  _BYTE v16[24]; // [rsp+20h] [rbp-40h] BYREF
  _D3DKMT_CREATECONTEXTVIRTUAL v17; // [rsp+38h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v16,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 748LL;
LABEL_11:
    v9 = v4;
    goto LABEL_12;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(unsigned int *)(v5 + 48);
    v8 = *((unsigned int *)a1 + 22) - 55LL;
    if ( v8 < v7 )
    {
      v9 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v9 + 24) = *((unsigned int *)a1 + 22);
      *(_QWORD *)(v9 + 32) = 754LL;
LABEL_12:
      WdLogEvent5_WdError(v9);
      goto LABEL_13;
    }
    v10 = v7 + 55;
    memset(&v17, 0, sizeof(v17));
    v17.Flags.Value = *(_DWORD *)(v6 + 40);
    v17.hDevice = *(_DWORD *)(v6 + 28);
    v17.ClientHint = *(_DWORD *)(v6 + 44);
    v17.NodeOrdinal = *(_DWORD *)(v6 + 32);
    v17.EngineAffinity = *(_DWORD *)(v6 + 36);
    if ( (_DWORD)v7 )
    {
      v17.PrivateDriverDataSize = v7;
      v17.pPrivateDriverData = (void *)(v6 + 52);
    }
    *(_DWORD *)(v6 + 24) = 0;
    v12 = DxgkCreateContextVirtualImpl(&v17, 0, v11);
    v14 = v12;
    if ( v12 < 0 )
    {
      v4 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v4 + 24) = v14;
      *(_QWORD *)(v4 + 32) = 781LL;
      goto LABEL_11;
    }
    *(_DWORD *)(v6 + 24) = v17.hContext;
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), (void *)v6, v10);
    v3 = 1;
  }
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v3;
}
