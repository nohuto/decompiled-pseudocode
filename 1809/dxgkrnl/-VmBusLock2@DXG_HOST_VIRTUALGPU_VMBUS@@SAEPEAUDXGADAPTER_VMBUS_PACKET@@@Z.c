/*
 * XREFs of ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F03B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATION@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0036544 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATIO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkLock @ 0x1C00FE020 (DxgkLock.c)
 *     DxgkLock2 @ 0x1C0102FB0 (DxgkLock2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // ecx
  void *pData; // rax
  __int64 v8; // rdx
  const GUID *v9; // r8
  struct VMBPACKETCOMPLETION__ *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-60h] BYREF
  void *v13; // [rsp+28h] [rbp-58h]
  _BYTE v14[24]; // [rsp+30h] [rbp-50h] BYREF
  struct _D3DKMT_LOCK v15; // [rsp+48h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v14,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEALLOCATION>((__int64)a1);
    if ( v5 )
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( *(_BYTE *)(v5 + 48) )
      {
        memset(&v15, 0, sizeof(v15));
        v15.hAllocation = *(_DWORD *)(v5 + 28);
        v15.hDevice = *(_DWORD *)(v5 + 24);
        v15.Flags.Value = *(_DWORD *)(v5 + 52);
        v15.PrivateDriverData = *(_DWORD *)(v5 + 56);
        v6 = DxgkLock(&v15, v8, v9);
        pData = v15.pData;
      }
      else
      {
        v6 = DxgkLock2(v5 + 24);
        pData = *(void **)(v5 + 40);
      }
      LODWORD(v12) = v6;
      v10 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v13 = pData;
      VmBusCompletePacket(v10, &v12, 0x10u);
      v3 = 1;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 1332LL;
    WdLogEvent5_WdError(v4);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v3;
}
