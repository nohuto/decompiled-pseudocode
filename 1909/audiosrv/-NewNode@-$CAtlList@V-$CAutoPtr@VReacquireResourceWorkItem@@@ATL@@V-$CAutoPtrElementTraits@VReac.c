/*
 * XREFs of ?NewNode@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@PEAV312@1@Z @ 0x1801007E0
 * Callers:
 *     ?AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z @ 0x1800FF498 (-AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z.c)
 *     ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18010BFAC (-QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z.c)
 *     ?AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z @ 0x18014575C (-AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z.c)
 *     ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x180147184 (-AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18004F2A0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  struct ATL::CAtlPlex *v6; // r8
  int v7; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v6 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    v7 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v6 + 16 * (v7 - 1) + 8 * (unsigned int)(v7 - 1) + 8); --v7 >= 0; i -= 3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v10 = *a2;
  v11 = *result;
  *a2 = 0LL;
  result[2] = v10;
  *(_QWORD *)(a1 + 32) = v11;
  *result = 0LL;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
