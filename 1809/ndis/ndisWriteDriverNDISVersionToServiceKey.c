/*
 * XREFs of ndisWriteDriverNDISVersionToServiceKey @ 0x1C00CE0CC
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021CD8 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisFRegisterFilterDriver @ 0x1C00220A0 (NdisFRegisterFilterDriver.c)
 *     NdisRegisterProtocolDriver @ 0x1C00CDAF0 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00EDB50 (NdisRegisterProtocol.c)
 *     ndisGetMiniportInfo @ 0x1C00EF6C8 (ndisGetMiniportInfo.c)
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
