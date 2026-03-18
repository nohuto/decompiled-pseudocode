/*
 * XREFs of VidSchGetNodeOrdinal @ 0x1C0078D6C
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00109A8 (VidSchiDriverNodeEngineToSchedulerNode.c)
 */

__int64 __fastcall VidSchGetNodeOrdinal(__int64 a1, unsigned int a2, int a3)
{
  return VidSchiDriverNodeEngineToSchedulerNode(a1, a3, a2);
}
