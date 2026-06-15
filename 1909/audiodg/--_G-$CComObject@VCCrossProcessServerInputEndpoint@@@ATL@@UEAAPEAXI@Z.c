/*
 * XREFs of ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14004DE00
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CDC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140012028 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140014F20 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004D674 (--1-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessBaseServerEndpoint *__fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        CCrossProcessBaseServerEndpoint *a1,
        char a2)
{
  void *v4; // rdx
  int v5; // r8d

  ATL::CComObject<CCrossProcessServerInputEndpoint>::~CComObject<CCrossProcessServerInputEndpoint>(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(a1);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(a1, v4, v5);
    }
  }
  return a1;
}
