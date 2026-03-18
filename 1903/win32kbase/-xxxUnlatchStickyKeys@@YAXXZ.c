/*
 * XREFs of ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C0160140
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01601A0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C019D82C (ApiSetEditionPostAccessibility.c)
 */

void xxxUnlatchStickyKeys(void)
{
  unsigned int v0; // edx
  _BOOL8 (__fastcall **i)(struct tagKE *, unsigned int, __int64); // rax
  bool v2; // zf

  if ( gLatchBits )
  {
    v0 = 0;
    for ( i = (_BOOL8 (__fastcall **)(struct tagKE *, unsigned int, __int64))off_1C01D3FB0; ; ++i )
    {
      ++v0;
      if ( *i == xxxStickyKeys )
        break;
      if ( v0 >= 5 )
        return;
    }
    xxxUpdateModifierState((unsigned __int8)gLockBits, v0);
    v2 = gLatchBits == 0;
    gLatchBits = 0;
    if ( !v2 )
      ApiSetEditionPostAccessibility(1LL);
  }
}
