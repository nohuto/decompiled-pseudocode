/*
 * XREFs of ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@@@YAPEAUDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C92C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@@@YAPEAUDXGKVMB_COMMAND_UPDATEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkLock @ 0x1C00E0860 (DxgkLock.c)
 *     DxgkLock2 @ 0x1C0104A40 (DxgkLock2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ecx
  void *pData; // rax
  __int64 v11; // rdx
  const GUID *v12; // r8
  struct VMBPACKETCOMPLETION__ *v13; // rcx
  _DWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  void *v16; // [rsp+28h] [rbp-58h]
  _BYTE v17[24]; // [rsp+30h] [rbp-50h] BYREF
  struct _D3DKMT_LOCK v18; // [rsp+48h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v17,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY>((__int64)a1);
    v8 = v7;
    if ( v7 )
    {
      v15[1] = 0;
      if ( *(_BYTE *)(v7 + 48) )
      {
        memset(&v18, 0, sizeof(v18));
        v18.hAllocation = *(_DWORD *)(v8 + 28);
        v18.hDevice = *(_DWORD *)(v8 + 24);
        v18.Flags.Value = *(_DWORD *)(v8 + 52);
        v18.PrivateDriverData = *(_DWORD *)(v8 + 56);
        v9 = DxgkLock(&v18, v11, v12);
        pData = v18.pData;
      }
      else
      {
        v9 = DxgkLock2(v7 + 24);
        pData = *(void **)(v8 + 40);
      }
      v15[0] = v9;
      v13 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v16 = pData;
      VmBusCompletePacket(v13, v15, 0x10u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 1327LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v5;
}
