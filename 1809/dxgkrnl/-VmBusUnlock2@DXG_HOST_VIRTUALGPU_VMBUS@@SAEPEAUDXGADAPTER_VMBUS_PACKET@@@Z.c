/*
 * XREFs of ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUnlock2 @ 0x1C0106F60 (DxgkUnlock2.c)
 *     DxgkUnlock @ 0x1C0124840 (DxgkUnlock.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUnlock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  const GUID *v6; // r8
  int v7; // eax
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  _DWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+60h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v12,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v5 )
    {
      if ( *(_BYTE *)(v5 + 32) )
      {
        v10[0] = *(_DWORD *)(v5 + 24);
        v11 = v5 + 28;
        v10[1] = 1;
        v7 = DxgkUnlock((__int64)v10, 0LL, v6);
      }
      else
      {
        v7 = DxgkUnlock2((struct _D3DKMT_UNLOCK2 *)(v5 + 24));
      }
      v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v13 = v7;
      VmBusCompletePacket(v8, &v13, 4u);
      v3 = 1;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 1363LL;
    WdLogEvent5_WdError(v4);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v3;
}
