/*
 * XREFs of ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EFE30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C0229F64 (-IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetInternalAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // al
  unsigned __int8 IsVailEnabled; // al
  struct VMBPACKETCOMPLETION__ *v10; // rcx
  _BYTE v12[24]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v12,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = *((_QWORD *)a1 + 5);
  v4 = 0;
  if ( *(_BYTE *)(v3 + 157) )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v6 = *(_QWORD *)(v3 + 16);
    LODWORD(v13) = *(_DWORD *)(v6 + 308);
    LODWORD(v14) = *(_DWORD *)(v6 + 1712);
    v15 = *(_QWORD *)(v6 + 276);
    HIDWORD(v14) = *(_BYTE *)(v3 + 145) & 1;
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 7) + 456LL);
    v8 = *(_BYTE *)(v7 + 250);
    *(_BYTE *)(v7 + 250) = 0;
    HIDWORD(v14) ^= (BYTE4(v14) ^ (unsigned __int8)(2 * v8)) & 2;
    HIDWORD(v13) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 2484LL);
    IsVailEnabled = DXGVIRTUALMACHINE::IsVailEnabled(*(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 7) + 456LL));
    v10 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    HIDWORD(v14) ^= (BYTE4(v14) ^ (unsigned __int8)(4 * IsVailEnabled)) & 4;
    VmBusCompletePacket(v10, &v13, 0x18u);
    v4 = 1;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v5 + 24) = 3976LL;
    WdLogEvent5_WdError(v5);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v4;
}
