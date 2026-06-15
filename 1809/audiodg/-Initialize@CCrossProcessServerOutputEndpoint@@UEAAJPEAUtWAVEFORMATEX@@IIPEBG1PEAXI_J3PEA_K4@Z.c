/*
 * XREFs of ?Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z @ 0x140012440
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z @ 0x14000F420 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::Initialize(
        CCrossProcessServerOutputEndpoint *this,
        struct tWAVEFORMATEX *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 *a5,
        const unsigned __int16 *a6,
        _QWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12)
{
  return CCrossProcessBaseServerEndpoint::Initialize(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
