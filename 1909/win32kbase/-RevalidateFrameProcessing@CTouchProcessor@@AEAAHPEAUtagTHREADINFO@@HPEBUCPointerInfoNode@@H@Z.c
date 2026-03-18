/*
 * XREFs of ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C016F930
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C016B1CC (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0170B10 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C016BE70 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

_BOOL8 __fastcall CTouchProcessor::RevalidateFrameProcessing(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        int a3,
        const struct CPointerInfoNode *a4,
        int a5)
{
  int v5; // ebx
  CPointerInfoNode *v6; // rcx
  struct tagTHREADINFO *v7; // r10
  _BOOL8 result; // rax

  v5 = 0;
  result = 0;
  if ( !a3 || (*((_DWORD *)a2 + 306) & 0x2000) != 0 )
  {
    if ( (unsigned int)CPointerInfoNode::IsValid(a4) )
    {
      LOBYTE(v5) = a5 != 0;
      if ( ((unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v6, v7) != 0) == v5 )
        return 1;
    }
  }
  return result;
}
