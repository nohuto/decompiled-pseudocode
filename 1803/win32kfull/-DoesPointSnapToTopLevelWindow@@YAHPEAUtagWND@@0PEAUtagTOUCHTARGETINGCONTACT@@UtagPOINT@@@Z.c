/*
 * XREFs of ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01C9250
 * Callers:
 *     TouchTargetChildTree @ 0x1C01CB858 (TouchTargetChildTree.c)
 * Callees:
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01C8F5C (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C01C9A6C (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
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
