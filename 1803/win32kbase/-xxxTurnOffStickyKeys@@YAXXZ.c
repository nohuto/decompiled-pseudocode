/*
 * XREFs of ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C010BA00
 * Callers:
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010AA50 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C010B530 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C010BC40 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C010BB50 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013F790 (ApiSetEditionPostAccessibility.c)
 */

void xxxTurnOffStickyKeys(void)
{
  unsigned int v0; // edx
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, __int64); // rax

  v0 = 0;
  for ( i = (__int64 (__fastcall **)(struct tagKE *, unsigned int, __int64))off_1C0172EF0; ; ++i )
  {
    ++v0;
    if ( *i == xxxStickyKeys )
      break;
    if ( v0 >= 5 )
      return;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, v0);
  dword_1C01A4E84 &= ~1u;
  gLatchBits = 0;
  gLockBits = 0;
  ApiSetEditionPostAccessibility(1LL);
}
