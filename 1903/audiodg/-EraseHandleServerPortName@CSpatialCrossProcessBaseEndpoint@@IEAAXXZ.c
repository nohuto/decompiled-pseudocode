/*
 * XREFs of ?EraseHandleServerPortName@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x14005BD74
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14005C838 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGI.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005DE50 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::EraseHandleServerPortName(CSpatialCrossProcessBaseEndpoint *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 112);
  if ( v1 )
    memset_0((void *)(v1 + 388), 0, 0x80uLL);
}
