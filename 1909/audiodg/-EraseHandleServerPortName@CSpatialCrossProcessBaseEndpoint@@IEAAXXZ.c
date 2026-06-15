/*
 * XREFs of ?EraseHandleServerPortName@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x14005BCB4
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14005C778 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGI.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005DD90 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::EraseHandleServerPortName(CSpatialCrossProcessBaseEndpoint *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 112);
  if ( v1 )
    memset_0((void *)(v1 + 388), 0, 0x80uLL);
}
