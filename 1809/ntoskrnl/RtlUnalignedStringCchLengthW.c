/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x140015DA0
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x14059A7F8 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x14059AA2C (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059C504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmValidateDeviceName @ 0x1405C76D0 (_CmValidateDeviceName.c)
 *     _PnpParseIndirectResourceString @ 0x140695814 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1406B7D58 (_PnpParseIndirectInfString.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406D35E4 (_RegRtlCreateTreeTransacted.c)
 *     _PnpSetPropertyWorker @ 0x1406E61F0 (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406E9870 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406FA568 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x140700FB4 (_PnpDeletePropertyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140900A48 (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x140903998 (DrvDbValidateDeviceIdName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnalignedStringCchLengthW(STRSAFE_PCUNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  if ( psz )
  {
    v3 = cchMax;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v3;
    }
    while ( v3 );
    result = v3 == 0 ? 0xC000000D : 0;
    if ( pcchLength )
    {
      if ( v3 )
        *pcchLength = cchMax - v3;
      else
        *pcchLength = 0LL;
    }
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
