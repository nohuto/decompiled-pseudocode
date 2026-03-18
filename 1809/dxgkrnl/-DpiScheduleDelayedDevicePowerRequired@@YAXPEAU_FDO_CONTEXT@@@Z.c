/*
 * XREFs of ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00430BC
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0043520 (DpiRequestDevicePowerState.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C004394C (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C002FE6C (McTemplateK0xq.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequired(struct _FDO_CONTEXT *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  const GUID *v4; // r8
  int v5; // [rsp+20h] [rbp-18h]

  v2 = (_QWORD *)WdLogNewEntry5_WdPower();
  v2[3] = a1;
  v2[4] = 0LL;
  v2[5] = 0LL;
  WdLogEvent5_WdPower(v2);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    v5 = 1;
    McTemplateK0xq(v3, &Dxgk_DevicePowerRequiredTimer, v4, *((_QWORD *)a1 + 474), v5);
  }
  KeSetTimer((PKTIMER)((char *)a1 + 4056), DueTime, (PKDPC)((char *)a1 + 4120));
}
