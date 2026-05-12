/*
 * XREFs of RaidCoalescingCallback @ 0x1C003A550
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0016D38 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0qqqqq @ 0x1C0036B54 (McTemplateK0qqqqq.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0037F2C (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0037F4C (RaidAdapterGetSystemPowerResumeLatency.c)
 */

__int64 __fastcall RaidCoalescingCallback(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int SystemPowerHint; // eax
  char SystemPowerResumeLatency; // al
  __int64 v8; // rdx
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  __int64 v10; // r8
  char v11; // r9
  char v12; // r10
  char v13; // al
  __int64 v14; // rdx
  struct _MCGEN_TRACE_CONTEXT *v15; // rcx
  __int64 v16; // r8
  char v17; // r10
  unsigned __int64 v18; // rcx
  int v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+48h] [rbp-20h]

  result = RaidIsAdapterControlSupported(a3, 12);
  if ( (_DWORD)result && *(_QWORD *)(a3 + 5160) && *(_QWORD *)(a3 + 5176) )
  {
    SystemPowerHint = RaidAdapterGetSystemPowerHint(a3);
    result = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
    if ( a1 == 1 )
    {
      *(_BYTE *)(a3 + 109) |= 1u;
      v19 = RaidAdapterGetSystemPowerHint(a3);
      SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v19);
      if ( StorEtwLoggingEnabled )
      {
        if ( (byte_1C00617E2 & 0x10) != 0 )
          McTemplateK0qqqqq(v9, v8, v10, *(_DWORD *)(a3 + 56), v10, v12, v11, SystemPowerResumeLatency);
      }
      RaCallMiniportAdapterControl(a3 + 312);
      result = MEMORY[0xFFFFF78000000008];
      *(_QWORD *)(a3 + 5416) = MEMORY[0xFFFFF78000000008];
    }
    else if ( a1 == 2 )
    {
      *(_BYTE *)(a3 + 109) &= ~1u;
      v20 = RaidAdapterGetSystemPowerHint(a3);
      v13 = RaidAdapterGetSystemPowerResumeLatency(v20);
      if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x10) != 0 )
        McTemplateK0qqqqq(v15, v14, v16, *(_DWORD *)(a3 + 56), v16, v17, v14, v13);
      result = RaCallMiniportAdapterControl(a3 + 312);
      if ( *(_QWORD *)(a3 + 5416) )
      {
        v18 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a3 + 5416);
        result = 0x346DC5D63886594BLL * v18;
        *(_QWORD *)(a3 + 5424) += v18 / 0x2710;
        *(_QWORD *)(a3 + 5416) = 0LL;
      }
    }
  }
  return result;
}
