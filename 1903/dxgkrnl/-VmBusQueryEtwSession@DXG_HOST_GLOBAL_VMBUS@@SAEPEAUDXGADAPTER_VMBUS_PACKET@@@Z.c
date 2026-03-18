/*
 * XREFs of ?VmBusQueryEtwSession@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221EB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0j @ 0x1C003DA54 (McTemplateK0j.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusQueryEtwSession(struct VMBPACKETCOMPLETION__ **a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 v6; // rbx
  __int64 v8; // rax
  UUID v9; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&v9.Data1 = 0LL;
  *(_QWORD *)v9.Data4 = 0LL;
  v2 = ExUuidCreate(&v9);
  v6 = v2;
  if ( v2 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v4, v3, v5);
    *(_QWORD *)(v8 + 24) = v6;
    WdLogEvent5_WdError(v8);
    return 0;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0j(v4, &EventVGPUHostGenerateSessionId, v5, (__int64)&v9);
    VmBusCompletePacket(a1[9], &v9, 0x10u);
    return 1;
  }
}
