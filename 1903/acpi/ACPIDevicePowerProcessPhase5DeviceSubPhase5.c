/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C0029BB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C000EE44 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase5(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rsi
  char v4; // al
  const char *v5; // rcx
  const char *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (_QWORD *)(a1 + 216);
  v4 = 0;
  v5 = (const char *)&unk_1C006FE7D;
  v6 = (const char *)&unk_1C006FE7D;
  if ( v1 )
  {
    v7 = v1[1];
    v4 = (char)v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v1[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (const char *)v1[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x4Fu,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      v4,
      v5,
      v6);
  *(_DWORD *)(a1 + 212) = 8;
  v8 = v2[2];
  if ( (v8 & 9) == 9 && ((v8 & 2) != 0 || (v1[1] & 0x40) != 0) )
  {
    memset(v2, 0, 0x28uLL);
    ACPIDeviceCompleteGenericPhase(0LL, 0LL, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a1 + 256) = -1073741436;
    ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a1 + 208), 2);
  }
  return 0LL;
}
