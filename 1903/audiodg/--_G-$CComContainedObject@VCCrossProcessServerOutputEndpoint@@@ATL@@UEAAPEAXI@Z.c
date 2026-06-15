/*
 * XREFs of ??_G?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14004DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CEC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140011FE8 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140014AB0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x14004D9F4 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`scalar deleting destructor'(
        char *a1,
        int a2,
        int a3)
{
  char v3; // di
  void *v5; // rdx
  int v6; // r8d

  v3 = a2;
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint((CCrossProcessBaseServerEndpoint *)a1, a2, a3);
  if ( a1[536] )
  {
    a1[536] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 496));
  }
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)a1);
    }
    else
    {
      v5 = (void *)AERTGetDLLRTHeap();
      AERTFree(a1, v5, v6);
    }
  }
  return a1;
}
