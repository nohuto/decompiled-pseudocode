/*
 * XREFs of ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0050A30
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 *     AMLIResumeInterpreter @ 0x1C00631E0 (AMLIResumeInterpreter.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0SystemSubPhase1(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  const char *v4; // rcx
  const char *v5; // r8

  v1 = *(_QWORD **)(a1 + 40);
  if ( v1 )
  {
    v3 = v1[1];
    v4 = (const char *)&unk_1C006FE7D;
    v5 = (const char *)&unk_1C006FE7D;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[70];
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[71];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x36u,
        (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
        a1,
        (char)v1,
        v4,
        v5);
  }
  *(_DWORD *)(a1 + 212) = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    AMLIResumeInterpreter();
  ACPIDeviceCompleteGenericPhase(0LL, 0LL, 0LL, a1);
  return 0LL;
}
