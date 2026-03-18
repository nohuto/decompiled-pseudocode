/*
 * XREFs of ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0203978
 * Callers:
 *     TouchTargetChildTree @ 0x1C0205D88 (TouchTargetChildTree.c)
 * Callees:
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C02036B8 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C02040F0 (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall DoesPointSnapToTopLevelWindow(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagTOUCHTARGETINGCONTACT *a3,
        struct tagPOINT a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a1 && (unsigned int)CanPointStartResize(a1, a3, a4) )
    return (unsigned int)TouchTargetingIsSpecialTarget(a1, a2) != 0;
  return v4;
}
