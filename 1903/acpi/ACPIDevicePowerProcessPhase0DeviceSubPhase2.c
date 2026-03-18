/*
 * XREFs of ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C0029AC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase2(__int64 a1)
{
  _QWORD *v1; // rax
  int v2; // edi
  const char *v4; // rcx
  const char *v5; // r8
  char v6; // r10
  __int64 v7; // rdx

  v1 = *(_QWORD **)(a1 + 40);
  v2 = 0;
  v4 = (const char *)&unk_1C006FE7D;
  v5 = (const char *)&unk_1C006FE7D;
  v6 = 0;
  if ( v1 )
  {
    v7 = v1[1];
    v6 = (char)v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x35u,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      v6,
      v4,
      v5);
  if ( (*(_DWORD *)(a1 + 232) & 1) == 0 )
  {
    *(_DWORD *)(a1 + 256) = 0;
    v2 = 2;
  }
  *(_DWORD *)(a1 + 212) = v2;
  ACPIDeviceCompleteGenericPhase(0LL, 0LL, 0LL, a1);
  return 0LL;
}
