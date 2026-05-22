/*
 * XREFs of ??4?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z @ 0x1800A8C28
 * Callers:
 *     ??$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z @ 0x1800A83E8 (--$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z.c)
 *     ??$GetPropertyValue@_K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x1800A85C0 (--$GetPropertyValue@_K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z.c)
 *     ?GetUInt64KeyFromUInt64Value@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@_KPEA_K@Z @ 0x1800A9850 (-GetUInt64KeyFromUInt64Value@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@_KPEA_K@Z.c)
 *     ?NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@PEAUGameInputDeviceInfo@@@Z @ 0x1800AA710 (-NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@PEAUGameInputDeviceInfo@@@Z.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800AD114 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 *     ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800B045C (-NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IRawInputProvider>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *a1;
    }
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
