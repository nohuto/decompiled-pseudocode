/*
 * XREFs of ?clear@?$list@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXXZ @ 0x1800C5940
 * Callers:
 *     ??1?$list@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x1800C23E4 (--1-$list@U-$pair@$$CB_KV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V-$allo.c)
 *     ??_EMagnifierProcessor@@UEAAPEAXI@Z @ 0x1800C2C80 (--_EMagnifierProcessor@@UEAAPEAXI@Z.c)
 *     ?OnMagnifierClientUnregistered@MagnifierProcessor@@UEAAXPEAVBamoMagnifierClientProxy@@@Z @ 0x180105890 (-OnMagnifierClientUnregistered@MagnifierProcessor@@UEAAXPEAVBamoMagnifierClientProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>::clear(
        __int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v2 + 3);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x20);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
