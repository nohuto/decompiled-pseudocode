/*
 * XREFs of RaidCoalescingCallback @ 0x1C0037660
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015AF8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B64 (RaCallMiniportAdapterControl.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     McTemplateK0qqqqq @ 0x1C00337C4 (McTemplateK0qqqqq.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0034F04 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0034F24 (RaidAdapterGetSystemPowerResumeLatency.c)
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
  unsigned __int8 v13; // r11
  char v14; // al
  __int64 v15; // rdx
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  __int64 v17; // r8
  char v18; // r10
  unsigned __int8 v19; // r11
  unsigned __int64 v20; // rcx
  int v21; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+48h] [rbp-20h]

  result = RaidIsAdapterControlSupported(a3, 12);
  if ( (_DWORD)result && *(_QWORD *)(a3 + 5032) && *(_QWORD *)(a3 + 5048) )
  {
    SystemPowerHint = RaidAdapterGetSystemPowerHint(a3);
    result = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
    if ( a1 == 1 )
    {
      *(_BYTE *)(a3 + 109) |= 1u;
      v21 = RaidAdapterGetSystemPowerHint(a3);
      SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v21);
      if ( StorEtwLoggingEnabled )
      {
        if ( (v13 & (unsigned __int8)byte_1C0062741) != 0 )
          McTemplateK0qqqqq(v9, v8, v10, *(_DWORD *)(a3 + 56), v10, v12, v11, SystemPowerResumeLatency);
      }
      RaCallMiniportAdapterControl(a3 + 296);
      result = MEMORY[0xFFFFF78000000008];
      *(_QWORD *)(a3 + 5280) = MEMORY[0xFFFFF78000000008];
    }
    else if ( a1 == 2 )
    {
      *(_BYTE *)(a3 + 109) &= ~1u;
      v22 = RaidAdapterGetSystemPowerHint(a3);
      v14 = RaidAdapterGetSystemPowerResumeLatency(v22);
      if ( StorEtwLoggingEnabled && (v19 & (unsigned __int8)byte_1C0062741) != 0 )
        McTemplateK0qqqqq(v16, v15, v17, *(_DWORD *)(a3 + 56), v17, v18, v15, v14);
      result = RaCallMiniportAdapterControl(a3 + 296);
      if ( *(_QWORD *)(a3 + 5280) )
      {
        v20 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a3 + 5280);
        result = 0x346DC5D63886594BLL * v20;
        *(_QWORD *)(a3 + 5288) += v20 / 0x2710;
        *(_QWORD *)(a3 + 5280) = 0LL;
      }
    }
  }
  return result;
}
