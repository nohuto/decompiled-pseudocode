/*
 * XREFs of ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C015DE50
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00604F0 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015C6E0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C015D940 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C015DFA0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C019B57C (ApiSetEditionPostAccessibility.c)
 */

void xxxTurnOffStickyKeys(void)
{
  unsigned int v0; // edx
  _BOOL8 (__fastcall **i)(struct tagKE *, unsigned int, __int64); // rax

  v0 = 0;
  for ( i = (_BOOL8 (__fastcall **)(struct tagKE *, unsigned int, __int64))off_1C01D1FC0; ; ++i )
  {
    ++v0;
    if ( *i == xxxStickyKeys )
      break;
    if ( v0 >= 5 )
      return;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, v0);
  dword_1C0211614 &= ~1u;
  gLatchBits = 0;
  gLockBits = 0;
  ApiSetEditionPostAccessibility(1LL);
}
