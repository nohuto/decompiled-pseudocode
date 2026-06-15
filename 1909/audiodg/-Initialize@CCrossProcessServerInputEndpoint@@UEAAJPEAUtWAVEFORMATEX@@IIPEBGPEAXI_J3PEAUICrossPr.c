/*
 * XREFs of ?Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140001A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140004110 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossPro.c)
 */

int __fastcall CCrossProcessServerInputEndpoint::Initialize(
        CCrossProcessServerInputEndpoint *this,
        struct tWAVEFORMATEX *a2,
        unsigned int a3,
        unsigned int a4,
        const unsigned __int16 *a5,
        void *a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        struct ICrossProcessMemoryManager *a10,
        struct ICrossProcessEventManager *a11,
        struct ICrossProcessMemory **a12,
        struct ICrossProcessEvent **a13)
{
  return CCrossProcessBaseServerEndpoint::Initialize(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
