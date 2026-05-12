/*
 * XREFs of RaidAdapterPowerDownDeviceCompletion @ 0x1C0018610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0038EB0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0038F00 (WPP_SF_qqD.c)
 *     McTemplateK0qpd @ 0x1C003FF48 (McTemplateK0qpd.c)
 */

__int64 __fastcall RaidAdapterPowerDownDeviceCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // edx
  int v5; // ecx
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 25LL, &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids, v2, a2);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( StorEtwLoggingEnabled )
  {
    v7[0] = 0LL;
    v7[1] = 0LL;
    IoGetActivityIdIrp(a2, v7);
    if ( (byte_1C0062741 & 1) != 0 )
      McTemplateK0qpd(v5, v4, (unsigned int)v7, *(_DWORD *)(v2 + 56), a2, *(_DWORD *)(a2 + 48));
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 256));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      26LL,
      &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
      v2,
      a2,
      *(_DWORD *)(a2 + 48));
  }
  return 0LL;
}
