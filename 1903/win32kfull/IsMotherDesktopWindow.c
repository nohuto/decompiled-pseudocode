/*
 * XREFs of IsMotherDesktopWindow @ 0x1C0095A60
 * Callers:
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D9874 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMotherDesktopWindow(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 == gTermIO[1] || a1 == qword_1C032B728 )
    return 1;
  return v1;
}
