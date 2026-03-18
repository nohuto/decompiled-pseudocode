/*
 * XREFs of ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EF1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00F4BC8 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEvict(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  const GUID *v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  struct VMBPACKETCOMPLETION__ *v12; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-48h] BYREF
  _D3DKMT_EVICT v15; // [rsp+38h] [rbp-30h] BYREF
  UINT64 NumBytesToTrim; // [rsp+70h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v14,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 3866LL;
LABEL_10:
    WdLogEvent5_WdError(v4);
    goto LABEL_11;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(unsigned int *)(v5 + 32);
    if ( !(_DWORD)v7 || ((unsigned __int64)*((unsigned int *)a1 + 22) - 36) / v7 < 4 )
    {
      v4 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v4 + 24) = *((unsigned int *)a1 + 22);
      goto LABEL_10;
    }
    memset(&v15, 0, sizeof(v15));
    v15.Flags.Value = *(_DWORD *)(v6 + 28);
    v15.AllocationList = (const D3DKMT_HANDLE *)(v6 + 36);
    v15.NumAllocations = *(_DWORD *)(v6 + 32);
    v15.hDevice = *(_DWORD *)(v6 + 24);
    v9 = DxgkEvictInternal(&v15, 0, v8);
    v11 = v9;
    if ( v9 < 0 )
    {
      v4 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v4 + 24) = v11;
      goto LABEL_10;
    }
    v12 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    NumBytesToTrim = v15.NumBytesToTrim;
    VmBusCompletePacket(v12, &NumBytesToTrim, 8u);
    v3 = 1;
  }
LABEL_11:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v3;
}
