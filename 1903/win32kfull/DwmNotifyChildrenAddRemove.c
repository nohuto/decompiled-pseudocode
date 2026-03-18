/*
 * XREFs of DwmNotifyChildrenAddRemove @ 0x1C00D94B4
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00D92C4 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C015E1B0 (xxxDwmStopRedirection.c)
 * Callees:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00D94F8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D9874 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
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
