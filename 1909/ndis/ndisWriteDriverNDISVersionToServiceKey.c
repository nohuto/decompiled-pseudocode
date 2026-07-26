/*
 * XREFs of ndisWriteDriverNDISVersionToServiceKey @ 0x1C0037FAC
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036F60 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisFRegisterFilterDriver @ 0x1C0037390 (NdisFRegisterFilterDriver.c)
 *     NdisRegisterProtocolDriver @ 0x1C0037850 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00930F0 (NdisRegisterProtocol.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C00964B8 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ndisWriteDriverNDISVersionToServiceKey(int a1, int a2, char a3, int a4, int a5, __int64 a6)
{
  BOOLEAN result; // al
  const WCHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const WCHAR *v13; // rdx
  _DWORD ValueData[10]; // [rsp+30h] [rbp-28h] BYREF

  result = RtlIsStateSeparationEnabled();
  if ( !result )
  {
    ValueData[0] = a1;
    RtlWriteRegistryValue(1u, *(PCWSTR *)(a6 + 8), L"NdisMajorVersion", 4u, ValueData, 4u);
    v11 = *(const WCHAR **)(a6 + 8);
    ValueData[0] = a2;
    RtlWriteRegistryValue(1u, v11, L"NdisMinorVersion", 4u, ValueData, 4u);
    v12 = *(const WCHAR **)(a6 + 8);
    if ( a3 )
    {
      ValueData[0] = a4;
      RtlWriteRegistryValue(1u, v12, L"DriverMajorVersion", 4u, ValueData, 4u);
      v13 = *(const WCHAR **)(a6 + 8);
      ValueData[0] = a5;
      return RtlWriteRegistryValue(1u, v13, L"DriverMinorVersion", 4u, ValueData, 4u);
    }
    else
    {
      RtlDeleteRegistryValue(1u, v12, L"DriverMajorVersion");
      return RtlDeleteRegistryValue(1u, *(PCWSTR *)(a6 + 8), L"DriverMinorVersion");
    }
  }
  return result;
}
