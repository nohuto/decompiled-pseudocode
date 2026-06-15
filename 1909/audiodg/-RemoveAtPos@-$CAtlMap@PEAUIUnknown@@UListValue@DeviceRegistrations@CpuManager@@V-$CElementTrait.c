/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002E518
 * Callers:
 *     ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x14002DB80 (-RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x14002DDA0 (-RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x14002DF80 (-RegisterThread@CpuManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     _ATL::CAtlMap_unsigned_long_CpuManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_CpuManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14002E88D (_ATL--CAtlMap_unsigned_long_CpuManager--HandleRegistrations--ListValue_ATL--CElemen_ea_14002E88D.c)
 *     _ATL::CAtlMap_IUnknown___CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown____ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14002E933 (_ATL--CAtlMap_IUnknown___CpuManager--DeviceRegistrations--ListValue_ATL--CElementTr_ea_14002E933.c)
 *     ?UnregisterDevice@CpuManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x14002E960 (-UnregisterDevice@CpuManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?UnregisterProcess@CpuManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x14002EA70 (-UnregisterProcess@CpuManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?UnregisterThread@CpuManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x14002EB80 (-UnregisterThread@CpuManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A454 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v3 = 0LL;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 32) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v3 + 24); i != a2; i = *(_QWORD *)(i + 24) )
      v3 = i;
  }
  return ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::RemoveNode(
           a1,
           a2,
           v3);
}
