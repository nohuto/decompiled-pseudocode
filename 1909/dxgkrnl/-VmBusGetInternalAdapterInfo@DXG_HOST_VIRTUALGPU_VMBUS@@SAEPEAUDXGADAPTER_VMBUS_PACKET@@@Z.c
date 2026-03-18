/*
 * XREFs of ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021FF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C025EFA4 (-IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetInternalAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // al
  unsigned __int8 IsVailEnabled; // al
  struct VMBPACKETCOMPLETION__ *v11; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+48h] [rbp-18h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v13,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  if ( *(_BYTE *)(v4 + 157) )
  {
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v7 = *(_QWORD *)(v4 + 16);
    LODWORD(v14) = *(_DWORD *)(v7 + 308);
    LODWORD(v15) = *(_DWORD *)(v7 + 1728);
    v16 = *(_QWORD *)(v7 + 276);
    HIDWORD(v15) = *(_BYTE *)(v4 + 145) & 1;
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 7) + 432LL);
    v9 = *(_BYTE *)(v8 + 250);
    *(_BYTE *)(v8 + 250) = 0;
    HIDWORD(v15) ^= (BYTE4(v15) ^ (unsigned __int8)(2 * v9)) & 2;
    HIDWORD(v14) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 2516LL);
    IsVailEnabled = DXGVIRTUALMACHINE::IsVailEnabled(*(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 7) + 432LL));
    v11 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    HIDWORD(v15) ^= (BYTE4(v15) ^ (unsigned __int8)(4 * IsVailEnabled)) & 4;
    VmBusCompletePacket(v11, &v14, 0x18u);
    v5 = 1;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v2, v4, v3);
    *(_QWORD *)(v6 + 24) = 3921LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v5;
}
