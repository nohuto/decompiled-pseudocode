/*
 * XREFs of ?VmBusQueryEtwSession@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F21D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0j @ 0x1C003761C (McTemplateK0j.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusQueryEtwSession(struct VMBPACKETCOMPLETION__ **a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  const GUID *v4; // r8
  __int64 v5; // rbx
  __int64 v7; // rax
  UUID v8; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&v8.Data1 = 0LL;
  *(_QWORD *)v8.Data4 = 0LL;
  v2 = ExUuidCreate(&v8);
  v5 = v2;
  if ( v2 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v7 + 24) = v5;
    WdLogEvent5_WdError(v7);
    return 0;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0j(v3, &EventVGPUHostGenerateSessionId, v4, (__int64)&v8);
    VmBusCompletePacket(a1[9], &v8, 0x10u);
    return 1;
  }
}
