/*
 * XREFs of DwmNotifyChildrenAddRemove @ 0x1C000FC74
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0010444 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C015F2D0 (xxxDwmStopRedirection.c)
 * Callees:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C000FCB8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0010034 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 */

void __fastcall DwmNotifyChildrenAddRemove(struct tagDESKTOP *a1, int a2)
{
  if ( a2 )
  {
    DwmNotifyChildrenCreateDestroy(a1, 1);
    DwmNotifyChildrenLinkUnlink(a1, 1);
  }
  else
  {
    DwmNotifyChildrenLinkUnlink(a1, 0);
    DwmNotifyChildrenCreateDestroy(a1, 0);
  }
}
