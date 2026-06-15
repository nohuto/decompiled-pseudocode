/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002E578
 * Callers:
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x14000E480 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x14000E630 (-RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x14000E750 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     _ATL::CAtlMap_IUnknown___GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x140019F2C (_ATL--CAtlMap_IUnknown___GraphStreamingResourceManager--DeviceRegistrations--ListValue_ATL--CEle.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14001AED9 (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--Lis_ea_14001AED9.c)
 *     ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x14002E9F0 (-UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x14002EB00 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x14002EC10 (-UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A454 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v3 = 0LL;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 40) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v3 + 32); i != a2; i = *(_QWORD *)(i + 32) )
      v3 = i;
  }
  return ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveNode(
           a1,
           a2,
           v3);
}
