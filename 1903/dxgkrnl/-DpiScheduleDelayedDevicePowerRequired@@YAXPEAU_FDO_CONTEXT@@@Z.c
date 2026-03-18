/*
 * XREFs of ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C004A57C
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C004AA28 (DpiRequestDevicePowerState.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C004AE54 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C003566C (McTemplateK0xq.c)
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
    McTemplateK0xq(v3, &Dxgk_DevicePowerRequiredTimer, v4, *((_QWORD *)a1 + 487), v5);
  }
  KeSetTimer((PKTIMER)((char *)a1 + 4168), DueTime, (PKDPC)((char *)a1 + 4232));
}
