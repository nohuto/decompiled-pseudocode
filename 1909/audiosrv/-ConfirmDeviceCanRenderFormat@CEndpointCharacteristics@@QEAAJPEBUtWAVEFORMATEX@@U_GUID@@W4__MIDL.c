/*
 * XREFs of ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180007AA4
 * Callers:
 *     ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800078C8 (-ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800082C8 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800407D0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180116104 (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 */

__int64 __fastcall CEndpointCharacteristics::ConfirmDeviceCanRenderFormat(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        int a5)
{
  int SharedModeEnginePeriodicity; // ebx
  struct _GUID v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  v11 = *a3;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  this,
                                  (unsigned int)a4,
                                  a2,
                                  &v11,
                                  0,
                                  &v12,
                                  0LL,
                                  0LL,
                                  0LL);
  if ( SharedModeEnginePeriodicity >= 0 && a5 )
  {
    v12 = (unsigned int)(int)((double)(int)v12 * 10000000.0 / (double)(int)a2->nSamplesPerSec + 0.5);
    return (unsigned int)CEndpointCharacteristics::SetProcessingPeriod(this, &v12);
  }
  else if ( SharedModeEnginePeriodicity == -2004287480 )
  {
    v11 = *a3;
    if ( CEndpointCharacteristics::ConnectorProbablySupportsFormat(this, a4, &v11, a2) )
      return (unsigned int)-2005139389;
  }
  return (unsigned int)SharedModeEnginePeriodicity;
}
