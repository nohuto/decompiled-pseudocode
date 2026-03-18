/*
 * XREFs of ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022AA40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CC44 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGP.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C020A220 (DxgkUpdateGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUpdateGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v11; // rdi
  int v12; // eax
  int updated; // eax
  __int64 v14; // rax
  struct VMBPACKETCOMPLETION__ *v15; // rcx
  _BYTE v17[24]; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v18[4]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+68h] [rbp-8h]
  int v23; // [rsp+6Ch] [rbp-4h]
  int v24; // [rsp+80h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v17,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS>((__int64)a1);
    v11 = v7;
    if ( v7 )
    {
      v23 = 0;
      v20 = 0LL;
      v21 = *(_QWORD *)(v7 + 24);
      v22 = *(_DWORD *)(v7 + 48);
      v18[1] = *(_DWORD *)(v7 + 36);
      v18[0] = *(_DWORD *)(v7 + 32);
      v18[2] = *(_DWORD *)(v7 + 40);
      v18[3] = *(_DWORD *)(v7 + 44);
      v19 = v7 + 56;
      v12 = *(_DWORD *)(v7 + 44);
      if ( v12
        && (v9 = (unsigned int)(v12 - 1), v8 = ((unsigned __int64)*((unsigned int *)a1 + 22) - 120) >> 6, v8 >= v9) )
      {
        updated = DxgkUpdateGpuVirtualAddress((__int64)v18, v8, v10);
      }
      else
      {
        v14 = WdLogNewEntry5_WdError(v9, v8, v10);
        *(_QWORD *)(v14 + 24) = *(unsigned int *)(v11 + 44);
        WdLogEvent5_WdError(v14);
        updated = -1073741811;
      }
      v15 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v24 = updated;
      VmBusCompletePacket(v15, &v24, 4u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 4185LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v5;
}
