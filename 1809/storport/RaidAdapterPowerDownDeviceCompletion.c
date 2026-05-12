/*
 * XREFs of RaidAdapterPowerDownDeviceCompletion @ 0x1C0016150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C003BBF8 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 *     McTemplateK0qpd @ 0x1C0041ED0 (McTemplateK0qpd.c)
 */

__int64 __fastcall RaidAdapterPowerDownDeviceCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // edx
  int v5; // ecx
  int v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h]
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 25LL, &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids, v2, a2);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( StorEtwLoggingEnabled )
  {
    v9[0] = 0LL;
    v9[1] = 0LL;
    IoGetActivityIdIrp(a2, v9);
    if ( (byte_1C00617E2 & 0x10) != 0 )
      McTemplateK0qpd(v5, v4, (unsigned int)v9, *(_DWORD *)(v2 + 56), a2, *(_DWORD *)(a2 + 48));
  }
  if ( *(char *)(v2 + 109) < 0 )
  {
    v7 = *(_DWORD *)(v2 + 700);
    v8 = *(_QWORD *)(v2 + 688);
    IoReportInterruptInactive(&v7);
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 272));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      26LL,
      &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids,
      v2,
      a2,
      *(_DWORD *)(a2 + 48));
  }
  return 0LL;
}
