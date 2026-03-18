/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x140002B5C
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x1405BC824 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x1405C1154 (_PnpOpenPropertiesKey.c)
 *     _CmValidateDeviceName @ 0x1405C3240 (_CmValidateDeviceName.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406244FC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _PnpParseIndirectResourceString @ 0x1406B2818 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1406DA9F8 (_PnpParseIndirectInfString.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406F2794 (_RegRtlCreateTreeTransacted.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140701A0C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _PnpSetPropertyWorker @ 0x140707184 (_PnpSetPropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140715D4C (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x14071C104 (_PnpDeletePropertyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14093EE08 (_RegRtlDeletePathInternal.c)
 *     DrvDbValidateDeviceIdName @ 0x140941F50 (DrvDbValidateDeviceIdName.c)
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
