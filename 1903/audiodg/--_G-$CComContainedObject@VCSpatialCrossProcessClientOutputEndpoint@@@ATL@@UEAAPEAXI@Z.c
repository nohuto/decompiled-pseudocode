/*
 * XREFs of ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140058030
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CEC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140011FE8 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140014AB0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140057DA4 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`scalar deleting destructor'(
        char *a1,
        int a2,
        int a3)
{
  char v3; // di
  void *v5; // rdx
  int v6; // r8d

  v3 = a2;
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint(
    (CSpatialCrossProcessClientEndpoint *)a1,
    a2,
    a3);
  if ( a1[1048] )
  {
    a1[1048] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 1008));
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
