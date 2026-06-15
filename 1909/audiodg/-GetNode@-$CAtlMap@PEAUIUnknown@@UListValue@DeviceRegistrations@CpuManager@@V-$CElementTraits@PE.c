/*
 * XREFs of ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x14002CD1C
 * Callers:
 *     ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x14002DB80 (-RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@CpuManager@@@Z @ 0x14002E8B8 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::GetNode(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v5; // eax
  __int64 v8; // r8
  __int64 v9; // rdx

  v5 = *a2;
  *a4 = *a2;
  *a3 = v5 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3);
  if ( !v9 )
    return 0LL;
  while ( *(_DWORD *)(v9 + 32) != *a4 || *(_QWORD *)v9 != *(_QWORD *)a2 )
  {
    v8 = v9;
    v9 = *(_QWORD *)(v9 + 24);
    if ( !v9 )
      return 0LL;
  }
  *a5 = v8;
  return v9;
}
