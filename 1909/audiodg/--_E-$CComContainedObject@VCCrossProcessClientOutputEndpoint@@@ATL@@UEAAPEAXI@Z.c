/*
 * XREFs of ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14004DBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CDC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140012028 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140014F20 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14004D7C4 (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  void *v4; // rdx
  int v5; // r8d

  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint((CCrossProcessBaseClientEndpoint *)a1);
  if ( a1[536] )
  {
    a1[536] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 496));
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)a1);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(a1, v4, v5);
    }
  }
  return a1;
}
