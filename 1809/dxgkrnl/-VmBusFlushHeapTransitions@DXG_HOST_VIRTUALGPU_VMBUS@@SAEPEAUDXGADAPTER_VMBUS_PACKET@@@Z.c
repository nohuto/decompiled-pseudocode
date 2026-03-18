/*
 * XREFs of ?VmBusFlushHeapTransitions@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EF910
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushHeapTransitions(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rdi
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  char v11; // [rsp+30h] [rbp-28h]
  _BYTE v12[32]; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+60h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v12,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = *((_QWORD *)a1 + 5);
  if ( *(_BYTE *)(v3 + 157) )
  {
    v13 = 0;
    v6 = *(_QWORD *)(v3 + 16);
    v10 = v6;
    v11 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
    v5 = 1;
    if ( *(_DWORD *)(v6 + 176) == 1 )
    {
      v7 = *(_QWORD *)(v6 + 2528);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v7 + 544) + 8LL) + 1088LL))(*(_QWORD *)(v7 + 552));
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v13, 4u);
    if ( v11 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 3955LL;
    WdLogEvent5_WdError(v4);
    v5 = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v5;
}
